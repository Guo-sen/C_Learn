#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("******* 1.�ӷ� ************** 2.���� ***************\n");
	printf("******* 3.�˷� ************** 4.���� ***************\n");
	printf("***************** 0.�˳� ***************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������������");
	scanf("%d%d", &x, &y);
	int ret = (*pf)(x, y);
	printf("%d\n",ret);
}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("���������ѡ��:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//				break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//���ϴ��������ʹ�ú���ָ�룬��ֻ�ܰ�calc����������д��switch��case��������˴�������
//��д��switch�ϱ��˳��߼�Ҳ�����⣬�˳�ʱ��������������������




int main()
{
	int input = 0;
	int(*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
	int x = 0, y = 0;

	do
	{
		menu();
		printf("���������ѡ��:> ");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�\n");
			break;
		}
		else if(input>=1&&input<=4)
		{
			printf("������������������");
			scanf("%d %d", &x, &y);
			int ret=pf[input](x, y);
			printf("%d\n", ret);
		}
	} while (input);
	return 0;
}
//ʹ�ú���ָ�����飬���Բ���switch�ķ�ʽ�����ѡ�񣨵����ܺܶ�ʱ��case���úࣩܶ�������˴��룬ʹ�ô�������ά��

