#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ַ�ָ��
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'W';
//	printf("%c\n", ch);*/
//
//	char* p = "abcdef"; //p���ŵ���a�ĵ�ַ
//	//*p = 'w';//������������Ϊ����������ʽ��abcdef����һ�������ַ��������ܸ�
//	printf("%s\n", p);
//	return 0;
//}
//

//˼�����д���Ĵ�ӡ���
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
//�����ַ������ڴ���ֻ���һ��

//ָ�����飺���ָ�������
//int* arr[10];����ָ�������
//char *arr2[4];һ���ַ�ָ�������
//char **arr3[5];�����ַ�ָ�������  
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
//			//*��p+i)�ȼ�p[i]
//			printf("%d ",parr[i][j]);//��Ҫע������������������ڴ��в�����������ŵ�
//		}
//		printf("\n");
//	}
//	return 0;
//}
//ָ�����������һά����ģ���ά����


//����ָ�룺��������ָ��--->ָ�������ָ��
//int(*p)[10];p��һ��ָ�룬ָ��һ����10��Ԫ�ص����飬ÿ��Ԫ��������int
//ʹ��֮ǰ�ȸ㶮 ��������&������

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
//������ͨ����ʾ�Ķ�����Ԫ�صĵ�ַ
// ��������������
//1. sizeof(������) //��ʾ��������
//2.&������        
//��ֵ������������Ԫ�صĵ�ַһ�������������ӡ &������+1 ���������������� ����&��������ʾ�������� 

//����ָ�룬��ŵ�������ĵ�ַ-->&��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//p��һ��ָ�룬ָ��һ����10��Ԫ�ص����飬ÿ��Ԫ��������int
//
//	char* arr[5] = { 0 };
//	char* (*pa)[5] = &arr;
//	return 0;
//}


//һ�ֲ��淶����Ť�����÷�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//[]�ڵ����ֲ�����ʡ��
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*((*p)+i));//p��һ��ָ�������ָ�룬����*p���൱����������������������Ԫ�صĵ�ַ
//		//����*p����������Ԫ�صĵ�ַ
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
//			//printf("%d ", *(*(p + i) + j)); //*(p+i)�൱���õ��˵�0�У���1�У��ڶ��е�������������������Ԫ�صĵ�ַ
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
//	print1(arr,3,5);//��ά�������Ԫ�������ĵ�һ�У����Կ���5��int��һά����
//	return 0;
//}

//int (*parr[10])[5]  parr��һ���������ָ�������	���������10��Ԫ�أ�ÿ��Ԫ����һ��ָ�루p109��
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int(*parr[10])[5] = { &arr1,&arr2,&arr3 };
//	//parr3��һ�����飬�����10��Ԫ�أ�ÿ��Ԫ�ص�������int��*����5�����͵�ָ��
//	return 0;
//}


//���������ָ�����
// 
//һά���鴫��
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

//��ά���鴫��
////
//void test(int arr[3][5])
//void test(int arr[][5])
//
//void test(int* arr)//������У���Ϊ���������Ƕ�ά������Ԫ�صĵ�ַ����һ������ĵ�ַ��
//void test(int* arr[5])//������У�arr�Ǹ����飬���������5��Ԫ�أ�ÿ��Ԫ���ǣ�int*��
//void test(int (*arr)[5])//����
//void test(int** arr)//���У���һ�еĵ�ַ����һ��һά����ĵ�ַ���Ų�������ָ����
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//һ��ָ�봫��
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

//����ָ�봫��
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



//����ָ�룺ָ������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p\n",Add);
//	printf("%p\n", &Add);//���԰Ѻ����ĵ�ַ��ӡ����
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
//	
//	//int (*pf)(int, int) = &Add; // int (*pf)(int x, int y) = &Add;
////��������     �������ͣ�������д��д���У�
//	//int ret = (*pf)(2, 3); //*��д��д����
//	int (*pf)(int, int) = Add;
//	int ret =pf(2, 3);   //�������������Ǻ����ĵ�ַ
//	printf("%d\n", ret);
//	return 0;
//}

//����ָ�������һ������������һ������
//void Add(int x,int y)
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


//int main()
//{
//
//	return 0;
//}
