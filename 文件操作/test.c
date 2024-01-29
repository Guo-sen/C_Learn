#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<errno.h>
//把数据从内存上写到文件，这叫输出
//把数据从文件中读到内存，这叫输入


//文件指针：缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”
//每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名字，文件状态以及文件当前的位置等）。这些
//信息是被保存在一个结构体变量中的，该结构体类型是有系统声明的，取名FILE
//每当打开一个文件的时候，系统会根据文件的情况自动创建一个FILE结构的变量，并且填充其中的信息，使用者不必关心细节
//一般都是通过一个FILE的指针来维护这个FILE结构的变量
//FILE* pf //文件指针变量
//通过文件指针变量，能够找到与它关联的文件

//文件操作的流程
//1.打开文件
//2.读/写文件
//3.关闭文件

//文件的打开和关闭
//FILE *fopen( const char *filename, const char *mode );  The fopen function opens the file specified by filename. _
//Each of these functions returns a pointer to the open file. A null pointer value indicates an error. 

//filename：Filename
//mode：Type of access permitted

//The character string mode specifies the type of access requested for the file, as follows:

//"r"：Opens for reading.If the file does not exist or cannot be found, the fopen call fails.
//
//"w"：Opens an empty file for writing.If the given file exists, its contents are destroyed.
//
//"a"：Opens for writing at the end of the file(appending) without removing the EOF marker before writing new data to the file; 
//     creates the file first if it doesn’t exist.
//
//"r+"：Opens for both reading and writing. (The file must exist.)
//
//"w+"：Opens an empty file for both reading and writing.If the given file exists, its contents are destroyed.


//文件的打开和关闭（fopen和fclose）

//
//int main()
//{
//	//打开文件
//	//FILE* pf = fopen("test.txt", "r"); //以相对路径的方法打开文件
//	FILE* pf = fopen("C:\\Users\\郭先森！！！\\Desktop\\test.txt", "r");//以绝对路径的方法打开文件
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//.....
//	// .....
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//读字符和写字符的方法（fgetc和fputc）
//fgetc和fputc适用于所有输入流和输出流
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	char i = 0;
//	for (i = 'a'; i <='z'; i++)
//	{
//	 fputc(i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	
//	//打开文件
//	pf = fopen("test.txt", "r");
//
//	//读文件
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);*/
//	int ch = 0;
//	while((ch=fgetc(pf))!=EOF)
//	{ 
//	   printf("%c ", ch);
//	}
//	return 0;
//}



//写一行数据和读一行数据（fputs和fgets）
// fputs和fgets 适用于所有输出流和输入流
//int main()
//{
//
//	FILE* pf = fopen("test.txt", "w");  //w方式打开文件后，如果写文件，会把文件原来的东西清空，a（追加）的方式打开进行写则不会清空原来的
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//写一行数据
//	fputs("hello world!!!\n", pf);
//	fputs("hello world!!!\n", pf);
//	fclose(pf);
//    pf = NULL;
//	
//
//    pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//perror("fopen") //当有报错的时候这样也可以打印出来报错信息，打印出来的形式是fopen：xxxxxxxx(错误信息)
//		return 1;
//	}
//	//读一行
//	char arr[20] = { 0 };
//	fgets(arr, 5, pf);//实际上读的是4个，会自动在arr里补一个 \0
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//格式化输入数据和格式化输出数据（fscanf，fprintf）
//fscanf，fprintf适用于所有输入流和所有输出流
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "张三",18,59.9f };
//	FILE* pf = fopen("test.txt", "w");
//	if(pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	//写数据
//	fprintf(pf,"%s %d %f", s.arr, s.age, s.score); //和printf参数有点像
//	fclose(pf);
//	pf = NULL;
//
//	//读数据
//	struct S ss = { 0 };
//	pf=fopen("test.txt", "r");
//	fscanf(pf, "%s %d %f", ss.arr, &(ss.age), &(ss.score));//类比scanf的参数形式
//	printf("%s %d %f\n", ss.arr, ss.age, ss.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//任何一个C程序，只要运行起来就会默认打开3个流
//stdin   标准输入流 键盘
//stdout  标准输出流 屏幕
//stderr  标准错误流 屏幕
//以上三个流的类型都是FILE*
//所以在使用scanf、 printf的时候直接使用就搞定了

//但是对于文件的操作，需要先打开文件，获得输入流或者输出流，才能像流中读或者写数据

//像上述提到的适用于所有输出流的函数，也可以向屏幕上打印数据

//int main()
//{
//	char arr[] = "hello world!!!";
//
//	fprintf(stdout, "%s", arr);
//	return 0;
//}





//二进制输入和二进制输出（fread和fwrite）
//适用于文件（只能从文件读或者写文件）

//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "张三",18,59.9f };
//	FILE* pf = fopen("test.txt", "wb");//二进制写打开
//	if(pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//二进制写
//	//第一个参数是数据来源的地址，第二个参数是每个元素的大小，第三个参数是写几个元素
//	fwrite(&s,sizeof(struct S),1,pf);
//	fclose(pf);
//	pf = NULL;
//	
//	struct S ss = { 0 };
//	pf = fopen("test.txt", "rb");
//	fread(&ss, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", ss.arr, ss.age, ss.score);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//对比一组函数
//scanf/fscanf/sscanf
//printf/fprintf/sprintf


//scanf 是针对标准输入的格式化输入语句，printf是针对标准输出的格式化输出语句
//fscanf 是针对所有输入流的格式化输入语句，fprintf是针对所有输出流的格式化输出语句
// 



//sscanf int sscanf( const char *buffer, const char *format [, argument ] ... );Read formatted data from a string.从字符串中读格式化数据
//Each of these functions returns the number of fields successfully converted and assigned;
//the return value does not include fields that were read but not assigned. 
//A return value of 0 indicates that no fields were assigned.
//The return value is EOF for an error or if the end of the string is reached before the first conversion.

//sprintf   int sprintf( char *buffer, const char *format [, argument] ... );Write formatted data to a string.
//sprintf returns the number of bytes stored in buffer, not counting the terminating null character. 
//swprintf returns the number of wide characters stored in buffer, not counting the terminating null wide character.


//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "张三",50,50.9f };
//	struct S ss = { 0 };
//	char buf[100] = { 0 };
//
//	//把s中格式化的数据放到buf中
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//	printf("buf= %s\n", buf);	//buf里的“张三 50 50.9f” 已经是个字符串了
//
//	//把buf中的数据放到 ss里
//	sscanf(buf, "%s %d %f", ss.arr, &(ss.age), &(ss.score));
//	printf("ss = %s %d %f\n", ss.arr, ss.age, ss.score);
//
//
//	return 0;
//}
//以上两个函数（sprintf、sscanf不针对任何流，针对的是字符串）
//应用场景：序列化和反序列化



//文件的随机读写

//fseek 将文件指针定位到偏移量处
//ftell  返回文件指针相对于起始位置的偏移量
//rewind 让文件指针回到文件的起始位置
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	//int ch = fgetc(pf); //刚开始指向第一个字符，当读完后，会指向第二个字符
//	//printf("%c ", ch);
//	//ch = fgetc(pf);
//	//printf("%c ", ch);
//
//	//定位文件指针
//	fseek(pf, 2, SEEK_SET); //将文件指针定位到偏移量处
//	int ch = fgetc(pf);
//	printf("%c ", ch);
//	printf("%d\n", ftell(pf));
//
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	printf("%d\n", ftell(pf));
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//
//	fclose(pf);
//	pf = NULL;
//	
//
//	return 0;
//}


//文本文件和二进制文件
//数据在内存中以二进制的形式存储，如果不加转换的输出到外存，就是二进制文件
//如果要求在外存上以ASCII码的形式存储，则需要在存储前转，以ASCII字符的形式存储的文件就是文本文件

//一个数据在内存的存储
//字符一律以ASCII形式存储，数值型数据既可以用ASCII形式存储，也可以用二进制形式存储
//如整数10000 以ASCII形式输出到磁盘，占用5个字节（每个字符一个字节），而用二进制输出，则只占用4个字节
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf); //二进制的形式写道文件中
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//文件读取结束的判定
// 
// 别错误使用feof（网上有好多使用feof的错误例子）
// ferror经常和feof配合使用
//在文件读取过程中，不能用feof函数的返回值直接判断文件读取是否结束
//而是应用于 当文件读取结束的时候，判断是文件读取失败结束，还是遇到文件尾结束
// 
//
//文件读取结束的判定
//1.文本文件读取是否结束，判断返回值是否为EOF（fgetc）或者NULL（fgets）

//2.二进制文件的读取结束判断，判断返回值是否小于实际要读的个数
//如：fread判断返回值是否小于实际要读的个数


//文件缓冲区
//ANSIC标准采用“缓冲文件系统”处理数据文件，所谓缓冲文件系统是指系统自动地在内存中为程序中每一个正在使用的文件开辟一块（文件缓冲区）
//从内存向磁盘输出数据会先送到内存中的缓冲区，装满整个缓冲区后才一起送到磁盘上。如果从磁盘向计算机读入数据，则从磁盘文件中读取数据，输入
//到内存缓冲区（充满缓冲区），然后再从缓冲区逐个地将数据送到程序数据区（程序变量等），缓冲区的大小根据C编译系统决定

//以下代码可以证明有缓冲区的存在
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将字符串放在输出缓冲区
	printf("睡眠10秒\n"); //此时打开文件会发现文件什么都没写入
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf); //刷新缓冲区时，才能将缓冲区的数据写在文件上（磁盘）
	//注：在某些版本（高版本）的vs中，fflush不能使用
	Sleep(10000);

	fclose(pf);//注：fclose在关闭文件时，也会刷新缓冲区
	pf = NULL;
	return 0;
}
//所以C语言在操作文件的时候，需要做刷新缓冲区或者在文件操作结束的时候关闭文件，如果不做，可能会导致数据丢失	

//int main()
//{
//
//
//	return 0;
//}

