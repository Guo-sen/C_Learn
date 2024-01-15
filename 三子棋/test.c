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
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	char ret;//����IsWin�ķ���ֵ
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL); //�ж���Ӯ

		if (ret != 'c')
		{
			break;
		}

		//��������
		MachineMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'q')
	{
		printf("ƽ��\n");
	}
	else
	{
		printf("���Ӯ\n");
	}


}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));//������������������
	do
	{
		menu();//��ӡ�˵�
		printf("���������ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}