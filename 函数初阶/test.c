#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//写一个函数，求出两个数的较大值

//int get_max(int a, int b)
//{
//	return (a > b ? a : b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数");
//	scanf("%d %d",&a,&b);
//	int ret = get_max(a,b);
//	printf("max=%d\n", ret);
//	return 0;
//}


//写一个函数，交换两个整型变量的内容
//错误示范
//形参x，y
//void Swap(int x,int y) 
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//}
//正确示范
//void Swap(int* x,int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a：");
//	scanf("%d", &a);
//	printf("请输入b：");
//	scanf("%d", &b);
//	printf("交换前：a=%d,b=%d\n",a,b);
//	//实参 a，b
//	//Swap(a,b);
//	Swap(&a,&b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}
//实参a，b在传给形参x，y的时候，形参将会是实参的一份临时拷贝（x，y有独立的地址，修改形参不会影响实参）
//如果想改变实参，在函数调用的时候需要传实参的地址

//真实传递给函数的参数叫实参，它可以是常量、变量、表达式、函数。
//函数名括号内部的参数叫形参，形参在被调用的时候从才会被分配内存，当函数调用完成后，形参会被销毁

//传值调用：形参和实参分别占有不同内存块，对形参的修改不会影响实参
//传址调用：把函数外部创建的变量的内存地址传递给函数，可以让函数外边的变量和函数建立起真正的
//联系，也就是函数内部可以直接操作函数外部的变量



//写一个函数，实现一个整型有序数组的二分查找

//这个函数不能完成功能是因为 int arr[]本质上是一个指针变量，存的是数组首元素的地址
//所以在函数内部求函数外部数组的元素个数是做不到的
//int binary_search(int arr[], int k)//找到了返回下标，找不到返回-1
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//避免（left+right）/2时，left+right溢出
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	return 0;
//}
//以上函数不能完成功能是因为 函数参数部分的 int arr[]本质上是一个指针变量，存的
//是数组首元素的地址,数组在传参的时候传的是数组首元素的地址
//所以在函数内部求函数外部数组的元素个数sz是做不到的

//正确写法

//int binary_search(int arr[], int k, int sz)//int binary_search(int* arr, int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//避免（left+right）/2时，left+right溢出
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	return 0;
//}	


//函数的嵌套调用和链式访问
//函数之间是可以根据实际的需求进行组合的，也就是相互调用的


//int main()
//{
//	
//	return 0;
//}