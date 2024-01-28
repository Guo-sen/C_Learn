#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//把数据从内存上写到文件，这叫输出
//把数据从文件中读到内存，这叫输入


//文件指针：缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”
//每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名字，文件状态以及文件当前的位置等）。这些
//信息是被保存在一个结构体变量中的，该结构体类型是有系统声明的，取名FILE
//每当打开一个文件的时候，系统会根据文件的情况自动创建一个FILE结构的变量，并且填充其中的信息，使用者不必关心细节
//一般都是通过一个FILE的指针来维护这个FILE结构的变量
//FILE* pf //文件指针变量
//通过文件指针变量，能够找到与它关联的文件

//文件操作的流程
//1.打开文件
//2.读/写文件
//3.关闭文件

//文件的打开和关闭
//FILE *fopen( const char *filename, const char *mode );  The fopen function opens the file specified by filename. _
//Each of these functions returns a pointer to the open file. A null pointer value indicates an error. 

//filename：Filename
//mode：Type of access permitted

//The character string mode specifies the type of access requested for the file, as follows:

//"r"：Opens for reading.If the file does not exist or cannot be found, the fopen call fails.
//
//"w"：Opens an empty file for writing.If the given file exists, its contents are destroyed.
//
//"a"：Opens for writing at the end of the file(appending) without removing the EOF marker before writing new data to the file; 
//     creates the file first if it doesn’t exist.
//
//"r+"：Opens for both reading and writing. (The file must exist.)
//
//"w+"：Opens an empty file for both reading and writing.If the given file exists, its contents are destroyed.


//文件的打开和关闭（fopen和fclose）

//
//int main()
//{
//	//打开文件
//	//FILE* pf = fopen("test.txt", "r"); //以相对路径的方法打开文件
//	FILE* pf = fopen("C:\\Users\\郭先森！！！\\Desktop\\test.txt", "r");//以绝对路径的方法打开文件
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//.....
//	// .....
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//读字符和写字符的方法（fgetc和fputc）
//fgetc和fputc适用于所有输入流和输出流
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	char i = 0;
//	for (i = 'a'; i <='z'; i++)
//	{
//	 fputc(i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	
//	//打开文件
//	pf = fopen("test.txt", "r");
//
//	//读文件
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



//写一行数据和读一行数据（fputs和fgets）
// fputs和fgets 适用于所有输出流和输入流
//int main()
//{
//
//	FILE* pf = fopen("test.txt", "w");  //w方式打开文件后，如果写文件，会把文件原来的东西清空，a（追加）的方式打开进行写则不会清空原来的
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//写一行数据
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
//		//perror("fopen") //当有报错的时候这样也可以打印出来报错信息，打印出来的形式是fopen：xxxxxxxx(错误信息)
//		return 1;
//	}
//	//读一行
//	char arr[20] = { 0 };
//	fgets(arr, 5, pf);//实际上读的是4个，会自动在arr里补一个 \0
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//格式化输入数据和格式化输出数据（fscanf，fprintf）
//fscanf，fprintf适用于所有输入流和所有输出流
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "张三",18,59.9f };
//	FILE* pf = fopen("test.txt", "w");
//	if(pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	
//	//写数据
//	fprintf(pf,"%s %d %f", s.arr, s.age, s.score); //和printf参数有点像
//	fclose(pf);
//	pf = NULL;
//
//	//读数据
//	struct S ss = { 0 };
//	pf=fopen("test.txt", "r");
//	fscanf(pf, "%s %d %f", ss.arr, &(ss.age), &(ss.score));//类比scanf的参数形式
//	printf("%s %d %f\n", ss.arr, ss.age, ss.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//任何一个C程序，只要运行起来就会默认打开3个流
//stdin   标准输入流 键盘
//stdout  标准输出流 屏幕
//stderr  标准错误流 屏幕
//以上三个流的类型都是FILE*
//所以在使用scanf、 printf的时候直接使用就搞定了

//但是对于文件的操作，需要先打开文件，获得输入流或者输出流，才能像流中读或者写数据

//像上述提到的适用于所有输出流的函数，也可以向屏幕上打印数据

//int main()
//{
//	char arr[] = "hello world!!!";
//
//	fprintf(stdout, "%s", arr);
//	return 0;
//}





//二进制输入和二进制输出（fread和fwrite）
//适用于文件（只能从文件读或者写文件）

struct S
{
	char arr[10];
	int age;
	float score;
};
int main()
{
	struct S s = { "张三",18,59.9f };
	FILE* pf = fopen("test.txt", "wb");//二进制写打开
	if(pf==NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//二进制写
	//第一个参数是数据来源的地址，第二个参数是每个元素的大小，第三个参数是写几个元素
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
