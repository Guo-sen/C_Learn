#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<memory.h> 

//C�����У����ַ����ַ����Ĵ����Ǻ�Ƶ���ģ�����C���Ա�����û���ַ������͵ģ��ַ���ͨ�����ڳ����ַ����л����ַ�������
// �ַ���������������Щ���������޸ĵ��ַ�������
// 
// 
// strlen
//  size_t strlen(const char* str)
//�ַ�����'\0'��Ϊ������־��strlen�������ص������ַ����С�\0��ǰ����ֵ��ַ�������������'\0'��
//����ָ����ַ�������Ҫ��'\0'����
//ע�ⷵ��ֵ������Ϊ size_t�����޷��ŵ�      typedef unsigned int     size_t;

//int main()
//{
//	//ע�ⷵ��ֵ������Ϊ size_t�����޷��ŵ�      typedef unsigned int     size_t;
//	if (strlen("abc") - strlen("abcdefg") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//ģ��ʵ��
//#include<assert.h>
////�������ķ���
//size_t my_strlen (const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len=my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//����ָ��-ָ��ķ������ݹ�ķ������Ժ�Ӧ���Լ�ʵ��



//strcpy
//char* strcpy (char* destnation,const char* source)
//Դ�ַ���������\0������������ʱ����Դ�ַ����е�\0������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ������޸ģ������޸ĳ����ַ����������


//char* my_strcpy(char* destination, const char* source)
//{
//	assert(destination != NULL&&source!=NULL);
//	char* ret = destination;//��������ֵҪ����Ŀ��ռ����ʼ��ַ������Ŀ��ռ䱻����
//	/*while (*source!='\0')
//	{
//		*destination++ = *source++;
//		
//	}
//	*destination = *source;*/
//	while (*destination++ = *source++)  //��*sourceΪ\0��ʱ�򣬰�����ֵ��destinatioin���������ʽ�Ľ��Ϊ\0����0��ѭ��ֹͣ
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char name[20] = { 0 };
//	my_strcpy(name, "zhangsan");
//	printf("%s\n",name);
//	return 0;
//}



//strcat  �ַ���׷��
//char *strcat( char *strDestination, const char *strSource );
//Դ�ַ���������\0�������ὫԴ�ַ�����\0������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܷ���Դ�ַ�����Ŀ��ռ����ɱ�
//char* my_strcat(char* dest, const char* sour)
//{
//	char* ret = dest;
//	assert(dest && sour);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
// 	while (*dest++ = *sour++)
//	{
//		;
//	}
//	return ret;
//}
////������Ҫ�Լ����Լ�׷��
////my_strcat(arr1,arr1)
////��ʧ�ܣ�����ĳЩ�����£�vs2022 x64�����������������ܳɹ�
//int main()
//{
//	char arr1[20] = "hello ";
//	//���ں��׷��һ��world
//	//strcat(arr1, "world");
//	my_strcat(arr1, "world");
//	
//
//	printf("%s\n", arr1);
//	return 0;
//}





//strcmp  �����Ƚ������ַ����Ƿ����
//int strcmp( const char *string1, const char *string2 ��

//int my_strcmpy (const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//
//}

//�Ż�
//int my_strcmpy(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1-*str2);	
//}
//
//int main()
//{
//	int ret = my_strcmpy("abcd","abcde");
//	if (ret == 0)
//	{
//		printf("�����ַ�����ͬ\n");
//	}
//	else
//	{
//		printf("�����ַ�������ͬ\n");
//
//	}
//
//	return 0;
//}

//strcpy strcat strcmp���ǳ��Ȳ������Ƶ��ַ���������ȥ��#define_CRT_SECURE_NO_WARNINGS��ֱ�ӱ�����Щ��������ȫ��
//�����һЩ���⣬���Ŀ��ռ䲻���󣬻����Խ����ʣ���������

//����c�������ṩ��һЩ���������Ƶĺ���
// strncpy  strncat   strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hellow world";
//	//strcpy(arr1,arr2);
//
//	//����ֻ�뿽��ǰ����ַ�
//	strncpy(arr1,arr2,3); //char * strncpy ( char *strDest, const char *strSource, size_t count );
//	//���arr2ֻ��2���ַ���ӲҪ��strncpy����5���ֽڣ���ô�����������ַ��󣬺��������Զ����ų�'\0'
//
//	printf("%s\n",arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	//׷����ɺ���Զ���ĩβ��һ�� '\0',���arr2ֻ��2���ַ���ӲҪstrncat׷��5��������׷�����������ַ���
//	//									���Զ���1��\0Ȼ�������
//	printf("%s\n", arr1);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdefghijk";
//	if (strncmp(arr1, arr2, 3) == 0)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//strstr
// �����Ӵ���һ����������һ���ַ����У�������һ���ַ���
// char *strstr( const char *string, const char *strCharSet );
//���ص���Ҫ���ҵ��Ǹ��ַ����ĵ�ַ���Ҳ����Ļ������ؿ�ָ��

//int main()
//{
//	char email[]="2410914566@qq.com";
//
//	char* ret = strstr(email, "qq");
//	printf("%s\n",ret);
//	return 0;
//}

//ģ��ʵ��

//���1��abcdef �� bcd ��һ��ƥ��Ϳ����ҵ���
//���2��abbcde �� bbc �����ƥ��ſ����ҵ���

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* tmp = str1;
//
//	while (*tmp)
//	{
//		s1 = tmp;
//		s2 = str2;
//
//		while (*s1 != '\0'&& *s2 !='\0' && * s1 == *s2)
//		{
//			s1++, s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*) tmp;
//		}
//		tmp++;
//	}
//	return NULL;
//}
////�����㷨Ч�ʲ�̫�ߣ�����ѧϰKMP�㷨
////KMP�㷨�������ַ���Ч�ʸߣ�����ʵ���Ѷȴ�
//int main()
//{
//	char arr1[] = "abbbbcdef";
//	char* ret = my_strstr(arr1, "bbc");
//	printf("%s\n", ret);
//	return 0;
//}
//






//һ���ֵܹĺ���
//strtok  ���������и��ַ���                    ��p.124��
// char *strtok( char *strToken, const char *strDelimit )
//
// ��һ�������Ǳ��и���ַ�����������0�����߶���ָ�����
// �ڶ��������Ǹ��ַ����������������ָ������ַ�����
// 
//	strtok���ҵ�strToken�е���һ����ǣ���������'\0'��β������һ��ָ�������ǵ�ָ�루���ص���\0�����ַ����ĵ�ַ������strtok������ı䱻�������ַ���
// ������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ģ�
//
//strtok��һ��������Ϊ��ָ���ʱ��strtok���������ҵ�str�еĵ�һ����ǣ�strtok�����ᱣ�������ַ����е�λ��
//strtok������һ������Ϊ��ָ���ʱ�򣬺�������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//����ַ����в����ڸ���ı�ǣ��򷵻ؿ�ָ��

//int main()
//{
//	const char* sep = "@.";
//	char arr[] = "2410914566@qq.com";
//	char cp[30] = { 0 };//"2410914566@qq.com";
//	strcpy(cp, arr);
//
//	
//	//char* ret = strtok(cp, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); 
//	   	ret != NULL;
//		ret = strtok(NULL, sep))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//strtok�����м��书��
//����֮ǰ��static�ؼ��֣����εı������˺����󣬱����������٣�




//strerror
//���ش������Ӧ�Ĵ�����Ϣ��c���ԵĿ⺯����ִ��ʧ�ܵ�ʱ�򣬶��᷵��һ�������룩
//#include<errno.h>
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//
//	FILE* pf = fopen("test.txt", "r");
//	//����򿪳ɹ����᷵��һ����Ч�ĵ�ַ�������ʧ�ܣ��᷵��һ����ָ��,ͬʱ������һ��������
//	//��¼��errno��������У����������C�������õ�һ��ȫ�ֵĴ������ŵı���
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	return 0;
//}




//�ַ����ຯ��
//iscntrl �κο����ַ�
//isspace �հ��ַ����ո񡢻��С���ҳ���س����Ʊ������ֱ�Ʊ��
//isdigit ʮ��������0~9
//isxdigit 16�������֣���������10�������֣�Сд��ĸa~f����д��ĸA~F
//islower Сд��ĸa~z
//isupper ��д��ĸA~Z
//isalpha ��ĸa~z����A~Z
//isalnum ��ĸ�������֣�a~z��A~Z��0~9
//ispunct �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
//isgraph �κ�ͼ���ַ�
//isprint �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�

//#include<ctype.h>
//int main()
//{
//	//isspace   int isspace( int c )	
//	//isspace returns a non-zero value if c is a white-space character  ����ǿհ��ַ������ط�0
//	//���ǿհף�����0
//
//	int ret = isspace('\n');
//	printf("ret=%d\n", ret);
//
//	 ret = isspace('w');
//	printf("ret=%d\n", ret);
//	return 0;
//}







//�ַ�ת������
//tolower   תСд
//toupper   ת��д

//#include<ctype.h>
//int main()
//{
//	printf("%c\n", tolower('R'));
//	printf("%c\n", tolower('@'));//�������ȥ�Ĳ��Ǵ�д��ĸ������
//	return 0;
//}








//�Ա�������һЩ����ѧϰһЩ�ڴ溯��


//int main()
//{
//
//	return 0;
//}
