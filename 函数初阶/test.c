#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//дһ������������������Ľϴ�ֵ

//int get_max(int a, int b)
//{
//	return (a > b ? a : b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������");
//	scanf("%d %d",&a,&b);
//	int ret = get_max(a,b);
//	printf("max=%d\n", ret);
//	return 0;
//}


//дһ�������������������ͱ���������
//����ʾ��
//�β�x��y
//void Swap(int x,int y) 
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//}
//��ȷʾ��
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
//	printf("������a��");
//	scanf("%d", &a);
//	printf("������b��");
//	scanf("%d", &b);
//	printf("����ǰ��a=%d,b=%d\n",a,b);
//	//ʵ�� a��b
//	//Swap(a,b);
//	Swap(&a,&b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}
//ʵ��a��b�ڴ����β�x��y��ʱ���βν�����ʵ�ε�һ����ʱ������x��y�ж����ĵ�ַ���޸��ββ���Ӱ��ʵ�Σ�
//�����ı�ʵ�Σ��ں������õ�ʱ����Ҫ��ʵ�εĵ�ַ

//��ʵ���ݸ������Ĳ�����ʵ�Σ��������ǳ��������������ʽ��������
//�����������ڲ��Ĳ������βΣ��β��ڱ����õ�ʱ��ӲŻᱻ�����ڴ棬������������ɺ��βλᱻ����

//��ֵ���ã��βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//��ַ���ã��Ѻ����ⲿ�����ı������ڴ��ַ���ݸ������������ú�����ߵı����ͺ���������������
//��ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���



//дһ��������ʵ��һ��������������Ķ��ֲ���

//�������������ɹ�������Ϊ int arr[]��������һ��ָ������������������Ԫ�صĵ�ַ
//�����ں����ڲ������ⲿ�����Ԫ�ظ�������������
//int binary_search(int arr[], int k)//�ҵ��˷����±꣬�Ҳ�������-1
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
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
//	
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	return 0;
//}
//���Ϻ���������ɹ�������Ϊ �����������ֵ� int arr[]��������һ��ָ����������
//��������Ԫ�صĵ�ַ,�����ڴ��ε�ʱ�򴫵���������Ԫ�صĵ�ַ
//�����ں����ڲ������ⲿ�����Ԫ�ظ���sz����������

//��ȷд��

//int binary_search(int arr[], int k, int sz)//int binary_search(int* arr, int k, int sz)
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
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	return 0;
//}	


//������Ƕ�׵���
//����֮���ǿ��Ը���ʵ�ʵ����������ϵģ�Ҳ�����໥���õ�
//ע�⺯������Ƕ�׵��ã����ǲ���Ƕ�׶���
//��������ʽ���ʣ� һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//


//˼�����´���Ĵ�ӡ���,printf�ķ���ֵ�Ǵ�ӡ���ַ�����

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
//}
////4321




//�����������Ͷ��� P��44��

//����������(��������ʹ��)
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
////�����Ķ���
//int Add(int a, int b)
//{
//	return a + b;
//}
// 
// 
// 

//�����ĵݹ�
//������������ı�̼��ɾͽеݹ�
//�ݹ��������Ҫ������1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//       			  2.ÿ�εݹ����֮��Խ��Խ�ӽ������������
//����һֱ�Լ������Լ� �ᷢ��stack overflow ��ջ�������ÿһ�κ����ĵ��û���ջ������ռ�


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

//���㲻�����ݹ飬����ݹ�Ĳ��̫�� �ݹ�Ҳ���ܻ�ջ���

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

//���ջ�����˼·��
//1.���ݹ��д�ɷǵݹ�
// 2.ʹ��static��������ֲ�����


//�ݹ�ľ�������
//1.��ŵ������
//2.������̨������

//int main()
//{
//	
//	return 0;
//}