#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>

//编写代码 使得三个数按从大到小输出

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int tem = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		tem = c;
//		c = b;
//		b = tem;
//	}
//	printf("%d %d %d \n", a, b, c);
//	return 0;
//}

//写一个代码 打印1~100间所有的3的倍数
//int main()
//{
//	int i = 0;
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}*/
//	for (i = 3; i <= 100; i+=3)
//	{
//			printf("%d ", i);
//	}
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入一个数->: ");
//	scanf("%d",&n);
//	for (i = 1; n >= 1; n--)
//	{
//		i = i * n;
//	}
//	printf("结果为%d \n",i);
//	return 0;
//}

//计算1！+2！+3！+4！+.....+10！
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int tem = 1;
//	printf("请输入一个数->: ");
//	scanf("%d", &n);
//	for (;n>=1;n--)
//	{
//		int j = n;
//		for (j = n; j>=1; j--)
//		{
//			tem = tem * j;
//		}
//		ret = ret + tem;
//		tem = 1;
//	}
//	printf("结果为：%d\n",ret);
//	return 0;
//}
//优化
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int tem = 1;
//	int sum=0;
//	printf("请输入一个数->: ");
//	scanf("%d", &n);
//	for (tem=1;tem<=n ;tem++)
//	{
//		ret = ret * tem;
//		sum = sum + ret;
//	}
//	printf("结果为：%d\n", sum);
//	return 0;
//}

//在一个有序数组中查找某个具体的数字（二分查找）

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 0;//要查找的数存在这
//	int mid = 0;
//	printf("请输入要查找的数->: ");
//	scanf("%d",&k);
//	while (left<=right)
//	{
//		mid = (left + right)/2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//	}
//	return 0;
//}


//编写代码，每个字符从两端移动向中间汇聚

//int main()
//{
//	char arr1[] = "welcome to learn";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(100);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//编写代码模拟用户登录，如果输入密码正确则提示登录成功，输错三次密码则退出程序


//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";//密码
//	char password[20] = " ";
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码->: ");
//		scanf("%s",password);
//		if (strcmp(password, arr) == 0)
//		{
//			printf("密码正确，登陆成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码都错误，登陆失败\n");
//
//	}
//	return 0;
//}


//练习

//打印100~200之间的素数
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//
//		//是素数就打印
//
//		//试除法
//
//		int flag = 1;//是1表示是素数
//		int j = 0;
//		//for (j = 2; j <= i - 1; j++)
//		//优化
//		//如果一个数是素数一定能写成m=a*b
//		//16 = 2 * 8 = 4 * 4;a和b中一定有一个数是<=sqrt(m)（m开平方）
//		//for (j = 2; j<=sqrt(i); j++)//sqrt 头文件为math.h
//		 for (j = 2; j <= sqrt(i); j++)//优化后
//		 {
//			if (i % j == 0 && i != 2)
//			{
//				flag = 0;
//				break;
//			}
//
//		 }
//		 if (flag == 1)
//		 {
//
//			 printf("%d是素数 \n", i);
//		 }
//	}
//	return 0;
//}
//再优化
//如果一个数是素数一定能写成m=a*b
//偶数绝对不是素数
//for (i = 101; i <= 200; i+=2)

//写一个函数，判断一个数是不是素数（质数）

//int is_prime(int n)//是素数返回1，不是返回0
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)//优化后
//	{
//		if (n % j == 0 && n != 2)
//		{
//			return 0;
//		}
//
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 101; i <=200; i+=2)
//	{
//		if (is_prime(i))//是素数返回1，1为真
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//打印1000~2000年之间的闰年
//1.能被4整除，并且不能被100整除
//2.能被400整除
//int main()
//{
//
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//	/*	if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ",year);
//		}*/
//		//以上代码打印不全，如2000是闰年，就打印不出来，
//		//因为if和else if只会进去一个（进了第一个if，下边的else if就不会进去了）
//		//改正为：把else if那的else去掉
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ",year);
//		}
//		//可简化为：
//		/*if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ",year);
//		}*/
//	}
//
//	return 0;
//}



//写一个函数，判断某年是否为闰年
//int is_leap_year(int year)//闰年返回1，不是返回0
//{
//	if (year % 4 == 0)
//    {
//		if (year % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	if (year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

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


 //写一个函数，实现一个整型有序数组的二分查找
//int binary_search(int arr[],int k,int sz)//找到了返回下标，找不到返回-1
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
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为：%d\n",ret);
//	}
//	return 0;
//}
// 
// 
// 
//思考以下代码的打印结果,printf的返回值是打印的字符个数

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
//}
////4321




//写一个函数，每次调用这个函数，就会将num的值+1；
//void Add(int* p)
//{
//	*p += 1;
//	//*p++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//	return 0;
//}

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

//int main()
//{
//
//	return 0;
//}


//给定两个数，求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数：");
//	scanf("%d %d",&a,&b);
//	//思路：从两个数中找出较小的一个，然后看看能否同时整除它俩，不能则减一，
//	//再看是否能整除，不能再减一，查看是否能整除
//	//int min = (a > b ? b : a);
//	//int m = min;
//	//while (1)
//	//{
//	//	if (a % m == 0 && b % m == 0)
//	//	{
//	//		break;
//	//	}
//	//	m--;
//	//}
//
//	//辗转相除法
//	int c = 0;
//	while (c=a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n",b);
//	return 0;
//}

//编写代码，数一下1~100的整数中出现过多少次数字9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		//判断个位是不是9
//		if (i%10==9)
//		{
//			count++;
//		}
//		//判断10位是不是9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d ",count);
//
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5.....+1/99-1/100

//分子都是1
//分母是1~100

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf ",sum);
//	return 0;
//}


//求10个整数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i=1;i<10;i++)
//	{
//		if (arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d",max);
//	return 0;
//}

//打印9*9乘法口诀表
//int main()
//{
//	int i = 0;//控制行
//	int j = 0;//控制每行有几列
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",j,i,i*j);//%-2d 两位左对齐
//										//%2d 两位右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//
//	return 0;
//}