#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//Debugͨ����Ϊ���԰汾���������˵�����Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
//Release��Ϊ�����汾���������ǽ����˸����Ż���ʹ�ó���ʹ����ڴ�С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ��

//һЩ��ݼ�
//f5 �������ԣ���������ֱ��������һ���ϵ㴦
//f9 �����ϵ��ȡ���ϵ�
//f10 ����̣�ͨ����������һ�����̣�һ�����̿�����һ�κ������ã�������һ�����
//f11 ����䣬ÿ�ζ�ִ��һ����䣬�����ݼ����Խ��뵽�����ڲ�
//crtl+f5 ��ʼִ�в����ԣ������ó���ֱ������
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//���Ե�ʱ��鿴����ǰ��Ϣ
//�鿴������ֵ ���Կ�ʼ�� ���ԡ������ڡ������� 
//�����鴫�ε�ʱ�򴫹�ȥ������Ԫ�صĵ�ַ��
//�ں����ڣ����Ӵ��������β���ֻ�ܿ���һ��Ԫ�أ�������롰�β�����num�����ܿ���num��Ԫ�أ�
//
//�鿴�ڴ���Ϣ
//���Կ�ʼ�� ���ԡ������ڡ����ڴ棨�ڴ������������16������ʾ�ģ�

//���ö�ջ
//���Կ�ʼ�� ���ԡ������ڡ������ö�ջ��������ʾ�����ĵ����߼���
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//�鿴�����Ϣ
//���Կ�ʼ�� ���ԡ������ڡ���ת������� ���ߵ��Կ�ʼ�� �Ҽ��հ����� ת������ࣨ������ʾÿ������ִ�еĻ��ָ�
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n",arr);
//
//	return 0;
//}
	
//�鿴�Ĵ�����Ϣ	
//// ���Կ�ʼ�� ���ԡ������ڡ����Ĵ��������֪���Ĵ��������֣�Ҳ�����ڼ��Ӵ��ڿ��Ĵ�����ߵ�ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}



//����ʵ��
//
//1.��1��+2��+3��+...+n��
//���õ����ҵ��������Ĵ���
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	int tem  = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			tem = tem * i;
//			
//		}
//		sum = sum + tem;
//	}
//	printf("%d\n", sum );
//	return 0;
//}

//ͨ������˼�����д���Ϊʲô��������⣨��vs x86�����²鿴������������������ͬ��
//int main()
//{
//	int i = 0;                             //0x00AFF780 
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//0x00AFF750
//
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//ͨ�����Ӵ��� ����arr��15���ĵ�ַ��i�ĵ�ַһģһ��
//�ֲ����ݷ���ջ����arr��i����ջ���ڴ��ʹ��ϰ������ʹ�øߵ�ַ����ʹ�õ͵�ַ
// ���������±����������ַ���ɵ͵��ߵġ�
// i��arr֮�����ʵ��Ŀռ䣬���������Խ��������ǵ���i����������ѭ��

//�����ı�̼���
//ʹ�� assert
//����ʹ��const
//�������õı�д���
//��ӱ�Ҫ��ע��
//������������

//ʾ��
//ģ��ʵ��strcpy
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


//��̳����Ĵ���
//1.�����ʹ��� -----�﷨����
//2.�����ʹ���------�����������ڼ�
//����	LNK1120	1 ���޷��������ⲿ����	
// int main()
//{
//	 int a = 0;
//	 int b = 10;
//	 int c = Add(a, b);
//	return 0;
//}

//3.����ʱ����----���Խ��

//int main()
//{
//
//	return 0;
//}