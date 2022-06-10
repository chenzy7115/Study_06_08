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
	struct Book b1 = { "C语言程序设计",55 };
	struct Book* pb = &b1;

	printf("书名：%s\n",(*pb).name);
	printf("价格：%d\n",(*pb).price);

	printf("书名：%s\n", pb->name);
	printf("价格：%d\n", pb->price);

	pb->price = 15;
	strcpy(b1.name, "C++程序设计"); //strcpy是string copy的意思
	printf("修改过的书名：%s\n", pb->name);

	printf("修改后的价格：%d\n", pb->price);

	
	return 0;
}

