#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<memory.h>
#include<assert.h>


// memcpy   void *memcpy( void *dest, const void *src, size_t count );
//   Copies characters between buffers.
//��src��λ�ÿ�ʼ�����count���ֽڵ����ݵ�dest���ڴ�λ��
//�������������\0��ʱ�򲢲���ͣ����
//���src��dest���κε��ص������ƵĽ�����Ǳ�׼δ�����
//#include<memory.h> 
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	//���������ڼ��������ڿ����
//	return 0;
//}
//memcpy���Կ����������͵�����

//ģ��ʵ��
//							����Դͷ������Ҫ��������
//void* my_memcpy(void* dest, const void* sour, size_t num)
//{
//	assert(dest && sour);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)sour;
//		dest = (char*)dest + 1;
//		sour = (char*)sour + 1;
//	}
//	return ret;
//}
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//�������arr1���12345 �����ŵ�34567��λ����ȥ  1 2 1 2 3 4 5 8 9 10
//	my_memcpy(arr1 + 2, arr1, 20);
//	return 0;
//}
//���������������һ������	���κε��ص������Ǹ㲻���ģ����ƵĽ�����Ǳ�׼δ�����(��ȻĳЩ������
// C���Կ⺯��memcpy�ܺ͸㶨������C���Ա�׼��û�й涨����Ҫ������ص�����Ŀ�����
// C���Թ涨memcpyֻ��Ҫ��ɲ��ص��Ŀ����Ϳ��ԣ��ص�����Ŀ�����memmove)
//memcpy���𿽱���������ռ��е�����
//�����Ҫʵ���ص��ڴ�Ŀ�������Ҫʹ��memmove


//memmove  Moves one buffer to another.
//void *memmove( void *dest, const void *src, size_t count );
//The memmove function copies count bytes of characters from src to dest.
// If some regions of the source area and the destination overlap, 
// memmove ensures that the original source bytes in the overlapping region are copied before being overwritten.
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�������arr1���12345 �����ŵ�34567��λ����ȥ  1 2 1 2 3 4 5 8 9 10
//	memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//ģ��ʵ��memmove
// 1 2 3 4 5 6 7 8 9 10
// 1 2 1 2 3 4 5 8 9 10
//
//�Ա������з��֣�����Ӻ���ǰ�������Ȱ�5�ŵ�7���ٰ�4�ŵ�6.....�����Ӻ���ǰ�����������
//���ǲ�����������µĶ��Ӻ���ǰ ����
// 1 2 3 4 5 6 7 8 9 10 ��4 5 6 7 8 �ŵ� 2 3 4 5 6 �Ӻ���ǰ��Ȼ���У���ǰ����ȴ����
// 
// ��ʱ����Ҫ��ǰ��������ʱ����Ҫ�Ӻ���ǰ����
// 
// ����ͼ�۲���ɿ��Եõ�
// ��dest<sour��ʱ���ǰ��󿽱�
// ��dest>sour��ʱ��Ӻ���ǰ����
// ��û���ص������ʱ����һ���ַ����еĿ�������ǰ���󣬴Ӻ���ǰ������
//
//void* my_memmove(void* dest, const void* sour, size_t num)
//{
//	assert(dest && sour);
//	void* ret = dest;
//	if (dest < sour)
//	{
//		//��ǰ����
//		while (num--)
//		{
//			*(char*)dest = *(char*)sour;
//			dest = (char*)dest + 1;
//			sour = (char*)sour + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)sour + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�������arr1���12345 �����ŵ�34567��λ����ȥ  1 2 1 2 3 4 5 8 9 10
//	my_memmove(arr1 + 2 , arr1, 20);
//	//my_memmove(arr1, arr1+2, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//�Ƚ������ڴ����������ͬ����ͬ ʹ��memcmp
//int memcmp( const void *buf1, const void *buf2, size_t count );
//Compare characters in two buffers��The return value indicates the relationship between the buffers.
//The memcmp function compares the first count bytes of buf1 and buf2 and returns a value indicating their relationship.
//ֻҪ���ڴ��бȳ���С�����ܺ�����û������������ֱ�ӷ��أ����ڱȽϺ����

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,5,4 };
//	int ret=memcmp(arr1, arr2, 20);
//
//	if (ret == 0)
//	{
//		printf("��ͬ\n");
//	}
//	else if (ret > 0)
//	{
//		printf("arr1��\n");
//
//	}
//	else
//	{
//		printf("arr2��\n");
//	}
//	return 0;
//}


//memset   Sets buffers to a specified character.
//void *memset( void *dest, int c, size_t count );
//The memset function sets the first count bytes of dest to the character c.
//memset returns the value of dest.

int main()
{
	char arr[] = "hello world";
	//memset(arr, 's',5);
	memset(arr + 6, 's', 5);
	printf("%s\n", arr);
	return 0;
}
//memset ��ʼ�������ֽ�Ϊ��λ���г�ʼ����


//int main()
//{
//
//	return 0;
//}

