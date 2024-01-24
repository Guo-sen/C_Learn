#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<memory.h> 

//C语言中，对字符和字符串的处理是很频繁的，但是C语言本身是没有字符串类型的，字符串通常放在常量字符串中或者字符数组中
// 字符串常量适用于那些对它不做修改的字符串函数
// 
// 
// strlen
//  size_t strlen(const char* str)
//字符串以'\0'作为结束标志，strlen函数返回的是在字符串中‘\0’前面出现的字符个数（不包含'\0'）
//参数指向的字符串必须要以'\0'结束
//注意返回值的类型为 size_t，是无符号的      typedef unsigned int     size_t;

//int main()
//{
//	//注意返回值的类型为 size_t，是无符号的      typedef unsigned int     size_t;
//	if (strlen("abc") - strlen("abcdefg") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//模拟实现
//#include<assert.h>
////计数器的方法
//size_t my_strlen (const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len=my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//还有指针-指针的方法，递归的方法，以后应该自己实现



//strcpy
//char* strcpy (char* destnation,const char* source)
//源字符串必须以\0结束，拷贝的时候会把源字符串中的\0拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可修改（不能修改常量字符串等情况）


//char* my_strcpy(char* destination, const char* source)
//{
//	assert(destination != NULL&&source!=NULL);
//	char* ret = destination;//函数返回值要返回目标空间的起始地址，方便目标空间被调用
//	/*while (*source!='\0')
//	{
//		*destination++ = *source++;
//		
//	}
//	*destination = *source;*/
//	while (*destination++ = *source++)  //当*source为\0的时候，把它赋值给destinatioin，整个表达式的结果为\0，即0，循环停止
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char name[20] = { 0 };
//	my_strcpy(name, "zhangsan");
//	printf("%s\n",name);
//	return 0;
//}



//strcat  字符串追加
//char *strcat( char *strDestination, const char *strSource );
//源字符串必须以\0结束，会将源字符串的\0拷贝到目标空间
//目标空间必须足够大，以确保能放下源字符串，目标空间必须可变
//char* my_strcat(char* dest, const char* sour)
//{
//	char* ret = dest;
//	assert(dest && sour);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
// 	while (*dest++ = *sour++)
//	{
//		;
//	}
//	return ret;
//}
////尽量不要自己给自己追加
////my_strcat(arr1,arr1)
////会失败，但是某些环境下（vs2022 x64，或者其他环境）能成功
//int main()
//{
//	char arr1[20] = "hello ";
//	//想在后边追加一个world
//	//strcat(arr1, "world");
//	my_strcat(arr1, "world");
//	
//
//	printf("%s\n", arr1);
//	return 0;
//}





//strcmp  用来比较两个字符串是否相等
//int strcmp( const char *string1, const char *string2 ）

//int my_strcmpy (const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//
//}

//优化
//int my_strcmpy(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1-*str2);	
//}
//
//int main()
//{
//	int ret = my_strcmpy("abcd","abcde");
//	if (ret == 0)
//	{
//		printf("两个字符串相同\n");
//	}
//	else
//	{
//		printf("两个字符不串相同\n");
//
//	}
//
//	return 0;
//}

//strcpy strcat strcmp都是长度不受限制的字符串函数（去掉#define_CRT_SECURE_NO_WARNINGS会直接报错这些函数不安全）
//会带来一些问题，如果目标空间不够大，会造成越界访问，程序会崩溃

//所以c语言又提供了一些长度受限制的函数
// strncpy  strncat   strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hellow world";
//	//strcpy(arr1,arr2);
//
//	//假设只想拷贝前五个字符
//	strncpy(arr1,arr2,3); //char * strncpy ( char *strDest, const char *strSource, size_t count );
//	//如果arr2只有2个字符，硬要让strncpy拷贝5个字节，那么拷贝完两个字符后，后三个会自动都放成'\0'
//
//	printf("%s\n",arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	//追加完成后会自动在末尾补一个 '\0',如果arr2只有2个字符，硬要strncat追加5个，它在追加完那两个字符后，
//	//									会自动补1个\0然后结束。
//	printf("%s\n", arr1);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdefghijk";
//	if (strncmp(arr1, arr2, 3) == 0)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//strstr
// 查找子串的一个函数：在一个字符串中，查找另一个字符串
// char *strstr( const char *string, const char *strCharSet );
//返回的是要查找的那个字符串的地址，找不到的话，返回空指针

//int main()
//{
//	char email[]="2410914566@qq.com";
//
//	char* ret = strstr(email, "qq");
//	printf("%s\n",ret);
//	return 0;
//}

//模拟实现

//情况1：abcdef 找 bcd （一次匹配就可以找到）
//情况2：abbcde 找 bbc （多次匹配才可以找到）

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* tmp = str1;
//
//	while (*tmp)
//	{
//		s1 = tmp;
//		s2 = str2;
//
//		while (*s1 != '\0'&& *s2 !='\0' && * s1 == *s2)
//		{
//			s1++, s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*) tmp;
//		}
//		tmp++;
//	}
//	return NULL;
//}
////以上算法效率不太高，可以学习KMP算法
////KMP算法查找子字符串效率高，但是实现难度大
//int main()
//{
//	char arr1[] = "abbbbcdef";
//	char* ret = my_strstr(arr1, "bbc");
//	printf("%s\n", ret);
//	return 0;
//}
//






//一个很怪的函数
//strtok  可以用来切割字符串                    （p.124）
// char *strtok( char *strToken, const char *strDelimit )
//
// 第一个参数是被切割的字符串（包含了0个或者多个分隔符）
// 第二个参数是个字符串，定义了用作分隔符的字符集合
// 
//	strtok会找到strToken中的下一个标记，并将其用'\0'结尾，返回一个指向这个标记的指针（返回的是\0所在字符串的地址）。（strtok函数会改变被操作的字符串
// 所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改）
//
//strtok第一个参数不为空指针的时候，strtok函数将会找到str中的第一个标记，strtok函数会保存它在字符串中的位置
//strtok函数第一个参数为空指针的时候，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//如果字符串中不存在更多的标记，则返回空指针

//int main()
//{
//	const char* sep = "@.";
//	char arr[] = "2410914566@qq.com";
//	char cp[30] = { 0 };//"2410914566@qq.com";
//	strcpy(cp, arr);
//
//	
//	//char* ret = strtok(cp, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); 
//	   	ret != NULL;
//		ret = strtok(NULL, sep))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//strtok函数有记忆功能
//联想之前的static关键字（修饰的变量出了函数后，变量不会销毁）




//strerror
//返回错误码对应的错误信息（c语言的库函数在执行失败的时候，都会返回一个错误码）
//#include<errno.h>
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//
//	FILE* pf = fopen("test.txt", "r");
//	//如果打开成功，会返回一个有效的地址，如果打开失败，会返回一个空指针,同时会生成一个错误码
//	//记录在errno这个变量中，这个变量是C语言设置的一个全局的错误码存放的变量
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	return 0;
//}




//字符分类函数
//iscntrl 任何控制字符
//isspace 空白字符：空格、换行、换页、回车、制表符、垂直制表符
//isdigit 十进制数字0~9
//isxdigit 16进制数字，包括所有10进制数字，小写字母a~f，大写字母A~F
//islower 小写字母a~z
//isupper 大写字母A~Z
//isalpha 字母a~z或者A~Z
//isalnum 字母或者数字，a~z、A~Z、0~9
//ispunct 标点符号，任何不属于数字或者字母的图形字符（可打印）
//isgraph 任何图形字符
//isprint 任何可打印字符，包括图形字符和空白字符

//#include<ctype.h>
//int main()
//{
//	//isspace   int isspace( int c )	
//	//isspace returns a non-zero value if c is a white-space character  如果是空白字符，返回非0
//	//不是空白，返回0
//
//	int ret = isspace('\n');
//	printf("ret=%d\n", ret);
//
//	 ret = isspace('w');
//	printf("ret=%d\n", ret);
//	return 0;
//}







//字符转换函数
//tolower   转小写
//toupper   转大写

//#include<ctype.h>
//int main()
//{
//	printf("%c\n", tolower('R'));
//	printf("%c\n", tolower('@'));//如果传过去的不是大写字母，不变
//	return 0;
//}








//对比着上述一些函数学习一些内存函数


//int main()
//{
//
//	return 0;
//}
