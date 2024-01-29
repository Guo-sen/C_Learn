#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
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

//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "����",18,59.9f };
//	FILE* pf = fopen("test.txt", "wb");//������д��
//	if(pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//������д
//	//��һ��������������Դ�ĵ�ַ���ڶ���������ÿ��Ԫ�صĴ�С��������������д����Ԫ��
//	fwrite(&s,sizeof(struct S),1,pf);
//	fclose(pf);
//	pf = NULL;
//	
//	struct S ss = { 0 };
//	pf = fopen("test.txt", "rb");
//	fread(&ss, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", ss.arr, ss.age, ss.score);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//�Ա�һ�麯��
//scanf/fscanf/sscanf
//printf/fprintf/sprintf


//scanf ����Ա�׼����ĸ�ʽ��������䣬printf����Ա�׼����ĸ�ʽ��������
//fscanf ����������������ĸ�ʽ��������䣬fprintf���������������ĸ�ʽ��������
// 



//sscanf int sscanf( const char *buffer, const char *format [, argument ] ... );Read formatted data from a string.���ַ����ж���ʽ������
//Each of these functions returns the number of fields successfully converted and assigned;
//the return value does not include fields that were read but not assigned. 
//A return value of 0 indicates that no fields were assigned.
//The return value is EOF for an error or if the end of the string is reached before the first conversion.

//sprintf   int sprintf( char *buffer, const char *format [, argument] ... );Write formatted data to a string.
//sprintf returns the number of bytes stored in buffer, not counting the terminating null character. 
//swprintf returns the number of wide characters stored in buffer, not counting the terminating null wide character.


//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "����",50,50.9f };
//	struct S ss = { 0 };
//	char buf[100] = { 0 };
//
//	//��s�и�ʽ�������ݷŵ�buf��
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//	printf("buf= %s\n", buf);	//buf��ġ����� 50 50.9f�� �Ѿ��Ǹ��ַ�����
//
//	//��buf�е����ݷŵ� ss��
//	sscanf(buf, "%s %d %f", ss.arr, &(ss.age), &(ss.score));
//	printf("ss = %s %d %f\n", ss.arr, ss.age, ss.score);
//
//
//	return 0;
//}
//��������������sprintf��sscanf������κ�������Ե����ַ�����
//Ӧ�ó��������л��ͷ����л�



//�ļ��������д

//fseek ���ļ�ָ�붨λ��ƫ������
//ftell  �����ļ�ָ���������ʼλ�õ�ƫ����
//rewind ���ļ�ָ��ص��ļ�����ʼλ��
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	//int ch = fgetc(pf); //�տ�ʼָ���һ���ַ���������󣬻�ָ��ڶ����ַ�
//	//printf("%c ", ch);
//	//ch = fgetc(pf);
//	//printf("%c ", ch);
//
//	//��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_SET); //���ļ�ָ�붨λ��ƫ������
//	int ch = fgetc(pf);
//	printf("%c ", ch);
//	printf("%d\n", ftell(pf));
//
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	printf("%d\n", ftell(pf));
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//
//	fclose(pf);
//	pf = NULL;
//	
//
//	return 0;
//}


//�ı��ļ��Ͷ������ļ�
//�������ڴ����Զ����Ƶ���ʽ�洢���������ת�����������棬���Ƕ������ļ�
//���Ҫ�����������ASCII�����ʽ�洢������Ҫ�ڴ洢ǰת����ASCII�ַ�����ʽ�洢���ļ������ı��ļ�

//һ���������ڴ�Ĵ洢
//�ַ�һ����ASCII��ʽ�洢����ֵ�����ݼȿ�����ASCII��ʽ�洢��Ҳ�����ö�������ʽ�洢
//������10000 ��ASCII��ʽ��������̣�ռ��5���ֽڣ�ÿ���ַ�һ���ֽڣ������ö������������ֻռ��4���ֽ�
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf); //�����Ƶ���ʽд���ļ���
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//�ļ���ȡ�������ж�
// 
// �����ʹ��feof�������кö�ʹ��feof�Ĵ������ӣ�
// ferror������feof���ʹ��
//���ļ���ȡ�����У�������feof�����ķ���ֱֵ���ж��ļ���ȡ�Ƿ����
//����Ӧ���� ���ļ���ȡ������ʱ���ж����ļ���ȡʧ�ܽ��������������ļ�β����
// 
//
//�ļ���ȡ�������ж�
//1.�ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF��fgetc������NULL��fgets��

//2.�������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���
//�磺fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���


//�ļ�������
//ANSIC��׼���á������ļ�ϵͳ�����������ļ�����ν�����ļ�ϵͳ��ָϵͳ�Զ������ڴ���Ϊ������ÿһ������ʹ�õ��ļ�����һ�飨�ļ���������
//���ڴ������������ݻ����͵��ڴ��еĻ�������װ���������������һ���͵������ϡ�����Ӵ����������������ݣ���Ӵ����ļ��ж�ȡ���ݣ�����
//���ڴ滺��������������������Ȼ���ٴӻ���������ؽ������͵���������������������ȣ����������Ĵ�С����C����ϵͳ����

//���´������֤���л������Ĵ���
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ��ַ����������������
	printf("˯��10��\n"); //��ʱ���ļ��ᷢ���ļ�ʲô��ûд��
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf); //ˢ�»�����ʱ�����ܽ�������������д���ļ��ϣ����̣�
	//ע����ĳЩ�汾���߰汾����vs�У�fflush����ʹ��
	Sleep(10000);

	fclose(pf);//ע��fclose�ڹر��ļ�ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}
//����C�����ڲ����ļ���ʱ����Ҫ��ˢ�»������������ļ�����������ʱ��ر��ļ���������������ܻᵼ�����ݶ�ʧ	

//int main()
//{
//
//
//	return 0;
//}

