#define _CRT_SECURE_NO_WARNINGS
//ʵ��һ��ͨѶ¼
//�˵���Ϣ��
// ���֡����䡢�Ա𡢵绰����ַ
//1.���100���˵���Ϣ
//2.������ϵ��
//3.ɾ��ָ����ϵ��
//4.������ϵ��
//5.�޸���ϵ��
//6.����
//7.��ʾ��ϵ��
#include "contact.h"


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
	Contact con;    //ͨѶ¼
	InitContact(&con);  //��ʼ��ͨѶ¼
	
	do
	{
		menu();
		printf("��ѡ��> ");
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
			printf("�˳�\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
	return 0;
}