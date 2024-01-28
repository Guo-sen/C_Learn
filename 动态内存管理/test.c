#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#include<errno.h>

//传统内存空间的开辟方式
//int val=20; char arr[10]={0};
//但是上述开辟空间的方式有两个特点
//1.空间开辟的大小是固定的
//2.数组在声明的时候，必须指定数组的长度，它所需要的内存在编译时分配
//但是对于空间的需求，不仅仅是上述的情况，有时候我们需要的空间的大小在程序运行的时候才能知道，那数组的编译时开辟空间的方式就不能满足了


//malloc  Allocates memory blocks.
//void *malloc( size_t size );
//The malloc function allocates a memory block of at least size bytes.
//The block may be larger than size bytes because of space required for alignment and maintenance information.
//malloc returns a void pointer to the allocated space, or NULL if there is insufficient memory available.


//size如果是0，这是标准未定义的，这种情况下，malloc的行为取决于编译器



//int main()
//{
//	int arr[10] = { 0 };//开辟40个字节的空间用来存放整型
//
//	// 动态内存开辟
//	int*p=(int*) malloc(10);//malloc在开辟空间完成后，会返回一个地址（开辟完成的内存块的起始地址）
//	//int* p = (int*)malloc(INT_MAX);//当内存不够的时候（x86环境）
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用内存
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存
//
//	return 0;
//}
//当使用malloc时，malloc的返回值一定要进行一个有效性的判断
//局部变量、形式参数一般存在栈区
//malloc calloc realloc free所操作的空间都在堆区

//要养成释放内存的好习惯
//int main()
//{
//
//	// 动态内存开辟
//	int*p=(int*) malloc(40);//malloc在开辟空间完成后，会返回一个地址（开辟完成的内存块的起始地址）
//	//int* p = (int*)malloc(INT_MAX);//当内存不够的时候（x86环境）
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用内存
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);//把p所指向的那块内存空间释放掉（还给操作系统）
//	p = NULL;//释放完以后，那块内存空间就不是自己的了，已经是操作系统的了，为了避免误操作不是自己的空间，及时把p置成空指针，
//	return 0;
//}
//如果free指向的内存空间不是动态开辟的，那么free函数的行为是未定义的
//如果往free传的是空指针，free什么都不做



//calloc   void *calloc( size_t num, size_t size );
//Allocates an array in memory with elements initialized to 0  开辟一块空间，把每个字节初始化为0
//calloc returns a pointer to the allocated space

//num：Number of elements                  元素个数
//size：Length in bytes of each element   每个元素的字节数
// 开辟的总空间字节数 == num * size

//
//int main()
//{
//
//	int* p = (int*)calloc(10, 4);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//有时候我们发现过去申请的空间太小，有时候又会觉得过去申请的空间太大了，那为了合理的使用内存，我们一定会对内存
//的大小做合理的调整，那realloc就可以做到对动态开辟内存的大小的调整
// 
//realloc  void *realloc( void *memblock, size_t size );
//Reallocate memory blocks.
//realloc returns a void pointer to the reallocated (and possibly moved) memory block.
//The return value is NULL if the size is zero and the buffer argument is not NULL, or 
//if there is not enough available memory to expand the block to the given size. 

//memblock：Pointer to previously allocated memory block   要调整的内存块
//size：New size in bytes                                   调整之后的新的大小
//返回值为调整之后的内存起始位置

//该函数在调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间
//realloc调整内存空间存在两种情况
//1.原空间后有足够大的空间,  直接在后边追加
//2.原空间之后没有足够大的空间，直接找一块大的空间（原来的+新加的），旧的空间会被释放掉（realloc自动释放）

//int main()
//{
//	int*p=(int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//扩容
//	//p=(int*)realloc(p, 80); //这个地方用p接收是很危险的，如果扩充失败，p就成了空指针（原来的空间也找不到了）
//	int* p2 = (int*)realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i <20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	p2 = NULL;
//	return 0;
//}

//int main()
//{
//	realloc(NULL, 40);//等价于malloc（40）
//	return 0;
//}



//一些常见的动态内存的错误

//1.对空指针的解引用错误
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	*p = 20;
//	return 0;
//}
//  不去验证空间有没有成功开辟，直接去解引用，有隐患 


//2.对动态开辟空间的越界访问

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//访问
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + 1) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//以上代码存在越界


//3.对非动态开辟内存的free
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	free(pa);
//	pa = NULL;
//	return 0;
//}

//4.使用free释放同一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		 p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.对同一块内存空间多次释放

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	free(p);
//
//	//....
//	free(p);
//	return 0;
//}

//6.对动态内存开辟的空间忘记释放（内存泄露）

//void test()
//{
//	int* p = (int*)malloc(400);
//	//.....
//	//.....
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//	{
//		return;
//	}
//
//	//.......
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//int* test()
//{
//	int* p = (int*)malloc(400);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return p;
//	}
//	//.....
//	//.....
//	return p;
//
//
//}
//int main()
//{
//	int*ret=test();
//	//......
//	// ......
//	//忘记释放了
//
//	return 0;
//}





//几个经典的笔试题
//

// 思考调用test函数会出现什么结果
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf("%s\n",str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//str的值为NULL，传过去的也是NULL
//出来GetMemort函数后，p也被销毁了，存在内存泄露
//str是空指针，解引用的时候会崩溃

//改正
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf("%s\n",str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//另一种改正方式：
//char* GetMemory()
//{
//	char* p;
//	p = (char*)malloc(100);
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str=GetMemory();
//	strcpy(str, "hello world");
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//思考下列代码的打印结果
//char* GetMemory()
//{
//	char p[] = "hello world";
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str=GetMemory();
//	printf("%s\n",str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//当GetMemory结束的时候，p那块空间就还给操作系统了，就不属于当前程序了。str指向的那块空间存的什么就不知道了，有可能未被覆盖
//也有可能会被覆盖。str成了野指针了


//思考test函数运行的结果
//void GetMemory(char** p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(&str,100);
//	strcpy(str, "hello");
//	printf("%s\n",str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//以上代码存在的问题就是没有free


//思考以下代码的运行结果

//int main()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	return 0;
//}

//str所指向的空间已经不是自己的了，野指针的问题，形成了非法访问





//柔性数组

//
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps =  (struct	S*)malloc(sizeof(struct S));//第一种柔性数组存放在堆上，为了跟上边达到一样的效果（存在堆上），所以对结构体malloc
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	//想让arr指向一块空间
//	ps->arr = malloc(40);
//	if (ps->arr == NULL)
//	{
//		//.....
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//扩容
//	int* ptr = (int*)realloc(ps->arr,80);
//	if (ptr == NULL)
//	{
//		//..
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//		ptr = NULL;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//柔性数组可以完成上述代码的功能，同时会减少malloc的次数，避免产生太多内存碎片，提升内存利用率，同时方便释放内存


//C99中，结构中的最后一个元素允许是未知大小的数组，这就叫做柔性数组成员


//typedef struct st_type 
//{
//	int i;
//	int a[0];   //柔性数组成员
//}type_a;
////有些编译器会报错无法编译可以改成：
//typedef struct st_type
//{
//	int i;
//	int a[];   //柔性数组成员
//}type_a;

//柔性数组的特点
//结构中的柔性数组成员前面必须至少有一个其他成员
//sizeof返回的这种结构大小不包含柔性数组的内存
//包含柔性数组的结构用malloc函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小

//
struct S
{
	int n;
	int arr[];
};
int main()
{
	//struct S s;//当这样直接创建的时候，s的大小就是4个字节，只能存n

	//柔性数组的使用
	struct S* ps=(struct S*)malloc(sizeof(struct S) + 40);
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	struct S* ptr=(struct S*)realloc(ps, sizeof(struct S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	//.....
	//释放
	free(ps);
	ps = NULL;
	return 0;
}
//柔性体现在,可以用realloc扩大缩小空间





//int main()
//{
//
//
//	return 0;
//}

