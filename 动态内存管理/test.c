#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
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


//size�����0�����Ǳ�׼δ����ģ���������£�malloc����Ϊȡ���ڱ�����



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
//int main()
//{
//
//	// ��̬�ڴ濪��
//	int*p=(int*) malloc(40);//malloc�ڿ��ٿռ���ɺ󣬻᷵��һ����ַ��������ɵ��ڴ�����ʼ��ַ��
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
//	free(p);//��p��ָ����ǿ��ڴ�ռ��ͷŵ�����������ϵͳ��
//	p = NULL;//�ͷ����Ժ��ǿ��ڴ�ռ�Ͳ����Լ����ˣ��Ѿ��ǲ���ϵͳ���ˣ�Ϊ�˱�������������Լ��Ŀռ䣬��ʱ��p�óɿ�ָ�룬
//	return 0;
//}
//���freeָ����ڴ�ռ䲻�Ƕ�̬���ٵģ���ôfree��������Ϊ��δ�����
//�����free�����ǿ�ָ�룬freeʲô������



//calloc   void *calloc( size_t num, size_t size );
//Allocates an array in memory with elements initialized to 0  ����һ��ռ䣬��ÿ���ֽڳ�ʼ��Ϊ0
//calloc returns a pointer to the allocated space

//num��Number of elements                  Ԫ�ظ���
//size��Length in bytes of each element   ÿ��Ԫ�ص��ֽ���
// ���ٵ��ܿռ��ֽ��� == num * size

//
//int main()
//{
//
//	int* p = (int*)calloc(10, 4);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//��ʱ�����Ƿ��ֹ�ȥ����Ŀռ�̫С����ʱ���ֻ���ù�ȥ����Ŀռ�̫���ˣ���Ϊ�˺����ʹ���ڴ棬����һ������ڴ�
//�Ĵ�С������ĵ�������realloc�Ϳ��������Զ�̬�����ڴ�Ĵ�С�ĵ���
// 
//realloc  void *realloc( void *memblock, size_t size );
//Reallocate memory blocks.
//realloc returns a void pointer to the reallocated (and possibly moved) memory block.
//The return value is NULL if the size is zero and the buffer argument is not NULL, or 
//if there is not enough available memory to expand the block to the given size. 

//memblock��Pointer to previously allocated memory block   Ҫ�������ڴ��
//size��New size in bytes                                   ����֮����µĴ�С
//����ֵΪ����֮����ڴ���ʼλ��

//�ú����ڵ���ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ�
//realloc�����ڴ�ռ�����������
//1.ԭ�ռ�����㹻��Ŀռ�,  ֱ���ں��׷��
//2.ԭ�ռ�֮��û���㹻��Ŀռ䣬ֱ����һ���Ŀռ䣨ԭ����+�¼ӵģ����ɵĿռ�ᱻ�ͷŵ���realloc�Զ��ͷţ�

//int main()
//{
//	int*p=(int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//����
//	//p=(int*)realloc(p, 80); //����ط���p�����Ǻ�Σ�յģ��������ʧ�ܣ�p�ͳ��˿�ָ�루ԭ���Ŀռ�Ҳ�Ҳ����ˣ�
//	int* p2 = (int*)realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i <20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	p2 = NULL;
//	return 0;
//}

//int main()
//{
//	realloc(NULL, 40);//�ȼ���malloc��40��
//	return 0;
//}



//һЩ�����Ķ�̬�ڴ�Ĵ���

//1.�Կ�ָ��Ľ����ô���
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	*p = 20;
//	return 0;
//}
//  ��ȥ��֤�ռ���û�гɹ����٣�ֱ��ȥ�����ã������� 


//2.�Զ�̬���ٿռ��Խ�����

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//����
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + 1) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//���ϴ������Խ��


//3.�ԷǶ�̬�����ڴ��free
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	free(pa);
//	pa = NULL;
//	return 0;
//}

//4.ʹ��free�ͷ�ͬһ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		 p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.��ͬһ���ڴ�ռ����ͷ�

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	free(p);
//
//	//....
//	free(p);
//	return 0;
//}

//6.�Զ�̬�ڴ濪�ٵĿռ������ͷţ��ڴ�й¶��

//void test()
//{
//	int* p = (int*)malloc(400);
//	//.....
//	//.....
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//	{
//		return;
//	}
//
//	//.......
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//int* test()
//{
//	int* p = (int*)malloc(400);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return p;
//	}
//	//.....
//	//.....
//	return p;
//
//
//}
//int main()
//{
//	int*ret=test();
//	//......
//	// ......
//	//�����ͷ���
//
//	return 0;
//}





//��������ı�����
//

// ˼������test���������ʲô���
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

//str��ֵΪNULL������ȥ��Ҳ��NULL
//����GetMemort������pҲ�������ˣ������ڴ�й¶
//str�ǿ�ָ�룬�����õ�ʱ������

//����
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

//��һ�ָ�����ʽ��
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

//˼�����д���Ĵ�ӡ���
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

//��GetMemory������ʱ��p�ǿ�ռ�ͻ�������ϵͳ�ˣ��Ͳ����ڵ�ǰ�����ˡ�strָ����ǿ�ռ���ʲô�Ͳ�֪���ˣ��п���δ������
//Ҳ�п��ܻᱻ���ǡ�str����Ұָ����


//˼��test�������еĽ��
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
//���ϴ�����ڵ��������û��free


//˼�����´�������н��

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

//str��ָ��Ŀռ��Ѿ������Լ����ˣ�Ұָ������⣬�γ��˷Ƿ�����





//��������

//
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps =  (struct	S*)malloc(sizeof(struct S));//��һ�������������ڶ��ϣ�Ϊ�˸��ϱߴﵽһ����Ч�������ڶ��ϣ������ԶԽṹ��malloc
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	//����arrָ��һ��ռ�
//	ps->arr = malloc(40);
//	if (ps->arr == NULL)
//	{
//		//.....
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//����
//	int* ptr = (int*)realloc(ps->arr,80);
//	if (ptr == NULL)
//	{
//		//..
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//		ptr = NULL;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//�ͷ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//����������������������Ĺ��ܣ�ͬʱ�����malloc�Ĵ������������̫���ڴ���Ƭ�������ڴ������ʣ�ͬʱ�����ͷ��ڴ�


//C99�У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա


//typedef struct st_type 
//{
//	int i;
//	int a[0];   //���������Ա
//}type_a;
////��Щ�������ᱨ���޷�������Ըĳɣ�
//typedef struct st_type
//{
//	int i;
//	int a[];   //���������Ա
//}type_a;

//����������ص�
//�ṹ�е����������Աǰ�����������һ��������Ա
//sizeof���ص����ֽṹ��С����������������ڴ�
//������������Ľṹ��malloc���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С

//
struct S
{
	int n;
	int arr[];
};
int main()
{
	//struct S s;//������ֱ�Ӵ�����ʱ��s�Ĵ�С����4���ֽڣ�ֻ�ܴ�n

	//���������ʹ��
	struct S* ps=(struct S*)malloc(sizeof(struct S) + 40);
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	struct S* ptr=(struct S*)realloc(ps, sizeof(struct S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	//.....
	//�ͷ�
	free(ps);
	ps = NULL;
	return 0;
}
//����������,������realloc������С�ռ�





//int main()
//{
//
//
//	return 0;
//}

