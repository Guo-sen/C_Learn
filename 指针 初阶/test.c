#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//指针是内存中一个最小单元的编号，也就是地址（地址也叫指针），指针其实就是地址，地址就是编号 
//平时口语中说的指针，通常说的就是指针变量，是用来存放内存地址的一个变量，通过存放的地址，可以找到一个内存单元



//int main()
//{
//	int a = 10;//a是一个整型，占4个字节的空间；
//	int* pa = &a;// &a取出的是起始地址（4个字节中第一个字节的地址）
//	return 0;
//}

//int main() 
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	printf("%d\n",sizeof(pc));//sizeof返回的类型是无符号整型，也可以用%u打印，最好用%zu（专门给sizeof准备的）
//	printf("%d\n", sizeof(ps));
//	printf("%d\n", sizeof(pi));
//	printf("%d\n", sizeof(pd));
//	return 0;
//}
//指针在32位平台4个字节  32根地址线  编码一个地址有32个比特位 4字节
//指针在64位平台8个字节  34根地址线  编码一个地址有64个比特位 8字节


//指针和指针类型

//一位16进制数字用4个二进制位表示，两位16进制数字是一个字节
//int main() 
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;//可以改四个字节
//	char* pc = (char*) & a;
//	*pc =0x11223344;//可以改一个字节
//
//	return 0;
//}
//指针类型决定了解引用操作的时候访问了几个字节

//int main() 
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa=%p\n",pa);
//	printf("pa+1=%p\n", pa+1);
//
//	printf("pc=%p\n", pc);
//	printf("pc+1=%p\n", pc+1);
//	//pa = 00000007B935F8B4
//	//pa + 1 = 00000007B935F8B8
//	//pc = 00000007B935F8B4
//	//pc + 1 = 00000007B935F8B5
//
//	return 0;
//}

//指针类型决定了+1或者-1时跳过几个字节（决定了指针的步长）
//
//int main() 
//{
//	int a = 0;
//	int* pi = &a;   //解引用访问4个字节，+1跳过四个字节
//	float* pf = &a; //解引用访问4个字节，+1跳过四个字节
//
//	*pi = 100;
//	*pf = 100.0;
//	//以上俩操作不一样，pf会把100.0以浮点数的形式放进去，整数和浮点数在内存中的存储方式是不一样的
//	return 0;
//}



//野指针：野指针就是指针指向位置是不可知的（随机的、不正确的、没有明确限制的）

//野指针成因
//1.指针没有初始化
//int main() 
//{	
//	int* p;//p没有初始化，就意味着p没有明确的指向
//	//一个局部变量，如果不初始化，放的是随机值
//	*p = 10;//非法访问内存
//
//	return 0;
//}

//2.指针越界访问
//当指针指向范围超过arr范围的时候，p就是野指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//等价于int* p=&arr[0]
//	int i = 0;
//	for (i = 0; i <=10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//3.指针指向的空间释放	
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main() 
//{
//	int* p = test();
//	printf("%d\n", *p);
//
//	printf("hehe\n");
//	printf("abcdef\n");
//
//	printf("%d\n",*p);
//
//	return 0;
// }
//在后续动态内存开辟里有详细讲解


//野指针的规避

//1.指针初始化
//int main() 
//{
//	int* p = NULL;//如果创建的时候不知道存什么，就初始化为空
//	return 0;
//}

//2.小心指针越界

//3.指针指向空间释放及时置空NULL

//4.避免返回局部变量的地址

//5.指针使用之前检查有效性


//指针运算 指针+-整数  指针-指针  指针的关系运算
//

//指针-指针

//int main() 
//{
//	int arr[10] = { 0 };
//	printf("%d\n", & arr[9] - &arr[0]);//指针-指针得到的是指针之间元素的个数
//	printf("%d\n", &arr[0] - &arr[9]);//指针-指针得到的值的绝对值是指针之间元素的个数
//	return 0;
//}
//不是所有的指针都能相减，指向同一块空间的两个指针才能相减，这样的相减才有意义	
//以下写法就是错误的，结果不可预知，没有意义	
//int main()
//{
//	int arr1[10] = { 0 };
//	char arr2[5] = {0};
//	printf("%d\n", &arr2[0] - &arr1[5]);
//	return 0;
//}

//#include<string.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main() 
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//指针的关系运算
//#define N 5
//int main()
//{
//	float arr[N] = { 0 };
//	float* p;
//	for (p = &arr[N]; p >&arr[0];)
//	{
//		*--p = 10;
//	}
//	
//	//以下代码在绝大多数编译器下都能顺利完成任务，但是还是要避免这样写，因为C标准并不保证它可行
//	//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许
//	//与指向第一个元素之前的那个内存位置的指针进行比较
//	for (p = &arr[N - 1]; p >= &arr[0]; p--)
//	{
//		*p = 10;
//	}
//	return 0;
//}

//指针和数组
//数组：一组相同类型的元素集合
//指针变量：是一个变量，存放的是地址

//int main() 
//{
//	int arr[10] = { 0 };
//	//arr 是首元素的地址
//	int* p = arr;
//	//就可以通过指针来访问数组了
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));//与上一行等价
//	}
//	return 0;
//}
//数组是可以通过指针来访问的



////二级指针 是用来存放一级指针变量的地址的
//int main() 
//{
//	int s = 0;
//	int* ps = &s;		 //*说明ps是一个指针变量，是一个一级指针变量,int表示ps所指向的对象是int
//	*ps = 10;
//	printf("%d ", *ps);	
//	int** pps = &ps;	//pps是一个二级指针变量，第二个* 说明pps是一个指针变量，他所指向的对象的类型是int*
//	**pps = 30;
//	printf("%d ", *ps);
//
//	return 0;
//}



//指针数组 是一个数组，是存放指针的数组

//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* parr[10] = { &a,&b,&c };//parr就是存放指针的数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ",*(parr[i]));
//	}
//
//	return 0;
//}

//指针数组模拟实现二维数组(指针数组可以把一维数组按二维数组的形式管理起来)

int main() 
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };

	int* parr[3] = {arr1,arr2,arr3};

	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);//方括号等价于解引用  arr[i] 等价于 *(arr+i)
			
		}
		printf("\n");
	}
	return 0;
}


//int main() 
//{
//
//	return 0;
//}