#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C���Գ������",55 };
	struct Book* pb = &b1;

	printf("������%s\n",(*pb).name);
	printf("�۸�%d\n",(*pb).price);

	printf("������%s\n", pb->name);
	printf("�۸�%d\n", pb->price);

	pb->price = 15;
	strcpy(b1.name, "C++�������"); //strcpy��string copy����˼
	printf("�޸Ĺ���������%s\n", pb->name);

	printf("�޸ĺ�ļ۸�%d\n", pb->price);

	
	return 0;
}

