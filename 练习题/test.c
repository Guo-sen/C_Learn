#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>

//��д���� ʹ�����������Ӵ�С���

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

//дһ������ ��ӡ1~100�����е�3�ı���
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

//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("������һ����->: ");
//	scanf("%d",&n);
//	for (i = 1; n >= 1; n--)
//	{
//		i = i * n;
//	}
//	printf("���Ϊ%d \n",i);
//	return 0;
//}

//����1��+2��+3��+4��+.....+10��
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int tem = 1;
//	printf("������һ����->: ");
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
//	printf("���Ϊ��%d\n",ret);
//	return 0;
//}
//�Ż�
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int tem = 1;
//	int sum=0;
//	printf("������һ����->: ");
//	scanf("%d", &n);
//	for (tem=1;tem<=n ;tem++)
//	{
//		ret = ret * tem;
//		sum = sum + ret;
//	}
//	printf("���Ϊ��%d\n", sum);
//	return 0;
//}

//��һ�����������в���ĳ����������֣����ֲ��ң�

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 0;//Ҫ���ҵ���������
//	int mid = 0;
//	printf("������Ҫ���ҵ���->: ");
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//	return 0;
//}


//��д���룬ÿ���ַ��������ƶ����м���

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


//��д����ģ���û���¼���������������ȷ����ʾ��¼�ɹ�����������������˳�����


//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";//����
//	char password[20] = " ";
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������->: ");
//		scanf("%s",password);
//		if (strcmp(password, arr) == 0)
//		{
//			printf("������ȷ����½�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("�����������\n");
//
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������붼���󣬵�½ʧ��\n");
//
//	}
//	return 0;
//}


//��ϰ

//��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//
//		//�������ʹ�ӡ
//
//		//�Գ���
//
//		int flag = 1;//��1��ʾ������
//		int j = 0;
//		//for (j = 2; j <= i - 1; j++)
//		//�Ż�
//		//���һ����������һ����д��m=a*b
//		//16 = 2 * 8 = 4 * 4;a��b��һ����һ������<=sqrt(m)��m��ƽ����
//		//for (j = 2; j<=sqrt(i); j++)//sqrt ͷ�ļ�Ϊmath.h
//		 for (j = 2; j <= sqrt(i); j++)//�Ż���
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
//			 printf("%d������ \n", i);
//		 }
//	}
//	return 0;
//}
//���Ż�
//���һ����������һ����д��m=a*b
//ż�����Բ�������
//for (i = 101; i <= 200; i+=2)

//дһ���������ж�һ�����ǲ���������������

//int is_prime(int n)//����������1�����Ƿ���0
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)//�Ż���
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
//		if (is_prime(i))//����������1��1Ϊ��
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//��ӡ1000~2000��֮�������
//1.�ܱ�4���������Ҳ��ܱ�100����
//2.�ܱ�400����
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
//		//���ϴ����ӡ��ȫ����2000�����꣬�ʹ�ӡ��������
//		//��Ϊif��else ifֻ���ȥһ�������˵�һ��if���±ߵ�else if�Ͳ����ȥ�ˣ�
//		//����Ϊ����else if�ǵ�elseȥ��
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
//		//�ɼ�Ϊ��
//		/*if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ",year);
//		}*/
//	}
//
//	return 0;
//}



//дһ���������ж�ĳ���Ƿ�Ϊ����
//int is_leap_year(int year)//���귵��1�����Ƿ���0
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

//��ϰ������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ(p.46)
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





//ģ��ʵ��strlen
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

//��ϰ ��д���� ����������ʱ�������ַ����ĳ���
////"abcd"�����*str����'\0',���ַ�����������1������ת������ 1+my_strlen(bcd)
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return (1 + my_strlen(str + 1));//���Ƽ�д++str��str+1����ı�str����++str��str����Ҳ���ı���	
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int len= my_strlen("abcd");//�ַ������͵�ʱ�򴫵����ַ�������ʼ��ַ����a�ĵ�ַ
//	printf("len=%d",len);
//	return 0;
//}

//дһ����������n�Ľ׳�

//�ݹ�ķ�ʽ
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

//�����ķ�ʽ--�ǵݹ�(������ѭ��)

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

//���n��쳲��������������������
//Fib(n): n<=2    1
//		  n>2     Fib(n-1)+Fib(n-2)


//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//����һ�����������������n����3��������ٴ�
//			   //�����40��쳲������� n=3������  39088169��
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
//���Ϻ���Ч��̫��
//40
//39       38
//38      37    37     36
//37 36  36 35 36 35  35 34

//�Ż�

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
//	printf("������n��ֵ�� ");
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("��%d��쳲��������ǣ�%d\n",n,ret);
//	//printf("%d\n",count);
//	return 0;
//}


 //дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[],int k,int sz)//�ҵ��˷����±꣬�Ҳ�������-1
//{
//	int left = 0;
//	int right = sz - 1; 
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//���⣨left+right��/2ʱ��left+right���
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n",ret);
//	}
//	return 0;
//}
// 
// 
// 
//˼�����´���Ĵ�ӡ���,printf�ķ���ֵ�Ǵ�ӡ���ַ�����

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
//}
////4321




//дһ��������ÿ�ε�������������ͻὫnum��ֵ+1��
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

//��ϰ������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ(p.46)
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





//ģ��ʵ��strlen
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

//��ϰ ��д���� ����������ʱ�������ַ����ĳ���
////"abcd"�����*str����'\0',���ַ�����������1������ת������ 1+my_strlen(bcd)
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return (1 + my_strlen(str + 1));//���Ƽ�д++str��str+1����ı�str����++str��str����Ҳ���ı���	
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int len= my_strlen("abcd");//�ַ������͵�ʱ�򴫵����ַ�������ʼ��ַ����a�ĵ�ַ
//	printf("len=%d",len);
//	return 0;
//}

//дһ����������n�Ľ׳�

//�ݹ�ķ�ʽ
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

//�����ķ�ʽ--�ǵݹ�(������ѭ��)

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

//���n��쳲��������������������
//Fib(n): n<=2    1
//		  n>2     Fib(n-1)+Fib(n-2)


//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//����һ�����������������n����3��������ٴ�
//			   //�����40��쳲������� n=3������  39088169��
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
//���Ϻ���Ч��̫��
//40
//39       38
//38      37    37     36
//37 36  36 35 36 35  35 34

//�Ż�

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
//	printf("������n��ֵ�� ");
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("��%d��쳲��������ǣ�%d\n",n,ret);
//	//printf("%d\n",count);
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}


//�����������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������");
//	scanf("%d %d",&a,&b);
//	//˼·�������������ҳ���С��һ����Ȼ�󿴿��ܷ�ͬʱ�����������������һ��
//	//�ٿ��Ƿ��������������ټ�һ���鿴�Ƿ�������
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
//	//շת�����
//	int c = 0;
//	while (c=a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n",b);
//	return 0;
//}

//��д���룬��һ��1~100�������г��ֹ����ٴ�����9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		//�жϸ�λ�ǲ���9
//		if (i%10==9)
//		{
//			count++;
//		}
//		//�ж�10λ�ǲ���9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d ",count);
//
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5.....+1/99-1/100

//���Ӷ���1
//��ĸ��1~100

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


//��10�������е����ֵ
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

//��ӡ9*9�˷��ھ���
//int main()
//{
//	int i = 0;//������
//	int j = 0;//����ÿ���м���
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",j,i,i*j);//%-2d ��λ�����
//										//%2d ��λ�Ҷ���
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