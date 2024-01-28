#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//�����ݴ��ڴ���д���ļ���������
//�����ݴ��ļ��ж����ڴ棬�������


//�ļ�ָ�룺�����ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ�롱����ơ��ļ�ָ�롱
//ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ������֣��ļ�״̬�Լ��ļ���ǰ��λ�õȣ�����Щ
//��Ϣ�Ǳ�������һ���ṹ������еģ��ýṹ����������ϵͳ�����ģ�ȡ��FILE
//ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı���������������е���Ϣ��ʹ���߲��ع���ϸ��
//һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE�ṹ�ı���
//FILE* pf //�ļ�ָ�����
//ͨ���ļ�ָ��������ܹ��ҵ������������ļ�

//�ļ�����������
//1.���ļ�
//2.��/д�ļ�
//3.�ر��ļ�

//�ļ��Ĵ򿪺͹ر�
//FILE *fopen( const char *filename, const char *mode );  The fopen function opens the file specified by filename. _
//Each of these functions returns a pointer to the open file. A null pointer value indicates an error. 

//filename��Filename
//mode��Type of access permitted

//The character string mode specifies the type of access requested for the file, as follows:

//"r"��Opens for reading.If the file does not exist or cannot be found, the fopen call fails.
//
//"w"��Opens an empty file for writing.If the given file exists, its contents are destroyed.
//
//"a"��Opens for writing at the end of the file(appending) without removing the EOF marker before writing new data to the file; 
//     creates the file first if it doesn��t exist.
//
//"r+"��Opens for both reading and writing. (The file must exist.)
//
//"w+"��Opens an empty file for both reading and writing.If the given file exists, its contents are destroyed.


//�ļ��Ĵ򿪺͹رգ�fopen��fclose��

//
//int main()
//{
//	//���ļ�
//	//FILE* pf = fopen("test.txt", "r"); //�����·���ķ������ļ�
//	FILE* pf = fopen("C:\\Users\\����ɭ������\\Desktop\\test.txt", "r");//�Ծ���·���ķ������ļ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//.....
//	// .....
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//���ַ���д�ַ��ķ�����fgetc��fputc��
//fgetc��fputc�����������������������
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д�ļ�
//	char i = 0;
//	for (i = 'a'; i <='z'; i++)
//	{
//	 fputc(i, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	
//	//���ļ�
//	pf = fopen("test.txt", "r");
//
//	//���ļ�
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);*/
//	int ch = 0;
//	while((ch=fgetc(pf))!=EOF)
//	{ 
//	   printf("%c ", ch);
//	}
//	return 0;
//}



//дһ�����ݺͶ�һ�����ݣ�fputs��fgets��
// fputs��fgets �����������������������
//int main()
//{
//
//	FILE* pf = fopen("test.txt", "w");  //w��ʽ���ļ������д�ļ�������ļ�ԭ���Ķ�����գ�a��׷�ӣ��ķ�ʽ�򿪽���д�򲻻����ԭ����
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//дһ������
//	fputs("hello world!!!\n", pf);
//	fputs("hello world!!!\n", pf);
//	fclose(pf);
//    pf = NULL;
//	
//
//    pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//perror("fopen") //���б����ʱ������Ҳ���Դ�ӡ����������Ϣ����ӡ��������ʽ��fopen��xxxxxxxx(������Ϣ)
//		return 1;
//	}
//	//��һ��
//	char arr[20] = { 0 };
//	fgets(arr, 5, pf);//ʵ���϶�����4�������Զ���arr�ﲹһ�� \0
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//��ʽ���������ݺ͸�ʽ��������ݣ�fscanf��fprintf��
//fscanf��fprintf���������������������������
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "����",18,59.9f };
//	FILE* pf = fopen("test.txt", "w");
//	if(pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	//д����
//	fprintf(pf,"%s %d %f", s.arr, s.age, s.score); //��printf�����е���
//	fclose(pf);
//	pf = NULL;
//
//	//������
//	struct S ss = { 0 };
//	pf=fopen("test.txt", "r");
//	fscanf(pf, "%s %d %f", ss.arr, &(ss.age), &(ss.score));//���scanf�Ĳ�����ʽ
//	printf("%s %d %f\n", ss.arr, ss.age, ss.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�κ�һ��C����ֻҪ���������ͻ�Ĭ�ϴ�3����
//stdin   ��׼������ ����
//stdout  ��׼����� ��Ļ
//stderr  ��׼������ ��Ļ
//���������������Ͷ���FILE*
//������ʹ��scanf�� printf��ʱ��ֱ��ʹ�þ͸㶨��

//���Ƕ����ļ��Ĳ�������Ҫ�ȴ��ļ��������������������������������ж�����д����

//�������ᵽ������������������ĺ�����Ҳ��������Ļ�ϴ�ӡ����

//int main()
//{
//	char arr[] = "hello world!!!";
//
//	fprintf(stdout, "%s", arr);
//	return 0;
//}





//����������Ͷ����������fread��fwrite��
//�������ļ���ֻ�ܴ��ļ�������д�ļ���

struct S
{
	char arr[10];
	int age;
	float score;
};
int main()
{
	struct S s = { "����",18,59.9f };
	FILE* pf = fopen("test.txt", "wb");//������д��
	if(pf==NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//������д
	//��һ��������������Դ�ĵ�ַ���ڶ���������ÿ��Ԫ�صĴ�С��������������д����Ԫ��
	fwrite(&s,sizeof(struct S),1,pf);
	fclose(pf);
	pf = NULL;
	
	struct S ss = { 0 };
	pf = fopen("test.txt", "rb");
	fread(&ss, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", ss.arr, ss.age, ss.score);
	fclose(pf);
	pf = NULL;

	return 0;
}
