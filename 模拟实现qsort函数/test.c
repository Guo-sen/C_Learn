#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<search.h>
#include<string.h>
// qsort函数：void qsort( void *base,//要排序的数据的起始位置 
//						size_t num, //待排序的数据元素的个数
//						size_t width, //待排序的数据元素的大小（单位是字节）
//						int (*compare )(const void *elem1, const void *elem2 ) );//函数指针--比较函数
//  对compare函数返回值的规定：
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
//	struct Stu s[3] = { {"张三",18},{"李四",16},{"王五",19} };
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


//下面用bubble_sort（冒泡排序算法）模拟实现qsort
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
	//进行控制趟数
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		int flag = 1;

		//控制每趟比较的元素对数
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
	struct Stu s[] = { {"张三",18},{"李四",16},{"王五",19} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), comp_by_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s  %d\n", s[i].name, s[i].age);
	}
	return 0;
}


