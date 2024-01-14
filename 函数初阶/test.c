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


//函数的嵌套调用
//函数之间是可以根据实际的需求进行组合的，也就是相互调用的
//注意函数可以嵌套调用，但是不能嵌套定义
//函数的链式访问： 一个函数的返回值作为另一个函数的参数
//


//思考以下代码的打印结果,printf的返回值是打印的字符个数

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
//}
////4321




//函数的声明和定义 P（44）

//函数的声明(先声明后使用)
//int Add(int a,int b);//int Add(int,int);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int c = Add(a, b);
//	printf("c=%d\n",c);
//
//
//	return 0;
//}
//
////函数的定义
//int Add(int a, int b)
//{
//	return a + b;
//}
// 
// 
// 

//函数的递归
//函数调用自身的编程技巧就叫递归
//递归的两个必要条件：1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//       			  2.每次递归调用之后越来越接近这个限制条件
//函数一直自己调用自己 会发生stack overflow （栈溢出），每一次函数的调用会在栈区申请空间


//练习：接收一个整型值（无符号），按照顺序打印它的每一位(p.46)
//print(1234)  123  4(1234%10)
//print(123)   12   3(123%10)
//print(12)    1    2(12%10)
//
//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num/10);
//	}
//	printf("%d ",num%10);
//
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d",&a);
//	print(a);
//	return 0;
//}





//模拟实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//			count++;
//			str++;
//	}
//	return count;
//}

//练习 编写函数 不允许创建临时变量求字符串的长度
////"abcd"，如果*str不是'\0',那字符长度至少是1，可以转换成求 1+my_strlen(bcd)
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return (1 + my_strlen(str + 1));//不推荐写++str，str+1不会改变str本身，++str把str本身也给改变了	
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int len= my_strlen("abcd");//字符串传送的时候传的是字符串的起始地址，即a的地址
//	printf("len=%d",len);
//	return 0;
//}

//写一个函数计算n的阶乘

//递归的方式
//int fac(int n)
//{
//	 if (n <= 1)
//	 {
//		return 1;
//	 }
//
//	else if (n > 1)
//	 {
//		return n*fac(n-1);
//	 }
//}

//迭代的方式--非递归(类似于循环)

//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	int ret = fac(num);
//	printf("num!= %d\n",ret);
//
//	return 0;
//}

//求第n给斐波那契数（不考虑溢出）
//Fib(n): n<=2    1
//		  n>2     Fib(n-1)+Fib(n-2)


//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//计算一下在整个计算过程中n等于3计算过多少次
//			   //计算第40个斐波那契数 n=3计算了  39088169次
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if(n>2)
//	{
//		return (Fib(n - 1) + Fib(n - 2));//return Fib(n - 1) + Fib(n - 2);
//	}
//}
//以上函数效率太低
//40
//39       38
//38      37    37     36
//37 36  36 35 36 35  35 34

//优化

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//	
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入n的值： ");
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("第%d个斐波那契数是：%d\n",n,ret);
//	//printf("%d\n",count);
//	return 0;
//}

//就算不是死递归，如果递归的层次太深 递归也可能会栈溢出

void test(int n)
{
	if (n < 10000)
	{
		test(n+1);
	}
}

int main()
{
	test(1);
	
	return 0;
}

//解决栈溢出的思路：
//1.将递归改写成非递归
// 2.使用static变量替代局部变量


//递归的经典问题
//1.汉诺塔问题
//2.青蛙跳台阶问题

//int main()
//{
//	
//	return 0;
//}