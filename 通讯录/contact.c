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
	 printf("������������");
	 scanf("%s",pc->data[pc->count].name); //name�Ǹ����������������Ǹ���ַ�����Բ���Ҫȡ��ַ
	 printf("���������䣺");
	 scanf("%d", &(pc->data[pc->count].age)); //�����Ǹ�int��������Ҫȡ��ַ
	 printf("�������Ա�");
	 scanf("%s", pc->data[pc->count].sex);
	 printf("������绰��");
	 scanf("%s", pc->data[pc->count].tele);
	 printf("�������ַ��");
	 scanf("%s", pc->data[pc->count].addr);
	 pc->count++;
	 printf("��ӳɹ�\n");
	}
	else
	{
		printf("ͨѶ¼����,�޷����");
	}
}



void ShowContact(const Contact* pc)
{
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");

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
