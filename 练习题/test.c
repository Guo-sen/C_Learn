#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>


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





//写一个函数，每次调用这个函数，就会将num的值+1；
void Add(int* p)
{
	*p += 1;
	//*p++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d ", num);
	Add(&num);
	printf("%d ", num);
	Add(&num);
	printf("%d ", num);
	return 0;
}



//int main()
//{
//
//	return 0;
//}