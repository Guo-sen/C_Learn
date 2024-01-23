#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//字符指针
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'W';
//	printf("%c\n", ch);*/
//
//	char* p = "abcdef"; //p里存放的是a的地址
//	//*p = 'w';//程序会崩溃，因为上面那种形式“abcdef”是一个常量字符串，不能改
//	printf("%s\n", p);
//	return 0;
//}
//

//思考下列代码的打印结果
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1=p2\n");
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//		printf("arr1=arr2\n");
//	else
//		printf("arr1!=arr2\n");
//	return 0;
//}
//常量字符串在内存中只会存一份

//指针数组：存放指针的数组
//int* arr[10];整型指针的数组
//char *arr2[4];一级字符指针的数组
//char **arr3[5];二级字符指针的数组  
// 
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ",*(parr[i]+j));
//			//*（p+i)等价p[i]
//			printf("%d ",parr[i][j]);//需要注意的是这三个数组在内存中并不是连续存放的
//		}
//		printf("\n");
//	}
//	return 0;
//}
//指针数组可以用一维数组模拟二维数组


//数组指针：本质上是指针--->指向数组的指针
//int(*p)[10];p是一个指针，指向一个有10个元素的数组，每个元素类型是int
//使用之前先搞懂 数组名和&数组名

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);	//00000083A8FDF778
//	printf("%p\n", &arr[0]);//00000083A8FDF778
//	printf("%p\n", &arr);	//00000083A8FDF778
//	
//	int sz = sizeof(arr);
//	printf("%d\n", sz);     //40
//
//	return 0;
//}
//数组名通常表示的都是首元素的地址
// 但是有两个例外
//1. sizeof(数组名) //表示整个数组
//2.&数组名        
//从值上来讲，和首元素的地址一样，但是如果打印 &数组名+1 ，会跳过整个数组 所以&数组名表示整个数组 

//数组指针，存放的是数组的地址-->&数组名就是数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//p是一个指针，指向一个有10个元素的数组，每个元素类型是int
//
//	char* arr[5] = { 0 };
//	char* (*pa)[5] = &arr;
//	return 0;
//}


//一种不规范（别扭）的用法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//[]内的数字不可以省略
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*((*p)+i));//p是一个指向数组的指针，所以*p就相当于数组名，数组名又是首元素的地址
//		//所以*p本质上是首元素的地址
//		//printf("%d ", (*p)[i]);
//	}
//	return 0;
//}


//void print1(int(*p)[5],int r,int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j)); //*(p+i)相当于拿到了第0行，第1行，第二行的数组名，数组名是首元素的地址
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	
//	print1(arr,3,5);//二维数组的首元素是他的第一行，可以看成5个int的一维数组
//	return 0;
//}

//int (*parr[10])[5]  parr是一个存放数组指针的数组	这个数组有10个元素，每个元素是一个指针（p109）
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int(*parr[10])[5] = { &arr1,&arr2,&arr3 };
//	//parr3是一个数组，里边有10个元素，每个元素的类型是int（*）【5】类型的指针
//	return 0;
//}


//数组参数、指针参数
// 
//一维数组传参
//void test(int arr[])
//void test(int arr[10])
//void test(int* arr)
//
//void test2(int* arr[20])
//void test2(int** arr)
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr1);
//	test2(arr2);
//	return 0;
//}

//二维数组传参
////
//void test(int arr[3][5])
//void test(int arr[][5])
//
//void test(int* arr)//这个不行，因为传过来的是二维数组首元素的地址（第一行整体的地址）
//void test(int* arr[5])//这个不行，arr是个数组，数组里边有5个元素，每个元素是（int*）
//void test(int (*arr)[5])//可以
//void test(int** arr)//不行，第一行的地址，是一个一维数组的地址，放不到二级指针里
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//一级指针传参
//void test(int* ps, int sz)
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(p,sz);
//	test(arr,sz);
//	return 0;
//}

//二级指针传参
//void test(int** ptr)
//{
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}



//函数指针：指向函数的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p\n",Add);
//	printf("%p\n", &Add);//可以把函数的地址打印出来
//	//对于函数来说，&函数名和函数名都是函数的地址
//	
//	//int (*pf)(int, int) = &Add; // int (*pf)(int x, int y) = &Add;
////返回类型     参数类型（参数名写不写都行）
//	//int ret = (*pf)(2, 3); //*号写不写都行
//	int (*pf)(int, int) = Add;
//	int ret =pf(2, 3);   //函数名本来就是函数的地址
//	printf("%d\n", ret);
//	return 0;
//}

//函数指针可以让一个函数调用另一个函数
// void Add(int x,int y)
//{
//	return x + y;
//}
//
//void calc(int (*pf)(int,int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n",ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}

//另一个用途参考计算器（合理的使用函数指针可以减少代码冗余）
//可以实现函数回调，给1个函数传不同的参数，这个函数的功能可以不一样



//int main()
//{
//	//分析两段代码
//	//
//	(*( void(*)() ) 0 ) (); //void(*)() 表示某一种函数指针类型，
//							//（ void(*)() ）0，表示把0强制类型转换成那种类型，这时，可以把0看成一个地址
//							//然后把地址解引用，找到0转换后的地址所指的函数，去调用那个函数，那个函数没有参数
//	//以上代码是一次函数调用
//
//	void (* signal(int, void(*)(int)))(int);
//	//以上代码是一次函数声明
//	//signal(int, void(*)(int)   signal是一个函数名，signal这个函数有两个参数
//	//分别是整型int和函数指针类型void(*)(int)，如果把函数名和后边的参数去掉
//	// 可以发现剩下一个函数指针类型void （*）（int），这就是signal函数的返回类型
//	return 0;
//}
//void (* signal(int, void(*)(int)))(int); 改写成易于理解的形式
//typedef void(*)(int) pf_t; //这样写是不对的
//typedef void(*pf_t)(int);//把void(*)(int)重命名为 pf_t
//int main()
//{
//	pf_t signal(int, pf_t);//void (* signal(int, void(*)(int)))(int); 的简写
//	return 0;
//}

//函数指针数组 把函数指针放在数组里，这个数组就是函数指针数组(函数指针数组又叫转移表)
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int(*pf)(int, int) = Add;
//	int (*arr[5])(int, int) = { Add,Sub,Mul,Div };//p先和[4]结合，说明这是个数组，去掉数组名，剩下int (*)(int,int),这是每个元素的类型
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n",arr[i](4,8));
//	}
//	return 0;
//}
//用途参考计算器的第二个版本	



//指向函数指针数组的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	//函数指针数组
//	int (*arr[5])(int, int) = { Add,Sub,Mul,Div };
//
//	//指向函数指针数组的指针
//	int (*(*parr)[5])(int, int) = &arr;//*parr说明这是一个指针，指向一个数组，有五个元素，每个元素的类型是函数指针int (*)(int,int)
//
//	return 0;
//}


//void* 类型指针
//int main()
//{
//	int a = 10;
//	char* pc = &a;//会有警告
//	void* pv = &a;//void* 是无具体类型的指针，可以接受任意类型的地址，不会有警告
//	//void* 是无具体类型的指针，所以不能直接解引用操作，也不能+-整数，使用前需要强制类型转换
//	return 0;
//}

//回调函数：回调函数就是一个通过函数指针调用的函数。如果把函数指针作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，
//我们就说这是回调函数。	



// qsort函数：void qsort( void *base,//要排序的数据的起始位置 
//						size_t num, //待排序的数据元素的个数
//						size_t width, //待排序的数据元素的大小（单位是字节）
//						int (*compare )(const void *elem1, const void *elem2 ) );//函数指针--比较函数
// 对compare函数返回值的规定  
//   <0    elem1 less than elem2 
//   0     elem1 equivalent to elem2
//   >0    elem1 greater than elem2


//比较2个整型
//e1指向一个整数
//e2指向另外一个整数	
//int com_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);//qsort调用比较函数时，默认排升序，如果需要排降序，把e1和e2调换位置
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz,sizeof(arr[0]), com_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//使用qsort排序结构体
#include<string.h>
#include<stdlib.h>
#include<search.h>


//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int com_by_name(const void* e1, const void* e2)
//{
//	//strcmp返回值恰好是>0  ==0  <0
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//int com_by_age(const void* e1, const void* e2)
//{
//	//strcmp返回值恰好是>0  ==0  <0
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int main()
//{
//	struct Stu s[] = { {"张三",18},{"李四",16},{"王五",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s,sz,sizeof(s[0]), com_by_name);
//	qsort(s, sz, sizeof(s[0]),com_by_age);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s  %d  \n", s[i].name, s[i].age);
//	}
//	return 0;
//}

//对以前的冒泡排序的改造(p 113)
struct Stu
{
	char name[20];
	int age;
};
int com_by_age(const void* e1, const void* e2)
{

	//return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void Swap(char* buff1,char*buff2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buff1;
		*buff1 = *buff2;
		*buff2 = tmp;
		buff1++;
		buff2++;
	}
}
void bubble_sort (void* arr, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		int j = 0;
		//控制每趟排序排多少对
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width)>0)
			{
				//交换
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
				flag = 0;
			}
		
		}
		if (flag == 0)
		{
			break;
		}
	}
	
}
int main()
{
	struct Stu s[] = { {"张三",18},{"李四",16},{"王五",19} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s,sz,sizeof(s[0]), com_by_name);
	bubble_sort(s, sz, sizeof(s[0]),com_by_age);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s  %d  \n", s[i].name, s[i].age);
	}
	return 0;
}



//int main()
//{
//
//	return 0;
//}
