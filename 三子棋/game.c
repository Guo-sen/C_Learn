#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
//   

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//打印数组
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//打印数组
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			//最后一列不打印 ‘|’
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印分割行，最后一行不需要打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("请输入你要下的坐标：");
		int i = 0;
		int j = 0;
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col && board[i-1][j-1] == ' ')
		{
			board[i-1][j-1] = '*';
			break;
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}

}
void MachineMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋：\n");

	int i = 0;
	int j = 0;

	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}

//满了返回1；不满返回0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


//判断行，列 对角线，写死了，只能判断3行3列，可以尝试改造成 动态
char IsWin(char board[ROW][COL], int row, int col)//判断输赢
{
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	//判断列
	int j = 0;
	for (j=0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	//没人赢 接下来判断是否平局
	int ret=IsFull(board,row,col);
	if (ret == 1)
	{
		return 'q';
	}

	//游戏继续
	return 'c';
	
}
