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
		printf("��������µ�����");
		scanf("%d", &guss);
		if (guss > ret)
		{
			printf("�´���\n");
		}
		else if (guss < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
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
		printf("���������ѡ��");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("������\n");
			game();
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
	return 0;
}