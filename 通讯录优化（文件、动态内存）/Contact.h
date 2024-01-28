#pragma once
#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEFAULT_SZ 3
#define INC_SZ 2
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录的信息

typedef struct Contact
{
	PeoInfo* data;   //存放人的信息 ，此处的data是个指针的话，指向的空间就可以malloc
	int count;			//记录当前通讯录中实际记录的人的个数
	int capacity;               //还需要记录当前通讯录容量
}Contact;

int InitContact(Contact* pc);  //初始化通讯录
void AddContact(Contact* pc);  //增加联系人
void ShowContact(const Contact* pc); //打印通讯录信息

void DelContact(Contact* pc);//删除通讯录信息

void SearchContact(Contact* pc);//查找指定联系人

void ModifyContact(Contact* pc);//修改指定联系人信息

void SortContact(Contact* pc); //排序通讯录信息

void DestoryContact(Contact* pc);
