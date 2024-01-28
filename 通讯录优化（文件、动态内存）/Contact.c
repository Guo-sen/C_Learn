#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"



int InitContact(Contact* pc)
{
	pc->count = 0;
	pc->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = DEFAULT_SZ;
	return 0; 
}

void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}

void CheckCapacity (Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		//����
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
	}
}

void AddContact(Contact* pc)
{

	//����
	CheckCapacity(pc);

	if (pc->count == pc->capacity)
	{
		printf("����ʧ��\n");
		return;
	}
	printf("������������");
	scanf("%s", pc->data[pc->count].name); //name�Ǹ����������������Ǹ���ַ�����Բ���Ҫȡ��ַ
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



void ShowContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(Contact* pc, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)
{
	char arr[MAX_NAME] = { 0 };
	int i = 0;
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫɾ���˵����֣�");
	scanf("%s", arr);
	//����
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("��Ҫɾ�����˲�����\n");
		return;
	}
	//ɾ��
	for (i = pos; i < pc->count - 1; i++)//����Խ��Ҫ-1
	{
		pc->data[i] = pc->data[i + 1];
	}
	printf("ɾ���ɹ�\n");
	pc->count--;
}

void SearchContact(Contact* pc)
{
	char arr[MAX_NAME];
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫ���ҵ��˵�������");
	scanf("%s", arr);
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲���ͨѶ¼��\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

void ModifyContact(Contact* pc)
{

	char arr[MAX_NAME];
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫ�޸ĵ��˵�������");
	scanf("%s", arr);
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˵���Ϣ����ͨѶ¼��\n");
		return;
	}
	printf("�������޸ĺ��������");
	scanf("%s", pc->data[pos].name);
	printf("�������޸ĺ�����䣺");
	scanf("%d", &(pc->data[pos].age));
	printf("�������޸ĺ���Ա�");
	scanf("%s", pc->data[pos].sex);
	printf("�������޸ĺ�ĵ绰��");
	scanf("%s", pc->data[pos].tele);
	printf("�������޸ĺ�ĵ�ַ��");
	scanf("%s", pc->data[pos].addr);
	printf("\n�޸ĳɹ�\n");
}

int com_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), &com_by_name);
	printf("����ɹ�\n");
}




