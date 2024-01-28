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
		//增容
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
			printf("增容成功\n");
		}
	}
}

void AddContact(Contact* pc)
{

	//增容
	CheckCapacity(pc);

	if (pc->count == pc->capacity)
	{
		printf("增容失败\n");
		return;
	}
	printf("请输入姓名：");
	scanf("%s", pc->data[pc->count].name); //name是个数组名，本来就是个地址，所以不需要取地址
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



void ShowContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");

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
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要删除人的名字：");
	scanf("%s", arr);
	//查找
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("你要删除的人不存在\n");
		return;
	}
	//删除
	for (i = pos; i < pc->count - 1; i++)//避免越界要-1
	{
		pc->data[i] = pc->data[i + 1];
	}
	printf("删除成功\n");
	pc->count--;
}

void SearchContact(Contact* pc)
{
	char arr[MAX_NAME];
	if (pc->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要查找的人的姓名：");
	scanf("%s", arr);
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("要查找的人不在通讯录中\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
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
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要修改的人的姓名：");
	scanf("%s", arr);
	int pos = FindByName(pc, arr);
	if (pos == -1)
	{
		printf("要修改的人的信息不在通讯录中\n");
		return;
	}
	printf("请输入修改后的姓名：");
	scanf("%s", pc->data[pos].name);
	printf("请输入修改后的年龄：");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入修改后的性别：");
	scanf("%s", pc->data[pos].sex);
	printf("请输入修改后的电话：");
	scanf("%s", pc->data[pos].tele);
	printf("请输入修改后的地址：");
	scanf("%s", pc->data[pos].addr);
	printf("\n修改成功\n");
}

int com_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), &com_by_name);
	printf("排序成功\n");
}




