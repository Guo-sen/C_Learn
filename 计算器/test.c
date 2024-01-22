#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("******* 1.加法 ************** 2.减法 ***************\n");
	printf("******* 3.乘法 ************** 4.除法 ***************\n");
	printf("***************** 0.退出 ***************************\n");
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
	printf("请输入两个操作数：");
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
//		printf("请输入你的选择:> ");
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
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//以上代码如果不使用函数指针，就只能把calc函数的内容写在switch的case里，大大减少了代码冗余
//（写在switch上边退出逻辑也有问题，退出时还得输入两个操作数）




int main()
{
	int input = 0;
	int(*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
	int x = 0, y = 0;

	do
	{
		menu();
		printf("请输入你的选择:> ");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出\n");
			break;
		}
		else if(input>=1&&input<=4)
		{
			printf("请输入两个操作数：");
			scanf("%d %d", &x, &y);
			int ret=pf[input](x, y);
			printf("%d\n", ret);
		}
	} while (input);
	return 0;
}
//使用函数指针数组，可以不用switch的方式来完成选择（当功能很多时，case会变得很多），缩短了代码，使得代码易于维护

