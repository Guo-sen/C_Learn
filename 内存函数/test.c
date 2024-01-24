#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<memory.h>
#include<assert.h>


// memcpy   void *memcpy( void *dest, const void *src, size_t count );
//   Copies characters between buffers.
//从src的位置开始，向后count个字节的数据到dest的内存位置
//这个函数在遇到\0的时候并不会停下来
//如果src和dest有任何的重叠，复制的结果都是标准未定义的
//#include<memory.h> 
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	//调试起来在监视器窗口看结果
//	return 0;
//}
//memcpy可以拷贝任意类型的数据

//模拟实现
//							来自源头的数据要保护起来
//void* my_memcpy(void* dest, const void* sour, size_t num)
//{
//	assert(dest && sour);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)sour;
//		dest = (char*)dest + 1;
//		sour = (char*)sour + 1;
//	}
//	return ret;
//}
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//假设想把arr1里的12345 拷贝放到34567的位置上去  1 2 1 2 3 4 5 8 9 10
//	my_memcpy(arr1 + 2, arr1, 20);
//	return 0;
//}
//如果拷贝的内容在一块区域	有任何的重叠，都是搞不定的，复制的结果都是标准未定义的(虽然某些环境下
// C语言库函数memcpy能和搞定，但是C语言标准并没有规定它需要完成有重叠区域的拷贝，
// C语言规定memcpy只需要完成不重叠的拷贝就可以，重叠区域的拷贝用memmove)
//memcpy负责拷贝两块独立空间中的数据
//如果想要实现重叠内存的拷贝，需要使用memmove


//memmove  Moves one buffer to another.
//void *memmove( void *dest, const void *src, size_t count );
//The memmove function copies count bytes of characters from src to dest.
// If some regions of the source area and the destination overlap, 
// memmove ensures that the original source bytes in the overlapping region are copied before being overwritten.
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//假设想把arr1里的12345 拷贝放到34567的位置上去  1 2 1 2 3 4 5 8 9 10
//	memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//模拟实现memmove
// 1 2 3 4 5 6 7 8 9 10
// 1 2 1 2 3 4 5 8 9 10
//
//对比上两行发现，如果从后往前拷贝，先把5放到7，再把4放到6.....这样从后往前可以完成任务
//但是不能所有情况下的都从后往前 比如
// 1 2 3 4 5 6 7 8 9 10 把4 5 6 7 8 放到 2 3 4 5 6 从后往前依然不行，从前往后却可以
// 
// 有时候需要从前往后处理，有时候需要从后往前处理
// 
// 画个图观察规律可以得到
// 当dest<sour的时候从前向后拷贝
// 当dest>sour的时候从后往前拷贝
// 当没有重叠区域的时候，在一个字符串中的拷贝，从前往后，从后往前都可以
//
//void* my_memmove(void* dest, const void* sour, size_t num)
//{
//	assert(dest && sour);
//	void* ret = dest;
//	if (dest < sour)
//	{
//		//从前往后
//		while (num--)
//		{
//			*(char*)dest = *(char*)sour;
//			dest = (char*)dest + 1;
//			sour = (char*)sour + 1;
//		}
//	}
//	else
//	{
//		//从后往前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)sour + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//假设想把arr1里的12345 拷贝放到34567的位置上去  1 2 1 2 3 4 5 8 9 10
//	my_memmove(arr1 + 2 , arr1, 20);
//	//my_memmove(arr1, arr1+2, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//比较两段内存里的数据相同不相同 使用memcmp
//int memcmp( const void *buf1, const void *buf2, size_t count );
//Compare characters in two buffers，The return value indicates the relationship between the buffers.
//The memcmp function compares the first count bytes of buf1 and buf2 and returns a value indicating their relationship.
//只要在内存中比出大小，不管后续有没有其它，函数直接返回，不在比较后面的

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,5,4 };
//	int ret=memcmp(arr1, arr2, 20);
//
//	if (ret == 0)
//	{
//		printf("相同\n");
//	}
//	else if (ret > 0)
//	{
//		printf("arr1大\n");
//
//	}
//	else
//	{
//		printf("arr2大\n");
//	}
//	return 0;
//}


//memset   Sets buffers to a specified character.
//void *memset( void *dest, int c, size_t count );
//The memset function sets the first count bytes of dest to the character c.
//memset returns the value of dest.

int main()
{
	char arr[] = "hello world";
	//memset(arr, 's',5);
	memset(arr + 6, 's', 5);
	printf("%s\n", arr);
	return 0;
}
//memset 初始化是以字节为单位进行初始化的


//int main()
//{
//
//	return 0;
//}

