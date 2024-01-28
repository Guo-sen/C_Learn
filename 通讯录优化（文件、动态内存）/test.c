#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

//动态版本：
//默认能存放3个人的信息
//如果空间不够了，就增加空间，每次增加2个人的空间信息

#include "Contact.h"


void menu()
{
	printf("**********************************************\n");
	printf("**********************************************\n");
	printf("***** 1. add              2.del         ******\n");
	printf("***** 3. search           4.modify      ******\n");
	printf("***** 5. show             6.sort        ******\n");
	printf("*****            0.exit                 ******\n");
	printf("**********************************************\n");
	printf("**********************************************\n");



}


enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

int main()
{
	int input = 0;
	Contact con;    //通讯录
	InitContact(&con);  //初始化通讯录

	do
	{
		menu();
		printf("请选择：> ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			DestoryContact(&con);
			printf("退出\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
