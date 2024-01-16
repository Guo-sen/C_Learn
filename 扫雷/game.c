#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------------扫雷游戏------------------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ",j);
	}
	printf("\n");

	for (i = 1; i <= row; i++)//最外圈不需要打印，所以行和列都从1开始
	{
		printf("%d ",i);//加一个行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("--------------扫雷游戏------------------\n");

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = Mine_Count;
	//横纵坐标的范围都应该是1~9
	while (count)
	{
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');

}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到非雷的个数
	while (win<row*col-Mine_Count)
	{
		printf("请输入要排查的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标被排查过了，不能重复排查\n");
			}
			else
			{
				//如果是雷
				if (mine[x][y] == '1')
				{
					printf("踩雷了，游戏失败！\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				//如果不是雷
				else
				{
					win++;
					//统计mine数组中 x，y坐标周围有几个雷
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//把整型数字换成字符数字放进去
					DisplayBoard(show, ROW, COL);
				}
			}
		
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - Mine_Count)
	{
		printf("游戏胜利！！！\n");
		DisplayBoard(mine, ROW, COL);

	}
}
