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


//������Ƕ�׵��ú���ʽ����
//����֮���ǿ��Ը���ʵ�ʵ����������ϵģ�Ҳ�����໥���õ�


//int main()
//{
//	
//	return 0;
//}