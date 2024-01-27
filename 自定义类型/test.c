#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>

//自定义类型：结构体、联合体、枚举

//结构体（结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量）
// 
//结构体的声明
//struct tag 
//{
//	member_list;
//}variable_list;

//tag 结构体标签
//member_list; 成员列表，可以有一个或者多个成员变量
//variable_list; 变量列表



//结构体类型的定义

//学生
//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//}s1,s2;
//s1和s2是利用struct Stu类型创建出的结构体变量（全局变量）


//在声明结构体的时候，可以不完全的声明
//eg：
//匿名结构体类型
//struct
//{
//	int a;
//	int b;
//	char c;
//}x;
//只能在这创建变量，在main函数内创建不了




//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],*p;
//
//
//int main()
//{
//	//从“*”到“*”的类型不兼容 编译器报的警告
//	//虽然以上两个结构体类型成员变量一样，但是编译器还是会把以上两个声明当成完全不同的两个类型
//	p = &x;
//	return 0;
//}



//结构体的自引用

//链表错误示范
//struct Node 
//{
//	int data;
//	struct Node next;
//};

//struct Node
//{
//	int data;           //存放节点的数据        数据域
//	struct Node* next; //存放下一节点的地址     指针域
//};



//注意另一种写代码的方式
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//对一个匿名结构体类型，typedef重新起一个名字 Node
//产生了先有鸡还是先有蛋的问题，不支持这样的写法 p136






//结构体类型的定义和初始化
//struct Point 
//{
//	int x;
//	int y;
//}p1 = {2,3};
//
//struct Point p2 = { 4,5 };
//
//struct Score
//{
//	int eng;
//	int math;
//	char ch;
//};
//struct Stu
//{
//	char name[20];
//	int age;
//	struct Score s;
//
//};
//
//int main()
//{
//	struct Point p3 = { 6,7 };
//	struct Stu s1 = { "张三",18,{80,80,'q'}};
//	printf("%s %d %d %d %c", s1.name, s1.age, s1.s.eng, s1.s.math, s1.s.ch);
//	return 0;
//}


//结构体内存对齐
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//
//};
//
////结构体内存对齐规则
////第一个成员在与结构体变量偏移量为0的地址处
////其它成员变量要对齐到某个数字（对齐数）的整数倍的地址处
////对齐数=编译器默认的一个对齐数（vs默认8）与该成员大小的较小值
////结构体的总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
////如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处,结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
//int main()
//{
//	printf("%d\n", sizeof(struct S1)); //12
//	printf("%d\n", sizeof(struct S2)); //8
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//
//
//	printf("%d\n", offsetof(struct S1, c1)); //返回的是结构体成员变量对结构体起始位置的偏移量
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//
//	printf("%d\n", offsetof(struct S2, c1)); 
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S1, i));
//
//
// 
//	return 0;
//}


//为什么存在内存对齐
// 1.平台原因（移植原因）：不是所有的平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常
// 2.性能原因：数据结构（尤其是栈）应该尽可能的在自然边界上对齐
//  原因在于，为了访问未对其的内存，处理器需要做两次内存访问；而对齐的内存访问仅需要一次访问
//  总体来说结构体内存的对齐是拿空间来换取时间的做法
//在设计结构体的时候应该让占用空间小的成员尽量集中在一起


//修改默认对齐数(一般都是2的幂次方)
//#pragma pack(8) //设置默认对齐数8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//#pragma pack()//取消设置的默认对齐数，还原为编译器默认
//
//
//#pragma pack(1) 
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2)); 
//	return 0;
//}



//结构体传参

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print_1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("\n%d\n",ss.num);
//
//}
//void print_2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ",(*ps).data[i]);
//		//printf("%d ", ps->data[i]);
//
//	}
//	printf("\n%d\n",ps->num);
//
//}
//
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print_1(s);   //传值
//	print_2(&s);  //传址
//	return 0;
//}
//优先选用传址调用
//函数传参的时候，参数是需要压栈，会有时间和空间上的开销，如果传递一个结构体对象的时候，结构体过大，参数压栈的系统的开销比较大
//所以会导致性能的下降



//位段
//位段是通过结构体来实现的
//位段的声明和结构的声明是类似的，有两个不同：

//1.位段的成员必须是int、 unsigned int或signed int （char也可以，只要是整型家族的就都可以）
//2.位段的成员名后边有一个冒号和一个数字
//比如
//struct A
//{
//	int _a : 2;  //意思是_a只占2个比特位
//	int _b : 5;  //_b只需要5个比特位
//	int _c : 10;
//	int _d : 30;
//};
////节省空间
//
//int main()
//{
//	printf("%d", sizeof(struct A));
//	return 0;
//}

//位段的内存分配
// 位段的成员是整型家族
//位段的空间上是按照需要4个字节（int）或者1个字节（char）的方式来开辟的
//位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应避免使用位段

//struct A
//{
//	//看到都是int 上来先开辟4个字节---> 32bit
//	int _a : 2;  
//	int _b : 5;  
//	int _c : 10;
//	//c放进去后还剩下15个 ，此时不够放d
//	//那就再开辟4个字节 -->32bit
//	//d先占用第一波剩下的15还是直接放在新开辟的32个bit里是不确定的
//	int _d : 30;
//};


//
//struct S
//{
//	char a : 3; //上来先开辟一个字节->8bit a用掉三个还剩下五个
//	char b : 4; //b放进去剩下的五个，会占用其中的4个，此时还剩下一个
//	char c : 5; //此时再开辟一个，c用不用前面的那一个，影响了S的大小  printf("%d\n", sizeof(s)); //通过计算，会浪费掉用的剩下的（只在当前环境下是这样，其他环境需要测试）
//	char d : 4;
//	//char e : 14; // 会报错，位域的大小无效。
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s)); //通过计算，会浪费掉用的剩下的
//	s.a = 10; // 10 1010 放不进去，会发生截断，放进去010
//	s.b = 12; // 1100
//	s.c = 3; //  00011
//	s.d = 4; //  0100
//	return 0;
//}
//调试起来看s再内存中存放的值与abcd的关系





//位段的跨平台问题
//int位段被当成有符号数还是无符号数是不确定的
//位段中最大位的数目不能确定（16位机器最大16，32位机器最大32，写成27，在16位机器会出问题）
//位段中的成员在内存中从左向右分配，还是从右向左分配，标准尚未定义
//当一个结构包含两个位段，第二个位段成员比较大，无法被装进去第一个位段的剩余位时，是舍弃剩余的位，还是利用，这是不确定的
//跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在

//位段的应用
//网络数据包



//枚举----其实就是列举
//枚举类型的定义
//enum Day //星期
//{
//	Mon, //0
//	Tues, //1
//	Wed,  //2
//	Thur, //3
//	Fri,  //4
//	Sat, //5
//	Sun  //6
//};
//enum Day 
//{
//	Mon=1,  //1
//	Tues,   //2
//	Wed,   //3
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Day d = Fri;// d就可以表示星期五
//	printf("%d\n", Mon);  //枚举常量默认是有值的，是从0开始，依次递增1，也可以赋初始值	
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	return 0;
//}

//枚举的优点
//增加代码的可读性和可维护性
//和#define定义的标识符比较，枚举有类型检查，更加谨慎(在C语言中体现的不明显，在C++中明显)
//防止了命名污染 （封装）
// 便于调试 （#define定义的常量，在预处理阶段会把所有代码中出现那个标识符的位置，替换成定义的那个常量。调试
// 是对可执行程序调试，调试的时候代码已经完成替换了）
//使用方便，一次就可定义多个常量



//联合（共用体）
// 联合也是一种特殊的自定义类型
// 这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间（所以联合也叫共用体）	

//联合类型的声明
//union Un
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	union Un un;
//	//printf("%d\n", sizeof(un));//4个字节--->共用的体现
//
//	//printf("%p\n", &un);
//	//printf("%p\n", &(un.c));
//	//printf("%p\n", &(un.i));
//	////地址都一样
//	un.i = 0x11223344;
//	printf("%x\n",un.i);
//	un.c = 0x00;
//	printf("%x\n", un.i);
//	printf("%x\n", un.c);
//	return 0;
//}
//联合体在一定程度上节省了空间，但是应用场景一般是  用了其中一个成员变量，就不用其他的了
//联合变量的大小至少是最大成员的大小	(但是也不是就是最大成员的大小)



//判断当前机器字节序是大端还是小端
//
//int main()
//{
//	int a = 1; //0x 00 00 00 01
//	//假设是小端
//	// 低----->高  假设内存地址从低到高
//	//01 00 00 00  小端
//
//	//00 00 00 01 大端
//	char* pa = (char*)&a;
//	if (*pa==0)
//	{
//		printf("大端\n");
//	}
//	else
//	{
//		printf("小端\n");
//	}
//	return 0;
//}
//
//int test()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = test();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//联合体大小的计算

//union	Un
//{
//	char arr[5];
//	int i;
//};
//
//
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	//5 因为要对齐
//	//arr【5】对齐的时候按照char 对齐，对齐数是1，花费了5个字节，i的对齐数是4，Un的最大对齐数是4，Un的大小是4的倍数，所以Un的大小是8
//	return 0;
//}

//练习
union	Un
{
	short arr[7];
	int i; 
};
//16个字节





//int main()
//{
//
//	return 0;
//}
