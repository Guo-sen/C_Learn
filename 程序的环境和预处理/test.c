#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//程序的翻译环境和执行环境
//在ANSI C的任何一种实现中，存在两个不同的环境
//1.第一种是翻译环境，在这个环境中，源代码被转化为可执行的机器指令
//2.第二种是执行环境，它用于实际执行代码


//每一个源文件（.c文件）都会单独经过编译器处理，生成一个目标文件(.obj文件)
//多个目标文件和链接库经过链接器的处理最终生成可执行程序


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
//以上代码编译过后可以在项目文件夹下看到生成的.obj文件


//编译又划分为3个小阶段
//预编译（预处理）、编译、汇编
//会一次性把三个步骤全部做完，如果想要观察每一步都做了什么事情，在linux下，用gcc可以看到每一步发生了什么

//可以发现在预处理阶段会完成
//1.头文件的包含（#include）
//2.#define定义符号的替换，并且完成替换后把符号删掉
//3.注释的删除

//在编译阶段
//把C语言代码转换成汇编代码（语法分析、词法分析、语义分析、符号汇总）
//在符号汇总阶段，会把一些全局的符号汇总出来（全局变量、函数（包括main函数））

//在汇编阶段会把汇编代码转换成机器指令，还会形成符号表


//在链接阶段
//1.合并段表
//2.符号表的合并和重定位



//运行环境
//1.程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，程序的载入必须由手工安排，也可能是通过可执行代码
//置入只读内存来完成
//2.程序的执行便开始，接着便调用main函数
//3.开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回地址。程序同时也可以用静态（static）内存，存储
//于静态内存中的变量在程序的整个执行过程一直保留它们的值
//4.终止程序。正常终止main函数，也有可能是意外终止




//预定义符号
//__FILE__  进行编译的源文件
//__LINE__  文件当前的行号
//__DATE__  文件被编译的日期
//__TIME__  文件被编译的时间
//
// 以上一些常用的常常用来记录日志
//
// __STDC__  如果编译器支持ANSI C，其值为1，否则未定义 (vs是未定义，gcc是1)
// 
// 
// 
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return EXIT_FAILURE;//失败返回
//		//EXIT_SUCCESS  成功返回
//	}
//
//
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf,"file:%s line：%d data：%s time：%s i=%d\n", __FILE__,__LINE__,__DATE__,__TIME__,i);
//		//__FILE__ 会输出在哪个文件中运行的这段代码（打印i）
//		//__LINE__ 会输出执行的是哪一行代码
//		//__DATE__  会输出执行代码的时候的日期
//		//__TIME__  会输出执行代码的时候的时间
//	}
//	//关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//还有一些其他的预定义符号可以自己学习
// 	



//#define 定义标识符
//语法：#define name stuff


//#define MAX 100
//#define STR "HELLO WORLD" //#define 也可以定义字符串
//#define print printf("hello world\n")
////在define定标识符后边不要加分号（如果加了分号是一个非常坑的操作）
//
//int main()
//{
//
//	int m = MAX; //预处理完成后 :int m=100;
//	printf("%d\n", MAX);//与处理完成后：printf（“%d\n”,100）;
//	//MAX在预处理阶段会被替换成100
//	printf("%s\n", STR);
//	print;
//	return 0;
//}
//vs也可以看到预处理之后生成的文件
//解决方案资源管理器--工程名右键--属性-- C/C++ ---预处理器---预处理到文件

//#define DEBUG_PRINT printf("file:%s\tline:%d\tdate:%s\ttime:%s\n",\
//__FILE__,\
//__LINE__,\
//__DATE__,\
//__TIME__)
//  \ 续行符  当#define的内容一行太多了可以使用 \ ,但是注意 \ 后边不可以由其他符号（比如空格，其实\ 可以理解为一个转义符号，转义的是回车）






//#define 定义宏
//#define机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定义宏（define macro）
//宏的声明方式
//#define name(parament-list) stuff 
//其中的parament-list是一个由逗号隔开的符号表，它们可能出现在stuff中
//注意：参数列表的左边必须与name紧邻，如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分
//
//#define SQUARE(X) X*X
//int main()
//{
//	int i = 0;
//	i = SQUARE(5);
//	printf("%d\n",i);
//	i = SQUARE(5+1);
//	//宏是完成替换的
//	//5+1*5+1 = 11；
//	printf("%d\n", i);
//	return 0;
//}
//以上宏 可以修改为  #define SQUARE(X) (X)*(X)  或者 #define SQUARE(X) ((X)*(X))

//切不可以为只需要给 每个参数分别加上括号就可以万无一失
//#define DOUBLE(X) (X)+(X)
//int main()
//{
//	int r = 10 * DOUBLE(3);
//	// 10*（3）+（3）
//	printf("%d\n", r);
//
//	return 0;
//}
//以上宏改为 #define DOUBLE(X) ((X)+(X))


//#define替换规则
//在程序中扩展#define定义符号和宏时，需要涉及几个步骤
//1.在调用宏时，首先对参数进行检查，看看是否包含任何#define定义的符号。如果是，它们首先被替换
//2.替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被它们的值所替换
//3.最后，再次对结果文件进行扫描，看看它是否包含任何由#define 定义的符号。如果是，就重复上述处理过程
// 注意：
// 1.宏参数和#define中可以出现其它#difine定义的符号。但是对于宏，不能出现递归
// 2.当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索（当字符串中有#define定义的符号的时候，不会把字符串中的那串字符替换掉） 

	 
// # 和 ##


//#N 会转化成“a”或者“b”，会把参数那个N转换成字符串
//#define PRINT(N) printf("the value of " #N " is %d\n", N)
//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//
//	int a = 10;
//	printf("the value of a is %d\n", a);
//	PRINT(a); // printf("the value of " "a" " is %d\n", a);
//	int b = 10;
//	printf("the value of b is %d\n", b);
//	PRINT(b);// printf("the value of " "b" " is %d\n", a);
//
//		
//	return 0;
//}

//##可以把位于它两边的符号合成一个符号
//它允许宏定义从分离的文本片创建标识符

//						会把传过来的两个参数合并成一个符号
//#define CAT(Class,Num) Class##Num
//int main()
//{
//	int Class106 = 100;
//	printf("%d\n", CAT(Class,106));
//	//printf("%d\n",Class106)
//	return 0;
//}



//带副作用的宏参数
//当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能出现危险，导致不可预测的后果
//副作用就是表达式求值的时候出现的永久性效果

#define MAX(x,y) ((x)>(y)?(x):(y))
int main()
{
	/*int a = 10;
	int b = a + 1;*/
	//int b = ++a; //这种写法就是有副作用的，在给b赋值的时候改变了自己本身的值

	//正常情况：
	//int max = (2, 3);
	//printf("max=%d\n", max);

	//特殊情况
	int a = 5;
	int b = 4;
	int m = MAX(a++, b++);
	//int m = (a++)>(b++)?(a++):(b++);

	printf("m=%d\n", m);
	printf("a=%d b=%d",a,b);

	return 0;
}




//int main()
//{
//
//
//	return 0;
//}