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
	PeoInfo* data;   //����˵���Ϣ ���˴���data�Ǹ�ָ��Ļ���ָ��Ŀռ�Ϳ���malloc
	int count;			//��¼��ǰͨѶ¼��ʵ�ʼ�¼���˵ĸ���
	int capacity;               //����Ҫ��¼��ǰͨѶ¼����
}Contact;

int InitContact(Contact* pc);  //��ʼ��ͨѶ¼
void AddContact(Contact* pc);  //������ϵ��
void ShowContact(const Contact* pc); //��ӡͨѶ¼��Ϣ

void DelContact(Contact* pc);//ɾ��ͨѶ¼��Ϣ

void SearchContact(Contact* pc);//����ָ����ϵ��

void ModifyContact(Contact* pc);//�޸�ָ����ϵ����Ϣ

void SortContact(Contact* pc); //����ͨѶ¼��Ϣ

void DestoryContact(Contact* pc);
