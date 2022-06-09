#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//extern int Add();

//使用define 来定义宏
//#define MAX(x,y)(x>y?x:y)

int main()
{
	int a = 10;
	int b = a++;
	printf("演示a++");
	printf("显示变量a的值：%d\n",a);
	printf("显示变量b的值：%d\n",b);

	a = 10;
	b = ++a;
	printf("演示++a");
	printf("显示变量a的值：%d\n", a);
	printf("显示变量b的值：%d\n", b);

//void test()
//{
//	static int a = 0;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	//static int a = 1;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//}
//int main()
//{
//	int a = 50;
//	int b = 20;
//	int MAX = 0;
//	
//	MAX = (a > b ? a : b);
//	printf("a=%d,b=%d\n",a,b);
//	printf("a和b那个更大：%d\n", MAX);
//	//printf("显示变量b的值：%d\n", b);
//
//	return 0;
//}