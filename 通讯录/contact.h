#pragma once
#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
//�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼����Ϣ
typedef struct Contact
{
	PeoInfo data[MAX];   //����˵���Ϣ
	int count;			//��¼��ǰͨѶ¼��ʵ�ʼ�¼���˵ĸ���
}Contact;

void InitContact(Contact* pc);  //��ʼ��ͨѶ¼
void AddContact(Contact* pc);  //������ϵ��
void ShowContact (const Contact* pc); //��ӡͨѶ¼��Ϣ


