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


//�ַ�������
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

//дһ�����������ַ����е��ַ���������(�ݹ�)
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

//�Ż�
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
//��һ��������bug�����ַ���Ϊ�������ַ�ʱ���������Ϊż����ʱ����������м��������������	
//����
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

//����һ������ÿһλ����֮��(�ݹ�)
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
//	printf("������һ�����֣�");
//	scanf("%u", &num);
//	int ret=DigSum(num);
//	printf("sum=%d\n",ret);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
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
//	printf("������һ�����֣�");
//	scanf("%u", &num);
//	printf("������η�����");
//	scanf("%u", &k);
//	double ret = Pow(num,k);
//	printf("%d^%d=%lf\n", num,k,ret);
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н���������һ����
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



//�������
// ʵ�ֺ���init�����������ʼ��Ϊȫ0
// ʵ��print������ӡ�����ÿ��Ԫ��
// ʵ��reverse�����������������Ԫ�ص�����
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

//��ϰ����д���룬��һ���������ڴ���1�ĸ���
////Ҳ����������1�ĸ���
////int a=3
//// 00000000 00000000 00000000 00000011 3�Ĳ���
////a&1
//// 00000000 00000000 00000000 00000001 1�Ĳ���
//// 00000000 00000000 00000000 00000001 3&1
////ͨ����һ�κ���һ�εĹ��ɿ��Է��� ĳ������1��λ��Ľ�������Ա�ʾĳ�������λ��0����1
//// 00000000 00000000 00000000 00000010
//// 00000000 00000000 00000000 00000001 1�Ĳ���
//// 00000000 00000000 00000000 00000000 ĳ������1��λ��Ľ�������Ա�ʾĳ�������λ��0����1
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("������һ�����֣�");
//	scanf("%d",&n);
//	int i = 0;
//	printf("%d���ڴ���1�ĸ���Ϊ",n);
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


//һ����̬�������� ���ܴ�����ʱ������ʵ���������ֵĽ���
//�Ӽ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d  b=%d\n",a,b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a=%d  b=%d\n", a, b);
//	return 0;
//}
//�϶δ����в������ĵط������a��һ���ܴ�����ֵ�û�г���int��Χ��bҲ��һ���ܴ�����ֵ�û�г���int��Χ
// a+b������int�ķ�Χ����ô�ͻ��������ʱ�Ͳ��ܽ����ˣ�

//�Ľ�

//int main()
//{
//	int a =26;
//	int b =33;
//	printf("����ǰ��a=%d  b=%d\n", a, b);
//	a = a - b;
//	b = a + b;
//	a = b-a;
//	printf("������a=%d  b=%d\n", a, b);
//	return 0;
//}

//////��һ��˼·
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
// �ɵ� ��������֧�ֽ�����
// 3^5^3==3^3^5 -->5
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}


//˼���±ߴ���Ĵ�ӡ���
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //aΪ0 �Ǽ�  ��ߵľͲ����� �����ж��� a������
//	i=a++||++b||d++;//aΪ0�Ǽ٣�Ȼ��������++bΪ�棬���Ժ�߲�����
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
//
//	return 0;
//}




//С������̨�ף�С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻������ף���ô��һ���ж����߷�
//���� nΪ10��
//�����һ������1��̨�ף���ʣstap��9�����߷�
//�����һ������2��̨�ף���ʣstap��8�����߷�
// stap��10��=stap��9��+stap��8��

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
//	printf("������n��ֵ�� ");
//	scanf("%d",&n);
//	int ret = stap(n);
//	printf("������%d��\n",ret);
//	return 0;
//}

// ��һ����������ĳ��ȣ��ڶ������� �����Ԫ�� ����������Ҫɾ��������
//int main()
//{
//	int n = 0;
//	printf("����������ĳ��ȣ�");
//	scanf("%d",&n);
//	int arr[50] = {0};
//	int i = 0;
//	int num = 0;
//	printf("�����������Ԫ�أ�");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	printf("������Ҫɾ�������֣�");
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
//	printf("ɾ����");
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//�����λ���ֵ����е�ˮ�ɻ���
//ˮ�ɻ��� 1461 = 1*461+14*61+146*1
//         655=6*55+65*5

//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//�ж�
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


//˼�����д����ӡ���
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

//��ϰ����д���룬��һ���������ڴ���1�ĸ���
////Ҳ����������1�ĸ���
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("������һ�����֣�");
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
//���ϴ������˸�����˼��Ϊʲô��
//�Ľ�
//int main()
//{
//	unsigned int n = 0;
//	int count = 0;
//	printf("������һ�����֣�");
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
//-1 ���� 11111111 11111111 11111111 11111111
//��n�����͸ı��unsigned int ��-1����һ���ܴ���������Ϳ�������


//��һ��˼·����֪���м���1���ǾͰ�ÿһλ�ó�����һ��
////int a=3
//// 00000000 00000000 00000000 00000011 3�Ĳ���
////a&1
//// 00000000 00000000 00000000 00000001 1�Ĳ���
//// 00000000 00000000 00000000 00000001 3&1
////ͨ����һ�κ���һ�εĹ��ɿ��Է��� ĳ������1��λ��Ľ�������Ա�ʾĳ�������λ��0����1
//// 00000000 00000000 00000000 00000010
//// 00000000 00000000 00000000 00000001 1�Ĳ���
//// 00000000 00000000 00000000 00000000 ĳ������1��λ��Ľ�������Ա�ʾĳ�������λ��0����1
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("������һ�����֣�");
//	scanf("%d", &n);
//	int i = 0;
//	printf("%d���ڴ���1�ĸ���Ϊ", n);
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

//��һ��˼·
//n=15 1111
// n=n&(n-1)
// 1111 & 1110
//1110  //�����ֵ��n
// 
//1110 & 1101
//1100 //�����ֵ��n
//
//1100&1011
//1000 //�����ֵ��n
//
//1000&0111
//0000
//ÿ��ִ��n&��n-1����������n���ұߵ�1��ʧ��
//�м���1�ͻ�ִ�м���&����
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("������һ�����֣�");
//	scanf("%d", &n);
//	printf("%d���ڴ���1�ĸ���Ϊ", n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//�ж�һ�����ǲ���2��n�η�Ҳ������n&��n-1��
// 2��n�η��������ֶ�����������ֻ��һ��1
// if (n & (n - 1)==0)
// { 
// }

//�����������������в�ͬλ�ĸ���
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

//���
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
//	printf("����%dλ��ͬ\n",ret);
//	return 0;
//}

//��ӡһ�������������е�����λ��ż��λ
//10
//00000000 00000000 00000000 00001010\78


//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d",&num);
//	//��ȡ����λ������
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(num>>i)&1);
//	}
//	printf("\n");
//
//	//��ȡż��λ������
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
//�ֲ��������Ƿ���ջ��������ʼ����Ĭ��ֵ�����ֵ

//˼�����´����ӡ���
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
//sizeof���㷵�صĽ����size_t���͵ģ����޷������͡����з��������޷�������ȵ�ʱ��int��ת��Ϊunsigned int
//-1��ת��Ϊ�޷������־���һ�������������


//��ӡһ��x��״��ͼ�� ����һ����������ʾ���������
//�����һ������
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
//				//printf("* "); //��ӡ�����Ǿ���*
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

//������ݺ��·ݣ�������һ��������ж�����
//ע������Ķ��£�������һ��

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
//	while (scanf("%d%d", &y, &m) == 2)//scanf�ɹ����뼸�������ؼ�
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

// ģ��ʵ��strcpy
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

//�Ż�
//void my_strcpy(char* dest, char* sour)
//{
//	while (*sour != '\0')
//	{
//		*dest++ = *sour++;
//	}
//	*dest = *sour;
//}

//�Ż�
//void my_strcpy(char* dest, char* sour)
//{
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//}

//����const�Ĳ���
//int main()
//{
//	const int num = 10;
//	int n = 20;
//	//num = 20;//�Ĳ���
//	//int* p = &num;
//	//*p = 20;//���Ըĵ�
//	
//	//const����ָ��
//	//1.const ����*����ߵ�ʱ��const int* p(�ȼ���int const* p)
//	//pָ������ݲ�����ͨ��p���ı䣬p������Ը� const���ε���*p
//	//const int* p = &num;
//	////*p = 20; //���ܸ�
//	//p = &n;//p�����ܸ�
//	//2.const ����*�ұߣ�int* const p;
//	//��˼��pָ��Ķ������ͨ��p���޸ģ����ǲ����޸�p���������ֵ
//	int* const p = &num;
//	*p = 50;//����
//	//p = &n;//������
//	//�����*���߶�����const����ô������˼�Ͷ�������
//	printf("%d\n",num);
//	return 0;
//}
// 
//�Ż�
//#include<assert.h>
//void my_strcpy(char* dest, const char* sour)
//{
//	//����
//	assert(sour!=NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *sour++)
//	//while (*sour++ = *dest++) //��char* sourǰ+ const ���Ա���д����д��ʱ�ᱨ��
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
////д��char*��������Ϊ��ʵ����ʽ���ʣ�strcpy���ص���Ŀ��ռ����ʼ��ַ
//char* my_strcpy(char* dest, const char* sour)
//{
//	char* ret = dest;
//	//����
//	assert(sour!=NULL);
//	assert(dest != NULL);
//	while (*dest++ = *sour++)
//	//while (*sour++ = *dest++) //��char* sourǰ+ const ���Ա���д����д��ʱ�ᱨ��
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = " ";
//	char arr2[] = "hello world";
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ���ʵ�һ�����ӣ���Ϊprintf�����Ĳ���
//	printf("%s\n", arr1);
//	return 0;
//}
// 
// 


//ģ��ʵ��strlen
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

//�������������ж��������ܲ��ܹ��������Σ�����ܹ��ɣ��ж������ε����ͣ���ͨ���������ȱߣ�

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
//				printf("�ȱ�������\n");
//			}
//			else if ((a == b && b != c) || (a == c && b != c) || (b == c && b != a))
//			{
//				printf("����������\n");
//			}
//			else
//			{
//				printf("��ͨ������\n");
//
//			}
//
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//	return 0;
//}

//˼�����д����ӡ���
//0x 00 00 00 01
//0x 00 00 00 02
//0x 00 00 00 03
//0x 00 00 00 04 
//һ���������ĸ��ֽڣ����ڴ��д��ʱ���ǵ��Ŵ�� 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//												��ַ�ɵ͵���
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


//�ַ�������
//int main()
//{	
//	char arr[10001] = {0};
//	//scanf("%s",arr);//�����ո�Ͳ�����
//	gets(arr);
//	//����
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

//��ͣ�����sum=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�a��һ������

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

//ˮ�ɻ�����������
//���0~100000֮�����е�"ˮ�ɻ���"
//"ˮ�ɻ���"��ָһ��nλ�������λ���ֵ�n�η�֮�͸պõ��ڸ�������

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.Ҫȷ��i�Ǽ�λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.�õ�i��ÿһλ
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

//��ӡ����
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
//	//��ӡ�ϰ벿��
//	//��ӡÿһ��
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 6 - i; j > 0; j--)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 1; j <= 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	//��ӡÿһ��
//	for (i = 0; i < 6; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = i + 1; j > 0; j--)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 11 - 2 * i; j > 0; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ӡָ������������
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ1��
//		//��ӡ�ո�
//		int j = 0;
//		for (j=0; j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*		
//		for (j = 0; j < 2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�°벿��
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡ1��
//			//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*		
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//����ˮ���⣺һƿ��ˮһԪ���������̿��Ի�һƿ��ˮ������ʮԪ�����Ժȶ�����ˮ

//
//int main()
//{
//	int money = 20;
//	int total = money;
//	int empty = money;
//
//	//�û�
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//������+��һ������ʣ�µ�
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int year=1009; *p=&year; ���б����У�����ʹyear������1010����
//  *p+=1
// ��*p��++��
//  ++��*p��
//  *p++��
// *p++���ܣ�++��������p�ϣ���*p����p=p+1



//��С������

//����������a��������b��������ǵ���С������
//��򵥵�˼·��a��b����С��������СҲ���Ǹ��ϴ�����������Գ���һ���������о�һֱ+1�Գ���
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

//��һ��˼·
//����m��a��b����С����������ô  a*i = b*j= m
// a*1 �����ܲ�������b�����ܾ�a*2 �ٿ����ܲ�������b ���ܾ�a*3 ֱ���ҵ�
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

//��һ�仰�ĵ��ʵ��ã���㲻���ã�I like beijing. ��� beijing.like I
//˼· ����������  .gnijieb ekil I
//�ٰ�ÿ���������� beijing. like I
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
//	//���������ַ���
//	reverse(arr,arr+len);
//	//����ÿ������
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


//��������ż��˳�򣬵������飬ʹ����ȫ��λ��ż��ǰ��

//void move_arr(int* pa, int sz)
//{
//	int* left = pa;
//	int* right = pa + sz-1;
//	
//	while (left<right)
//	{
//		//����������һ��ż��,ͣ����
//		while ((left<right) && *left % 2 == 1)//����Խ��
//		{
//			left++;
//		}
//		//����������һ��������ͣ����
//		while ((left < right) && *right % 2 == 0)
//		{
//			right++;
//		}
//		//����
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
//	//����
//	move_arr(arr, 10);
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�������кϲ�
//���������������е����У����������кϲ���һ���������в����




int main()
{
	int n = 0;
	int m = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	scanf("%d %d", &n, &m);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//�ϲ���ӡ
	int j = 0;
	int k = 0;

	while (j < n && k < m)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;

		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else
	{
		for (; k < m; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	return 0;
}

//
//int main()
//{
//
//	return 0;
//}


