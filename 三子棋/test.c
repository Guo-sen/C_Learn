#include "game.h"


void menu()
{
	printf("****************************************\n");
	printf("************ 1. play *******************\n");
	printf("************ 0. exit *******************\n");
	printf("****************************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	char ret;//接受IsWin的返回值
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL); //判断输赢

		if (ret != 'c')
		{
			break;
		}

		//电脑下棋
		MachineMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'q')
	{
		printf("平局\n");
	}
	else
	{
		printf("玩家赢\n");
	}


}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));//设置随机数的生成起点
	do
	{
		menu();//打印菜单
		printf("请输入你的选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}