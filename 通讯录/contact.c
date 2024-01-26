#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"



void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->data,0,sizeof(pc->data));
}


void AddContact(Contact* pc)
{
	if (pc->count < MAX)
	{
	 printf("请输入姓名：");
	 scanf("%s",pc->data[pc->count].name); //name是个数组名，本来就是个地址，所以不需要取地址
	 printf("请输入年龄：");
	 scanf("%d", &(pc->data[pc->count].age)); //年龄是个int，所以需要取地址
	 printf("请输入性别：");
	 scanf("%s", pc->data[pc->count].sex);
	 printf("请输入电话：");
	 scanf("%s", pc->data[pc->count].tele);
	 printf("请输入地址：");
	 scanf("%s", pc->data[pc->count].addr);
	 pc->count++;
	 printf("添加成功\n");
	}
	else
	{
		printf("通讯录已满,无法添加");
	}
}



void ShowContact(const Contact* pc)
{
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");

	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%5d\t%5s\t%12s\t%30s\n", 
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
		
	}


}
