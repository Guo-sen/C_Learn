#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ṹ��  �ṹ�����͵����� �ṹ���ʼ�� �ṹ���Ա���� �ṹ�崫��	

//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//��������ֻ�������򵥵Ķ����������Ӷ���ͻ��õ��ṹ��


////����һ����
//struct Peo 
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
////struct Peo ���������Ľṹ������ 
//
////Ҳ���Բ����±ߵ�д��
////struct Peo
////{
////	char name[20];
////	char tele[12];
////	char sex[5];
////	int high;
////}p1,p2;
////p1 p2��������ṹ�����ʹ���������������ȫ�ֵĽṹ�������
//
//int main()
//{
//	struct Peo p1;//�ṹ���������
//
//	return 0;
//}



//�ṹ��ĳ�Ա�����Ǳ��������飬ָ�룬�������������ṹ��
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
	printf("%s %s %s %d\n",sp->name,sp->tele,sp->sex,sp->high);//�ṹ��ָ��->��Ա����
}
void print2(struct St s)
{
	printf("%s %s %s %d %d %.2f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);//�ṹ�����.��Ա����
}
int main()
{
	//�ṹ������ĳ�ʼ��(Ҳ���Բ���ȫ��ʼ��)
	struct Peo p1 = {"����","18234586431","��",181};
	struct St s = { {"����","17735870792","��",181},100,3.14 };
	printf("%s %s %s %d\n",p1.name,p1.tele,p1.sex,p1.high);
	printf("%s %s %s %d %d %.2f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
	//�ṹ�崫��
	print1(&p1);
	print2(s);//�����β�Ҳ��ʵ�ε���ʱ�����������ϵͳ�Ŀ����󣬻ᵼ�������½������Խṹ�崫�ε�ʱ��������ַ
	return 0;
}


//int main()
//{
//
//	return 0;
//}