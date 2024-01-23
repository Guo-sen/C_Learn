#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<search.h>
#include<string.h>
// qsort������void qsort( void *base,//Ҫ��������ݵ���ʼλ�� 
//						size_t num, //�����������Ԫ�صĸ���
//						size_t width, //�����������Ԫ�صĴ�С����λ���ֽڣ�
//						int (*compare )(const void *elem1, const void *elem2 ) );//����ָ��--�ȽϺ���
//  ��compare��������ֵ�Ĺ涨��
//      <0    elem1 less than elem2 
//       0     elem1 equivalent to elem2
//      >0    elem1 greater than elem2

//struct Stu
//{
//	char name[20];
//	char age;
//};
//int comp_by_name(const void* e1, const void* e2)
//{
//	if (strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name) > 0)
//	{
//		return 1;
//	}
//	else if (strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name) > 0)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	struct Stu s[3] = { {"����",18},{"����",16},{"����",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]), comp_by_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s  %d\n", s[i].name, s[i].age);
//	}
//
//	return 0;
//}


//������bubble_sort��ð�������㷨��ģ��ʵ��qsort
// 

struct Stu
{
	char name[20];
	char age;
};
int comp_by_name(const void* e1, const void* e2)
{
	if (strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name) > 0)
	{
		return 1;
	}
	else if (strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name) > 0)
	{
		return -1;
	}
	else
		return 0;
}

int comp_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void Swap(char* c1,char* c2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *c1;
		*c1 = *c2;
		*c2 = tmp;
		c1++;
		c2++;
	}
}

void bubble_sort(void* arr, int sz, int width, int (*campare)(const void* e1, const void* e2))
{
	int i = 0;
	//���п�������
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		int flag = 1;

		//����ÿ�˱Ƚϵ�Ԫ�ض���
		for (j = 0; j <sz-1-i; j++)
		{
			if (campare( (char*)arr+j*width,(char*)arr+(j+1)*width)>0)
			{
				Swap( (char*)arr + j * width , (char*)arr + (j + 1) * width,width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}


int main()
{
	struct Stu s[] = { {"����",18},{"����",16},{"����",19} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), comp_by_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s  %d\n", s[i].name, s[i].age);
	}
	return 0;
}


