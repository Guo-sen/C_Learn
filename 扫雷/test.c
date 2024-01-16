#include"game.h"
void menu()
{
	printf("*********************************************\n");
	printf("************** 1. play **********************\n");
	printf("************** 0. exit **********************\n");
	printf("*********************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出来的雷的信息
	//初始化数组的内容
	//mine在没有布置雷的时候都是 '0'
	InitBoard(mine, ROWS, COLS,'0');

	//show在没有排查的时候都是 '*'
	InitBoard(show, ROWS, COLS,'*');

	//设置雷
	SetMine(mine,ROW,COL);//设置雷的时候，最外圈不设置，所以传参的时候传ROW和COL
	//DisplayBoard(mine, ROW, COL);//打印的时候最外边那一圈不需要打印，所以传参的时候传ROW和COL
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);


}
int main()
{
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("请输入你的选择 ->: ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择有误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}