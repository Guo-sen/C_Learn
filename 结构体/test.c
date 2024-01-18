#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构体  结构体类型的声明 结构体初始化 结构体成员访问 结构体传参	

//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//基本类型只能描述简单的对象，描述复杂对象就会用到结构体


////描述一个人
//struct Peo 
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
////struct Peo 就是声明的结构体类型 
//
////也可以采用下边的写法
////struct Peo
////{
////	char name[20];
////	char tele[12];
////	char sex[5];
////	int high;
////}p1,p2;
////p1 p2是用这个结构体类型创建的两个变量（全局的结构体变量）
//
//int main()
//{
//	struct Peo p1;//结构体变量创建
//
//	return 0;
//}



//结构体的成员可以是标量，数组，指针，还可以是其他结构体
//struct Peo 
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//struct St 
//{
//	struct Peo p;
//	int num;
//	float f;
//};



struct Peo 
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};
struct St 
{
	struct Peo p;
	int num;
	float f;
};
void print1(struct Peo* sp)
{
	printf("%s %s %s %d\n",sp->name,sp->tele,sp->sex,sp->high);//结构体指针->成员变量
}
void print2(struct St s)
{
	printf("%s %s %s %d %d %.2f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);//结构体变量.成员变量
}
int main()
{
	//结构体变量的初始化(也可以不完全初始化)
	struct Peo p1 = {"张三","18234586431","男",181};
	struct St s = { {"李四","17735870792","男",181},100,3.14 };
	printf("%s %s %s %d\n",p1.name,p1.tele,p1.sex,p1.high);
	printf("%s %s %s %d %d %.2f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
	//结构体传参
	print1(&p1);
	print2(s);//这里形参也是实参的临时拷贝，会造成系统的开销大，会导致性能下降，所以结构体传参的时候尽量传地址
	return 0;
}


//int main()
//{
//
//	return 0;
//}