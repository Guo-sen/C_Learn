#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//一维数组
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));    //16  sizeof(数组名)，表示整个数组，计算的是整个数组的大小	
//	printf("%d\n", sizeof(a+0));  //8 or 4   计算的是首元素的地址，sizeof内部不是只有数组名，所以a代表首元素的地址，+0还是首元素的地址
//	printf("%d\n", sizeof(*a));   //4         sizeof内部不是只有数组名，所以a代表首元素的地址。*a得到数组的首元素a[0]
//	printf("%d\n", sizeof(a+1));  //8 or 4     sizeof内部不是只有数组名，所以a代表首元素的地址。a+1得到第二个元素的地址
//	printf("%d\n", sizeof(a[1]));  //4
//	printf("%d\n", sizeof(&a));   //8 or 4  整个数组的地址，地址的大小为8字节4字节    
//	printf("%d\n", sizeof(*&a));  //16      &a表示整个数组的地址，对整个数组的地址解引用，得到的是整个数组
//	printf("%d\n", sizeof(&a+1));  //8 or 4     地址的大小(跳过整个数组之后的那个位置的地址)
//	printf("%d\n", sizeof(&a[0]));  //8	or 4	地址的大小
//	printf("%d\n", sizeof(&a[0]+1)); //8 or 4   地址的大小 （第二个元素的地址）
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));    //6  sizeof(数组名)，表示整个数组，计算的是整个数组的大小	
//	printf("%d\n", sizeof(arr+0));  //8 or 4   计算的是首元素的地址，sizeof内部不是只有数组名，所以arr代表首元素的地址，+0还是首元素的地址
//	printf("%d\n", sizeof(*arr));   //1         sizeof内部不是只有数组名，所以arr代表首元素的地址。*arr得到数组的首元素a[0]
//	printf("%d\n", sizeof(arr[1]));  //1    
//	printf("%d\n", sizeof(&arr));  //  8 or 4   地址的大小
//	printf("%d\n", sizeof(&arr+1));  //8 or 4     地址的大小(跳过整个数组之后的那个位置的地址)
//	printf("%d\n", sizeof(&arr[0]+1)); //8 or 4   地址的大小 （第二个元素的地址）
//	printf("%d\n", sizeof(arr[0] + 1));//4        arr【0】是‘a’，加1（整型）会发生整型提升，算出来的大小是一个整型的大小
//	return 0;
//}
//在sizeof内部单独放一个数组名的时候，才表示整个数组

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));    //随机值
//	printf("%d\n", strlen(arr+0));  //随机值
//	//printf("%d\n", strlen(*arr));   //相当于 strlen（'a'）,a的ASCII码值为97 相当于把97作为
//	                                //一个地址传过去strlen（97），97就成了个野指针，程序会崩溃	
//	//printf("%d\n", strlen(arr[1])); //和上一个一样
//	printf("%d\n", strlen(&arr));   //随机值 和第一个第二个意义一样
//	printf("%d\n", strlen(&arr+1)); // 随机值-6  从数组之后的地址，开始往后查找
//	printf("%d\n", strlen(&arr[0]+1)); //随机值-1，从第二个元素的地址开始往后查找
//	return 0;
//}
//虽然printf("%d\n", strlen(&arr+1)); 也存在越界，但是编译器认为这种越界不太危险就不会报错，如果是97这种不太大的地址
//一般情况用户是不能直接访问的，是系统内核专用的区域

//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));    // 7 会把\0也算进去
//	//printf("%d\n", sizeof(arr+0));  //  4/8 首元素的地址，+0还是首元素的地址
//	//printf("%d\n", sizeof(*arr));    // 1 把首元素地址解引用，得到的是首元素
//	//printf("%d\n", sizeof(arr[1]));   // 1
//	//printf("%d\n", sizeof(&arr));     // 4/8
//	//printf("%d\n", sizeof(&arr+1));   //  4/8 指向的是\0后面那个位置的地址
//	//printf("%d\n", sizeof(&arr[0]+1));  //4/8
//
//
//
//	printf("%d\n", strlen(arr));       // 6
//	printf("%d\n", strlen(arr + 0));   //  6
//	//printf("%d\n", strlen(*arr));      //  会崩溃
//	//printf("%d\n", strlen(arr[1]));    //   会崩溃
//	printf("%d\n", strlen(&arr));      // 6
//	printf("%d\n", strlen(&arr + 1));  //  随机值
//	printf("%d\n", strlen(&arr[0] + 1)); // 5
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));         // 4/8,p里存的是一个地址   
//	printf("%d\n", sizeof(p+1));       // 4/8
//	printf("%d\n", sizeof(*p));         //1
//	printf("%d\n", sizeof(p[0]));       //1
//	printf("%d\n", sizeof(&p));        // 4/8    p变量的地址
//	printf("%d\n", sizeof(&p+1));      // 4/8    p变量的地址后的一个地址
//	printf("%d\n", sizeof(&p[0] + 1));  //4/8    b的地址
//	printf("-----------------------------------\n");
//	
//	printf("%d\n", strlen(p));          //6
//	printf("%d\n", strlen(p+1));        //5
//	//printf("%d\n", strlen(*p));         //崩溃
//	//printf("%d\n", strlen(p[0]));       //崩溃
//	printf("%d\n", strlen(&p));       //随机值，把p的地址传过去了，从p的位置开始找，直到找到 \0
//	printf("%d\n", strlen(&p+1));     //随机值，从p后边的位置开始找，和上一个随机值没有关系（因为上一个有可能p内部的四个字节中就有0）
//	printf("%d\n", strlen(&p[0]+1));    //5，传过去的是第二个元素的地址
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));              // 12 * 4 = 48
//	printf("%d\n", sizeof(a[0][0]));       //4
//	printf("%d\n", sizeof(a[0]));          // 16   表示第一行数组的大小，可以理解为第一行数组的数组名为a[0]
//	printf("%d\n", sizeof(a[0]+1));       // 4/8    sizeof内部放的不单单是数组名了，
//										  //        此处的a[0]就是首元素地址 （第一行这个一维数组的首元素地址）&a[0][0],+1为第二个元素的地址
//
//	printf("%d\n", sizeof( *(a[0]+1) ) ); // 4 联系上一行可知，这个含义为把第一行第二个元素传给sizeof
//	printf("%d\n", sizeof(a + 1));       // 4/8  a是二维数组的地址，并没有单独放在sizeof内部，
//										//  也没有取地址，所以表示a的首元素的地址，即第一行的地址，+1把第二行的地址传给了sizeof
//	printf("%d\n", sizeof(*(a + 1)));   // 16
//	printf("%d\n", sizeof(&a[0]+1));    // 4/8 拿到第一行整体的地址，+1跳到第二行 
//	printf("%d\n", sizeof(*(&a[0]+1)) ); // 16 
//	printf("%d\n", sizeof(*a));         //  16  a没有单独放在sizeof内部，所以a表示整个数组的首元素的地址，即第一行的地址
//	printf("%d\n", sizeof(a[3]));        // 16 a[3],可以看成是一个数组名，表示a数组的第4行，单独放在sizeof内部，表示整个第4行
//										// sizeof 通过分析a[3]的类型来确定它的大小，并不会去真的访问第4行，所以不会越界
//	return 0;
//}


//总结
// 1.  sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小（一定是sizeof内部单独放一个数组名）
// 2.  &数组名，这里的数组名表示整个数组，取出的是整个数组的大小
//     除1和2之外，所有的数组名都表示首元素的地址


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);  //&a+1，这里的数组名表示整个数组，+1跳过整个数组，指向5后边那个位置的地址,
//								//&a+1的类型是数组指针int(*)[5],把整个地址强制类型转化成整型的指针，放到ptr里
//	
//	printf("%d  %d\n", *(a + 1), *(ptr - 1)); // （a+1）这里的a表示首元素地址，+1等于第二个元素地址，解引用得到2
//											//ptr现在是个整形指针，-1返回4个字节之前的位置，即5的第一个字节处
//											//解引用得到5
//	return 0;
//}




//以下代码在x86环境下运行
//struct Test
//{
//	int num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}* p=(struct Test*)0x100000;
// *和前边的结构体类型加起来是个结构体指针，用结构体指针定义了一个变量p
//假设p的值为0x100000，如下表达式的值分别为多少
//已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1); //一个结构体+1跳过一个结构体，0x100000（16进制）+20（10进制）-->0x100000+14=0x100014
//	printf("%p\n", (unsigned long)p + 0x1); //把0x100000强制转化成unsigned long，转化后的值为1048576，+1变成1048577 ->0x100001
//											// 0x100000+1-->0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//指针+1跳过无符号整型的大小（4个字节）
//	//0x100000+4=100004
//	return 0;
//}



//x86环境
//int main()
//{
//	int a[4] = { 1,2,3,4 }; 
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//当前环境是小端存储
// 地址由低到高
//      低        -------------->         高
// 01 00 00 00   02 00 00 00   03 00 00 00    04 00 00 00

// (int)a+1,a本来指向的首元素地址（数组第一个元素第一个字节的地址），转
//化为整型后+1，地址在数值上增加了1，指向了第一个元素第二个字节的地址。然后又把它强制类型转化成一个int*，即整型的地址
// 所以 *ptr2 所指向的内存存储的数据为  00 00 00 02 即0x02 00 00 00


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p = a[0];
//	printf("%d\n", *p);
//	return 0;
//}
//这道题有个小坑，二位数组的赋值： int a[3][2]={{0,1},{2,3},{4,5}};
//题中的初始化方式用了逗号表达，a被初始化为 1 3 5 0 0 0 ，首元素为1 





//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//  	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//  p[4][2]-->  *(*(p+4)+2)
//  &p[4][2]--> *(p+4)+2
// p是一个数组指针，它认为它指向一个数组，数组有4和元素，每个元素类型是int
// p+4跳过 4个数组（每个数组4个整型）的大小，也就是跳过16个整型，指向a[3][2]
//   *（p+4）相当于拿到一个有4个元素（从a[3][2]到a[3][5]）的数组名，
//   *(*（p+4）+2)表示找到这个p此时指向的数组的第3个元素的地址，并解引用。
// p[4][2]==a[3][4] a[3][4]和a[4][2],差4个元素
// %p把-4当成了个地址，打印出来。把-4补码以16进制打印出来了
//此题最好画一个图。




//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1)); //拿到了第二行的地址，解引用相当于拿到了第二行
//                                 //（ *(aa+1)--> aa[1]  ）,此时，它的值是第二行首元素的地址
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



//int main()
//{
//	
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//a是一个数组，每个元素的类型是char*，存放的分别是3个字符串的地址
// a是数组名，值是首元素的地址，所以把第一个元素的值（w的地址）赋值给了一个二级指针pa
// pa是一个指针，指向的元素类型是char*，+1跳到下一个char*的位置，也就是数组中第二个元素的位置
//*pa解引用，拿到了第二个元素的地址，%s打印，只需要给出起始位置就可以打印出一个字符串



int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}

//分析：c是一个数组，每个元素类型是char*  存放了四个字符串的地址
//     cp是一个数组，每个元素类型是char** 存放了四个地址，分别是&c[3] &c[2]  &c[1] &c[0]
//     cpp是一个指针 存放的是cp第一个元素的地址

//int main()
//{
//
//
//	return 0;
//}
