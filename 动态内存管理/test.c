#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>
#include<string.h>
#include<errno.h>

//��ͳ�ڴ�ռ�Ŀ��ٷ�ʽ
//int val=20; char arr[10]={0};
//�����������ٿռ�ķ�ʽ�������ص�
//1.�ռ俪�ٵĴ�С�ǹ̶���
//2.������������ʱ�򣬱���ָ������ĳ��ȣ�������Ҫ���ڴ��ڱ���ʱ����
//���Ƕ��ڿռ�����󣬲��������������������ʱ��������Ҫ�Ŀռ�Ĵ�С�ڳ������е�ʱ�����֪����������ı���ʱ���ٿռ�ķ�ʽ�Ͳ���������


//malloc  Allocates memory blocks.
//void *malloc( size_t size );
//The malloc function allocates a memory block of at least size bytes.
//The block may be larger than size bytes because of space required for alignment and maintenance information.
//malloc returns a void pointer to the allocated space, or NULL if there is insufficient memory available.


//int main()
//{
//	int arr[10] = { 0 };//����40���ֽڵĿռ������������
//
//	// ��̬�ڴ濪��
//	int*p=(int*) malloc(10);//malloc�ڿ��ٿռ���ɺ󣬻᷵��һ����ַ��������ɵ��ڴ�����ʼ��ַ��
//	//int* p = (int*)malloc(INT_MAX);//���ڴ治����ʱ��x86������
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ���ڴ�
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�
//
//	return 0;
//}
//��ʹ��mallocʱ��malloc�ķ���ֵһ��Ҫ����һ����Ч�Ե��ж�
//�ֲ���������ʽ����һ�����ջ��
//malloc calloc realloc free�������Ŀռ䶼�ڶ���

//Ҫ�����ͷ��ڴ�ĺ�ϰ��
int main()
{

	// ��̬�ڴ濪��
	int*p=(int*) malloc(40);//malloc�ڿ��ٿռ���ɺ󣬻᷵��һ����ַ��������ɵ��ڴ�����ʼ��ַ��
	//int* p = (int*)malloc(INT_MAX);//���ڴ治����ʱ��x86������
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//ʹ���ڴ�
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);//��p��ָ����ǿ��ڴ�ռ��ͷŵ�����������ϵͳ��
	p = NULL;//�ͷ����Ժ��ǿ��ڴ�ռ�Ͳ����Լ����ˣ��Ѿ��ǲ���ϵͳ���ˣ�Ϊ�˱�������������Լ��Ŀռ䣬��ʱ��p�óɿ�ָ�룬
	return 0;
}

