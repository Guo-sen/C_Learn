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


//字符串逆序
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++, right--;
//	}
//}

//写一个函数，将字符串中的字符反向排列(递归)
//void reverse(char* str)//p62
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str= *(str + len - 1);
//	*(str + len - 1)='\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}

//优化
//void reverse(char arr[],int left,int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//
//	if (left < right)
//	{
//		reverse(arr,left+1,right-1);
//	}
//}
//上一个函数有bug，当字符串为奇数个字符时不会出错，当为偶数个时，会出错，最中间的两个交换不了	
//改正
//void reverse(char arr[], int left, int right)
//{
//	if (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		reverse(arr, left + 1, right - 1);
//	}
//	
//	
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	//reverse(arr);
//	int sz = strlen(arr);
//	reverse(arr,0,sz-1);
//	printf("%s\n", arr);
//	return 0;
//}

//计算一个数的每一位数字之和(递归)
//int DigSum(unsigned int num)
//{
//	if (num > 9)
//	{
//
//		return num%10+DigSum(num/10);
//	}
//	else
//	{
//		return num;
//	} 
//}
//int main()
//{
//	unsigned int num =0 ;
//	printf("请输入一个数字：");
//	scanf("%u", &num);
//	int ret=DigSum(num);
//	printf("sum=%d\n",ret);
//	return 0;
//}

//递归实现n的k次方
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n,k-1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//int main()
//{
//	int num = 0;
//	int k = 0;
//	printf("请输入一个数字：");
//	scanf("%u", &num);
//	printf("请输入次方数：");
//	scanf("%u", &k);
//	double ret = Pow(num,k);
//	printf("%d^%d=%lf\n", num,k,ret);
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换（数组一样大）
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("arr1= ");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2= ");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}



//数组操作
// 实现函数init（）把数组初始化为全0
// 实现print（）打印数组的每个元素
// 实现reverse（）函数，完成数组元素的逆置
// 
//
//void init(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 0;
//	}
//}
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//void reverse(int* p, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = tmp;
//		left++, right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}

//练习：编写代码，求一个整数在内存中1的个数
////也就是求补码中1的个数
////int a=3
//// 00000000 00000000 00000000 00000011 3的补码
////a&1
//// 00000000 00000000 00000000 00000001 1的补码
//// 00000000 00000000 00000000 00000001 3&1
////通过上一段和下一段的规律可以发现 某个数和1按位与的结果，可以表示某个数最低位是0还是1
//// 00000000 00000000 00000000 00000010
//// 00000000 00000000 00000000 00000001 1的补码
//// 00000000 00000000 00000000 00000000 某个数和1按位与的结果，可以表示某个数最低位是0还是1
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("请输入一个数字：");
//	scanf("%d",&n);
//	int i = 0;
//	printf("%d在内存中1的个数为",n);
//	while (i < 32)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n=n >> 1;
//		i++;
//	}
//	printf("%d\n",count);
//	return 0;
//}


//一道变态的面试题 不能创建临时变量，实现两个数字的交换
//加减法
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d  b=%d\n",a,b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d  b=%d\n", a, b);
//	return 0;
//}
//上段代码有不完美的地方，如果a是一个很大的数字但没有超过int范围，b也是一个很大的数字但没有超过int范围
// a+b超过了int的范围，那么就会溢出，此时就不能交换了；

//改进

//int main()
//{
//	int a =26;
//	int b =33;
//	printf("交换前：a=%d  b=%d\n", a, b);
//	a = a - b;
//	b = a + b;
//	a = b-a;
//	printf("交换后：a=%d  b=%d\n", a, b);
//	return 0;
//}

//////另一种思路
// 3^3
// 011
// 011
// 000
// a^a--> 0

// 0^5
// 000
// 101
// 101
// 0^a-->a
// 3^3^5 -->5

//3^5^3
// 3^5 011 101 110
// 110^3(011) 101(5)
// 可得 异或操作符支持交换律
// 3^5^3==3^3^5 -->5
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}


//思考下边代码的打印结果
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //a为0 是假  后边的就不算了 但是判断完 a会自增
//	i=a++||++b||d++;//a为0是假，然后自增，++b为真，所以后边不算了
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
//
//	return 0;
//}




//小乐乐走台阶，小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者两阶，那么他一共有多少走法
//假设 n为10，
//假设第一步走了1个台阶，还剩stap（9）种走法
//假设第一步走了2个台阶，还剩stap（8）种走法
// stap（10）=stap（9）+stap（8）

//int stap(int n)
//{
//	if (n<=2)
//	{
//		return n;
//	}
//	else
//	{
//		return (stap(n - 1) + stap(n - 2));
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入n的值： ");
//	scanf("%d",&n);
//	int ret = stap(n);
//	printf("方法有%d种\n",ret);
//	return 0;
//}

// 第一次输入数组的长度，第二次输入 数组的元素 第三次输入要删除的数字
//int main()
//{
//	int n = 0;
//	printf("请输入数组的长度：");
//	scanf("%d",&n);
//	int arr[50] = {0};
//	int i = 0;
//	int num = 0;
//	printf("请输入数组的元素：");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("请输入要删除的数字：");
//	scanf("%d",&num);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == num)
//		{
//			int j = 0;
//			for (j = i; j <= n; j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//			
//		}
//	}
//	printf("删除后：");
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//输出五位数种的所有的水仙花数
//水仙花数 1461 = 1*461+14*61+146*1
//         655=6*55+65*5

//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k=(int)pow(10, j);
//			sum = sum + (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}


//思考下列代码打印结果
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//练习：编写代码，求一个整数在内存中1的个数
////也就是求补码中1的个数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//以上代码求不了负数（思考为什么）
//改进
//int main()
//{
//	unsigned int n = 0;
//	int count = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//-1 补码 11111111 11111111 11111111 11111111
//把n的类型改变成unsigned int 把-1看成一个很大的正数，就可以求了


//另一种思路，想知道有几个1，那就把每一位拿出来看一看
////int a=3
//// 00000000 00000000 00000000 00000011 3的补码
////a&1
//// 00000000 00000000 00000000 00000001 1的补码
//// 00000000 00000000 00000000 00000001 3&1
////通过上一段和下一段的规律可以发现 某个数和1按位与的结果，可以表示某个数最低位是0还是1
//// 00000000 00000000 00000000 00000010
//// 00000000 00000000 00000000 00000001 1的补码
//// 00000000 00000000 00000000 00000000 某个数和1按位与的结果，可以表示某个数最低位是0还是1
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	int i = 0;
//	printf("%d在内存中1的个数为", n);
//	while (i < 32)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//		i++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//另一种思路
//n=15 1111
// n=n&(n-1)
// 1111 & 1110
//1110  //结果赋值给n
// 
//1110 & 1101
//1100 //结果赋值给n
//
//1100&1011
//1000 //结果赋值给n
//
//1000&0111
//0000
//每次执行n&（n-1），都会让n最右边的1消失掉
//有几个1就会执行几次&运算
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	printf("%d在内存中1的个数为", n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//判断一个数是不是2的n次方也可以用n&（n-1）
// 2的n次方这种数字二进制序列里只有一个1
// if (n & (n - 1)==0)
// { 
// }

//求两个正数二进制中不同位的个数
//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//异或法
//int count_diff_bit(int m, int n)
//{
//	int k = m ^ n;
//	int count=0;
//	while (k)
//	{
//		k = k & (k - 1);
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d",&m,&n);
//	int ret = count_diff_bit(m, n);
//	printf("共有%d位不同\n",ret);
//	return 0;
//}

//打印一个整数二进制中的奇数位和偶数位
//10
//00000000 00000000 00000000 00001010\78


//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d",&num);
//	//获取奇数位的数字
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(num>>i)&1);
//	}
//	printf("\n");
//
//	//获取偶数位的数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//局部变量，是放在栈区，不初始化，默认值是随机值

//思考以下代码打印结果
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}
//sizeof计算返回的结果是size_t类型的，是无符号整型。当有符号数和无符号数相比的时候，int被转化为unsigned int
//-1被转化为无符号数字就是一个超级大的数字


//打印一个x形状的图案 输入一个整数，表示输出的行数
//想像成一个矩形
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				//printf("* "); //打印出来是矩形*
//				if (i == j)
//				{
//					printf("*");
//				}
//			    else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");;
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//输入年份和月份，计算这一年这个月有多少天
//注意闰年的二月，其他都一样

//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d%d", &y, &m) == 2)//scanf成功输入几个数返回几
//	{
//		int d = days[m];
//		if (is_leap_year(y) == 1&&m==2)
//		{
//			d++;
//		}
//		printf("%d\n",d);
//	}
//	return 0;
//}

// 模拟实现strcpy
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
// 
// 


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

//输入三个数，判断三条边能不能构成三角形，如果能构成，判断三角形的类型（普通，等腰，等边）

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//			}
//			else if ((a == b && b != c) || (a == c && b != c) || (b == c && b != a))
//			{
//				printf("等腰三角形\n");
//			}
//			else
//			{
//				printf("普通三角形\n");
//
//			}
//
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//	}
//	return 0;
//}

//思考下列代码打印结果
//0x 00 00 00 01
//0x 00 00 00 02
//0x 00 00 00 03
//0x 00 00 00 04 
//一个整型有四个字节，在内存中存的时候是倒着存的 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//												地址由低到高
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//字符串逆序
//int main()
//{	
//	char arr[10001] = {0};
//	//scanf("%s",arr);//遇到空格就不读了
//	gets(arr);
//	//逆序
//	int left=0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//求和：计算sum=a+aa+aaa+aaaa+aaaaa的前五项之和，a是一个整数

//int main()
//{
//	int a = 0;
//	int n = 5;
//	scanf("%d", &a);
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + 2;
//		sum = sum + k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//水仙花数变种问题
//输出0~100000之间所有的"水仙花数"
//"水仙花数"是指一个n位数，其各位数字的n次方之和刚好等于该数本身

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.要确定i是几位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.得到i的每一位
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ",sum);
//		}
//	}
//	return 0;
//}

//打印菱形
//      *        1 0
//     ***       3 1
//    *****      5 2
//   *******     7 3
//  *********    9 4
// ***********  11 5
//************* 13 6
// ***********  11  0
//  *********    9  1
//   *******     7  2
//    *****      5  3
//     ***       3  4
//      *        1  5

//int main()
//{
//	//打印上半部分
//	//打印每一行
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//
//		//打印空格
//		int j = 0;
//		for (j = 6 - i; j > 0; j--)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 1; j <= 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	//打印每一行
//	for (i = 0; i < 6; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = i + 1; j > 0; j--)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 11 - 2 * i; j > 0; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印指定行数的菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印1行
//		//打印空格
//		int j = 0;
//		for (j=0; j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		//打印*		
//		for (j = 0; j < 2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i < line-1; i++)
//	{
//		//打印1行
//			//打印空格
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*		
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//喝汽水问题：一瓶汽水一元，两个控盘可以换一瓶汽水，给二十元，可以喝多少汽水

//
//int main()
//{
//	int money = 20;
//	int total = money;
//	int empty = money;
//
//	//置换
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//换来的+上一次手里剩下的
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int year=1009; *p=&year; 下列变量中，不能使year增加至1010的是
//  *p+=1
// （*p）++；
//  ++（*p）
//  *p++；
// *p++不能，++作用在了p上，先*p，后p=p+1



//最小公倍数

//输入正整数a和正整数b，输出它们的最小公倍数
//最简单的思路，a和b的最小公倍数最小也是那个较大的数，可以试除另一个数，不行就一直+1试除。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int m = (a > b ? b : b);
//	for (;; m++)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			printf("%d\n",m);
//			break;
//		}
//	}
//	return 0;
//}

//另一种思路
//假设m是a和b的最小公倍数，那么  a*i = b*j= m
// a*1 看看能不能整除b，不能就a*2 再看看能不能整除b 不能就a*3 直到找到
//int main()
//{
//	int i = 1;
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	for (i = 1;; i++)
//	{
//		if ((a * i) % b == 0)
//		{
//			break;
//		}
//	}
//	printf("%d\n", a*i);
//
//	return 0;
//}

//将一句话的单词倒置，标点不倒置：I like beijing. 输出 beijing.like I
//思路 先整体逆序：  .gnijieb ekil I
//再把每个单词逆序： beijing. like I
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr)-1;
//	//逆序整个字符串
//	reverse(arr,arr+len);
//	//逆序每个单词
//	char* start = arr;
//	while (*start!='\0')
//	{
//		char* end = start;
//		while (*end!=' '&&*end!='\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//		{
//			end++;
//		}
//		start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//调整奇数偶数顺序，调整数组，使奇数全部位于偶数前面

//void move_arr(int* pa, int sz)
//{
//	int* left = pa;
//	int* right = pa + sz-1;
//	
//	while (left<right)
//	{
//		//从左向右找一个偶数,停下来
//		while ((left<right) && *left % 2 == 1)//避免越界
//		{
//			left++;
//		}
//		//从右向左找一个奇数，停下来
//		while ((left < right) && *right % 2 == 0)
//		{
//			right++;
//		}
//		//交换
//		if (left < right)
//		{
//			int tmp = 0;
//			tmp = *left;
//			*left = *right;
//			*right = tmp;
//			left++, right--;
//		}
//	}
//}
//
//int main()
//{	
//	int arr[10] = { 0 };
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//调整
//	move_arr(arr, 10);
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//有序序列合并
//输入两个升序排列的序列，将两个序列合并成一个有序序列并输出
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//合并打印
//	int j = 0;
//	int k = 0;
//
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//	return 0;
//}

//设计一个小程序来判断当前机器的字节序
//int main()
//{
//	int a = 1;//0x00000001
//	char* pc= &a;
//	if (*pc == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//另一种写法
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


//思考下列代码打印结果
//int main()
//{
//	char a = -1;				//-1放的时候会发生截断
//	signed char b = -1;			
//	unsigned char c = -1;		
//	printf("%d %d %d\n",a,b,c);//打印的时候会发生整型提升
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000 -128原码
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000 -128补码
//	//10000000 截断后放进a
//
//	//无符号整型打印发生整型提升
//	//11111111 11111111 11111111 10000000
//	printf("%u\n",a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n",i+j);
//	return 0;
//}


//  int main()
//{
//	  char arr[1000];
//	  int i = 0;
//	  for (i = 0; i < 1000; i++)
//	  {
//		  arr[i] = -1 - i;
//	  }
//	  //-1 -2......-128 127 126 ...0 -1 -2......
//	  printf("%d", strlen(arr));
//	return 0;
//}
 //arr每个元素是char类型-128~127，再大的数字往里放都会发生截断成为-128~127之间的数字

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") >= 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//strlen返回值是size_t-->unsigned int 无符号数和无符号数的运算结果还是无符号数





//改数字，把一个数的每一位改成0和1，如果某一位是奇数，就把他变成1，如果是偶数就把他变成0
//eg：输入123 输出101
//int main()
//{
//	int n = 0;
//	int sum = 0;    
//	scanf("%d", &n);
//	int i = 0;
//	while (n)
//	{
//		int end = n % 10;
//		if (end % 2 == 1)
//		{
//			sum += 1 * pow(10, i);
//			i++;
//		}
//		else
//		{
//			sum += 0 * pow(10, i);
//			i++;
//		}
//		n /= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印直角三角形，输入一个整数，表示直角三角形直角边的长度，即‘*’的数量，每个*后边都有一个空格
//也表示输出行数
//eg：输入5
//输出
//        * 0
//      * * 1
//    * * * 2
//  * * * * 3
//* * * * * 3
//0 1 2 3 4

//查找规律可以得到当行号+列号=n-1的时候，打印*号，其余情况打印空格
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else 
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//思考下列代码打印的结果
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = a + b;
//
//	printf("%d %d\n", a + b, c);
//	return 0;
//}




//猜名次
//5位运动员参加跳水比赛有人让他们预测比赛结果
//A说：B第二、 我第三
//B说：我第二、E第四
//C说：我第一、D第二
//D说：C最后、 我第三
//E说：我第四、A第一
//比赛结束后，他们每个人只说对了一半，请编程确定名次

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//
//	for (a = 1; a <= 5; a++) //a的名次总共五种，穷举出来
//	{
//		for (b = 1; b <= 5; b++) //b的名次总共五种，穷举出来
//		{
//			for (c= 1; c <= 5; c++) //c的名次总共五种，穷举出来
//			{
//				for (d = 1; d <= 5; d++) //d的名次总共五种，穷举出来
//				{
//					for (e = 1; e <= 5; e++) //e的名次总共五种，穷举出来
//					{
//						if(    ((b == 2) + (a == 3) == 1)   //判断表达式判断为真，值为1，判断为假，值为0
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)    )
//						{
//							if(a*b*c*d*e==120)//需要过滤一下，仅仅上边那个条件会有重复的
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//某地发生了一起谋杀案，警察通过排查确定杀人凶手必为4个嫌犯中的一个，以下为4个嫌疑犯的供词
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话，一个人说了假话，请判断谁是凶手
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//判断
//		if (((killer != 'a') +
//			(killer == 'c') +
//			(killer == 'd') +
//			(killer != 'd')) == 3)
//			printf("%c\n", killer);
//	}
//
//	return 0;
//}



//打印杨辉三角
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// ..........

//都往左边对其 发现
// 
//1           0
//1 1         1
//1 2 1       2
//1 3 3 1     3
//1 4 6 4 1   4
// 
//0 1 2 3 4
// 
// 
//想象成矩形。第一列是1，对角线是1
//int main()
//{
//	int arr[10][10] = { 0 };
//	
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)//只需要初始化到对角线就可以
//		{
//			if (i == j||j==0) ////初始化(对角线的横坐标纵坐标相等，此时初始化为1，当纵坐标为0的时候是1)
//			{
//				arr[i][j] = 1;
//			}
//			
//			//计算需要计算的部分（行>=2的时候，和列>=1的时候需要计算）
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//以上代码已经把内容搞定
//
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)//只需要初始化到对角线就可以
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}





//字符串左旋
//实现一个函数可以左旋字符串中的k个字符
//如： ABCD左旋一个字符得到 BCDA
//     ABCD左旋二个字符得到CDAB

//void left_rotate(char arr[],int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)//旋转一个字符
//	{
//		char tmp = arr[0];//把第一个字符元素保存下来
//
//		//把后边所有元素往前移一个位置
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;//把保存下来的第一个字符放在数组的最后一个位置上
//	}
//}

//另一种思路 abcdef 左旋转2个字符，先把ab 逆序 ba 再把cdef逆序得到 fedc，此时数组是 bafedc 然后整体逆序 cdefab
//#include<assert.h>
//void reverse(char* left,char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	reverse(arr,arr+k-1);//处理左边
//	reverse(arr+k,arr+len-1);//处理右边
//	reverse(arr,arr+len-1);//处理整体
//}
//int main()
//{
//	char arr[] = "abcdef"; //左旋2个字符得到 cdefab
//	printf("%s\n", arr);
//	printf("请输入要旋转的字符个数：");
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}



//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于 O（N）；(假设有n个元素，最坏的情况需要找n次，这个程序的时间复杂度就是o（n）)

//1 2 3
//4 5 6
//7 8 9 
// 

//struct Point
//{
//	int x, y;
//};
//
//struct Point find_num(int arr[3][3], int row, int col, int n)
//{
//	int x = 0;
//	int y = col - 1;
//	struct Point p = { -1,-1 };
//	while (x<=row-1&&y>=0)
//	{
//		if (n < arr[x][y])
//		{
//			y--;//比右上角的数字小，说明肯定不在那一列了，以后不需要查找那一列了
//		}
//		else if (n > arr[x][y])
//		{
//			x++;// 比右上角的数字大，说明肯定不在那一行了，以后不需要查找那一行了
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int n = 0;
//	printf("请输入要查找的数：");
//	scanf("%d", &n);
//	struct Point p=find_num(arr, 3, 3, n);
//	printf("%d %d\n",p.x,p.y);//找到了返回1，找不到返回0
//	return 0;
//}


//int find_num(int arr[3][3], int* px, int* py, int n)
//{
//	int x = 0;
//	int y = *py - 1;
//	
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (n < arr[x][y])
//		{
//			y--;//比右上角的数字小，说明肯定不在那一列了，以后不需要查找那一列了
//		}
//		else if (n > arr[x][y])
//		{
//			x++;// 比右上角的数字大，说明肯定不在那一行了，以后不需要查找那一行了
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//
//	*px = -1, * py = -1;
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int n = 0;
//	printf("请输入要查找的数：");
//	scanf("%d", &n);
//	int x = 3; //		行数
//	int y = 3;//        列数
//	int ret= find_num(arr, &x, &y, n);
//	if (ret == 1)
//	{
//		printf("找到了，下标为%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//给两个字符串，判断第二个是否是由第一个字符旋转之后的字符串
//思路1：把arr1，旋转1个字符和arr2比一下，看看相同不相同，如果不相同，就arr1旋转两次，比一下...穷举
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//
//	//判断arr2是否可以通过arr1旋转得到
//	int ret = is_left_move(arr1,arr2);
//	if (ret == 1)
//	{
//		printf("OK\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//思路2，arr1在后边追加一个自己，那么此时arr1就涵盖了所有的旋转可能的子串

//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr1);
//	if (len1 != len2) //如果两个字符串长度不相等，绝对不可能是旋转得到，没有这个限制条件会有bug	
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	char* ret=strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else 
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[20] = "abcdef"; //abcdefabcdef
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("OK\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}



//矩阵转置，输入两个整数n和m，表示一个矩阵有n行和m列 ，从第二行到第n+1行，每行输入m个整数，用空格分隔开，
//表示矩阵中的元素，然后输出m行n列，输出的内容为转置后的矩阵

//转置前：
//1 2 3
//4 5 6
//
//转置后：
//1 4
//2 5
//3 6

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	//输入矩阵
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("-----------------------------------\n");
//	//输出矩阵
//	for (i = 0;i<m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//上三角矩阵的判断
//上三角矩阵，即主对角线以下的元素都为0，主对角线为左上角到右下角
//
//eg： 输入3
//         1 2 3
//         0 4 5
//         0 0 6
//输出 ：YES
//1 0
//2 0 2 1
//纵对角线下的坐标，纵坐标<横坐标

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int flag = 1;//标记，假设是上三角
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	//判断
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//		
//	}
//   end:
//	if (flag == 0)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//
//	return 0;
//}




// 有序序列的判断
//输入一个整数序列判断是否为有序序列（指序列中的数从大到小排列或者从小到大，相同也看作有序）

//第一行输入一个整数N，第二行输入N个整数
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int flag1 = 0;
//	int flag2 = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else if(arr[i]<arr[i-1])
//			{
//				flag2 = 1;
//			}
//			else
//			{
//				;
//			}
//		}
//	}
//	//如果是升序，把flag1置为1
//	//如果是降序，把flag2置为1
//
//
//
//	//判断
//	//如果flag1为1，flag2为0，是升序
//	//如果flag1为0，flag2为1，是降序
//	//如果flag1为1，flag2为1，无序
//	//如果都为0，所有元素都相同，是有序
//	if (flag1 + flag2 <=1)
//	{
//		printf("有序\n");
//	}
//	else
//	{
//		printf("无序\n");
//	}
//
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




//求最大公因数和最小公倍数之和

//int main()
//{
//	int n, m;
//	printf("请输入两个数：");
//	scanf("%d%d", &n, &m);
//	int min = m > n ? n : m;
//	int max = m > n ? m : n;
//	
//	int i = min;
//	//求最大公因数
//	for (; i > 0; i--)
//	{
//		if (n % i == 0 && m % i == 0)
//		{
//			break;
//		}
//	}
//
//	//求最小公倍数
//	int j = 0;
//	for (j = max;; j++)
//	{
//		if (j % m == 0 && j % n == 0)
//		{
//			break;
//		}
//	}
//	printf("%d\n", i + j);
//
//	return 0;
//}


//优化

//int main()
//{
//	int n, m;
//	printf("请输入两个数：");
//	scanf("%d%d", &n, &m);
//	int i = n, j = m;
//	int r = 0;
//	while (r = i % j)
//	{
//		i = j;
//		j = r;
//	}
//	//此时，j就是最大公约数
//	//最小公倍数==n*m/j
//	printf("%d\n", j + (n * m / j));
//	return 0;
//}



//输出空心正方形图案

//输入：4
//输出：
// 
//* * * *
//*     *
//*     *
//* * * *

//输入：5
//输出：
//* * * * *
//*       *
//*       *
//*       *
//* * * * * 

int main()
{
	int input = 0;
	scanf("%d", &input);
	int i = 0;
	for (i = 0; i < input; i++)
	{
		int j = 0;
		for (j = 0; j < input; j++)
		{
			//打印*
			
			if (i == 0 || i == input - 1 || j == 0 || j == input - 1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
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


