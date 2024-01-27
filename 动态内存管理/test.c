#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>
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
int main()
{

	// 动态内存开辟
	int*p=(int*) malloc(40);//malloc在开辟空间完成后，会返回一个地址（开辟完成的内存块的起始地址）
	//int* p = (int*)malloc(INT_MAX);//当内存不够的时候（x86环境）
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用内存
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);//把p所指向的那块内存空间释放掉（还给操作系统）
	p = NULL;//释放完以后，那块内存空间就不是自己的了，已经是操作系统的了，为了避免误操作不是自己的空间，及时把p置成空指针，
	return 0;
}

