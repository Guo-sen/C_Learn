#include "game.h"

//��ʼ������
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

//��ӡ����
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
//   

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//��ӡ����
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			//���һ�в���ӡ ��|��
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ��У����һ�в���Ҫ��ӡ�ָ���
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

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("��������Ҫ�µ����꣺");
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
			printf("���������Ƿ�������������\n");
		}
	}

}
void MachineMove(char board[ROW][COL], int row, int col)
{
	printf("�������壺\n");

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

//���˷���1����������0
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


//�ж��У��� �Խ��ߣ�д���ˣ�ֻ���ж�3��3�У����Գ��Ը���� ��̬
char IsWin(char board[ROW][COL], int row, int col)//�ж���Ӯ
{
	//�ж���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	//�ж���
	int j = 0;
	for (j=0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	//û��Ӯ �������ж��Ƿ�ƽ��
	int ret=IsFull(board,row,col);
	if (ret == 1)
	{
		return 'q';
	}

	//��Ϸ����
	return 'c';
	
}
