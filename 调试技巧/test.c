#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//Debug通常成为调试版本，它包含了调试信息，并且不做任何优化，便于程序员调试程序
//Release称为发布版本，它往往是进行了各种优化，使得程序和代码在大小和运行速度上都是最优的，以便用户很好地使用

//一些快捷键
//f5 启动调试，经常用来直接跳到下一个断点处
//f9 创建断点和取消断点
//f10 逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句
//f11 逐语句，每次都执行一条语句，这个快捷键可以进入到函数内部
//crtl+f5 开始执行不调试，可以让程序直接运行
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//调试的时候查看程序当前信息
//查看变量的值 调试开始后 调试——窗口——监视 
//（数组传参的时候传过去的是首元素的地址，
//在函数内，监视窗口输入形参名只能看到一个元素，如果输入“形参名，num”就能看到num个元素）
//
//查看内存信息
//调试开始后 调试——窗口——内存（内存里的数据是以16进制显示的）

//调用堆栈
//调试开始后 调试——窗口——调用堆栈（可以显示函数的调用逻辑）
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//查看汇编信息
//调试开始后 调试——窗口——转到反汇编 或者调试开始后 右键空白区域 转到反汇编（可以显示每条命令执行的汇编指令）
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n",arr);
//
//	return 0;
//}
	
//查看寄存器信息	
//// 调试开始后 调试——窗口——寄存器，如果知道寄存器的名字，也可以在监视窗口看寄存器里边的值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}



//调试实例
//
//1.求1！+2！+3！+...+n！
//利用调试找到下面代码的错误
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	int tem  = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			tem = tem * i;
//			
//		}
//		sum = sum + tem;
//	}
//	printf("%d\n", sum );
//	return 0;
//}

//通过调试思考下列代码为什么会出现问题（在vs x86环境下查看，其他环境会有所不同）
//int main()
//{
//	int i = 0;                             //0x00AFF780 
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//0x00AFF750
//
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//通过监视窗口 发现arr【15】的地址和i的地址一模一样
//局部数据放在栈区（arr，i），栈区内存的使用习惯是先使用高地址，再使用低地址
// 数组随着下标的增长，地址是由低到高的。
// i和arr之间有适当的空间，利用数组的越界操作覆盖到了i，导致了死循环

//常见的编程技巧
//使用 assert
//尽量使用const
//养成良好的编写风格
//添加必要的注释
//避免编码的陷阱

//示范
//模拟实现strcpy
//void my_strcpy(char* dest, char* sour)
//{
//	while (*sour!='\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	*dest = *sour;
//}

//优化
//void my_strcpy(char* dest, char* sour)
//{
//	while (*sour != '\0')
//	{
//		*dest++ = *sour++;
//	}
//	*dest = *sour;
//}

//优化
//void my_strcpy(char* dest, char* sour)
//{
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//}

//对于const的补充
//int main()
//{
//	const int num = 10;
//	int n = 20;
//	//num = 20;//改不掉
//	//int* p = &num;
//	//*p = 20;//可以改掉
//	
//	//const修饰指针
//	//1.const 放在*号左边的时候，const int* p(等价于int const* p)
//	//p指向的内容不可以通过p来改变，p自身可以改 const修饰的是*p
//	//const int* p = &num;
//	////*p = 20; //不能改
//	//p = &n;//p本身能改
//	//2.const 放在*右边，int* const p;
//	//意思是p指向的对象可以通过p来修改，但是不能修改p变量本身的值
//	int* const p = &num;
//	*p = 50;//可以
//	//p = &n;//不可以
//	//如果在*两边都加上const，那么两层意思就都具有了
//	printf("%d\n",num);
//	return 0;
//}
// 
//优化
//#include<assert.h>
//void my_strcpy(char* dest, const char* sour)
//{
//	//断言
//	assert(sour!=NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *sour++)
//	//while (*sour++ = *dest++) //在char* sour前+ const 可以避免写反，写反时会报错
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = " ";
//	char arr2[] = "hello world";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	my_strcpy(arr1, NULL); 
//	return 0;
//}


//#include<assert.h>
////写成char*的作用是为了实现链式访问，strcpy返回的是目标空间的起始地址
//char* my_strcpy(char* dest, const char* sour)
//{
//	char* ret = dest;
//	//断言
//	assert(sour!=NULL);
//	assert(dest != NULL);
//	while (*dest++ = *sour++)
//	//while (*sour++ = *dest++) //在char* sour前+ const 可以避免写反，写反时会报错
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = " ";
//	char arr2[] = "hello world";
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问的一个例子，作为printf函数的参数
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strlen
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str!=NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len= my_strlen(arr);
//	printf("len=%d\n",len);
//	return 0;
//}


//编程常见的错误
//1.编译型错误 -----语法错误
//2.链接型错误------出现在链接期间
//错误	LNK1120	1 个无法解析的外部命令	
// int main()
//{
//	 int a = 0;
//	 int b = 10;
//	 int c = Add(a, b);
//	return 0;
//}

//3.运行时错误----调试解决

//int main()
//{
//
//	return 0;
//}