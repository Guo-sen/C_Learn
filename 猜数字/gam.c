#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("***********************************\n");
	printf("*********** 1.play ****************\n");
	printf("*********** 0.exit ****************\n");
	printf("***********************************\n");


}

void game()
{
	int ret = rand() % 100+1;
	int guss = 0;

	do
	{
		printf("请输入你猜的数字");
		scanf("%d", &guss);
		if (guss > ret)
		{
			printf("猜大了\n");
		}
		else if (guss < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}

	} while (1);
}
int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));

	do 
	{
		menu();
		printf("请输入你的选择");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("猜数字\n");
			game();
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}