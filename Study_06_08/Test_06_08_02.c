#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char ch = 'w';
	char* p = &ch;	
	printf("字符变量ch的地址：%p\n", p);
	*p = 'H';
	printf("直接通过指针找到ch的地址并赋值%c\n", ch);
	printf("指针的内存空间大小：%d\n", (int)sizeof(p));
	return 0;
}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("使用指针变量显示a的地址为%p\n", p);
//	printf("使用取地址符&来显示a的地址为%p\n", &a);//%p显示地址
//	*p = 20;
//	printf("a=%d", a);
//	return 0;
//}

////extern int Add();
//
////使用define 来定义宏
//#define MAX(x,y)(x>y?x:y)
//
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d和%d更大的是%d", a, b, max);
//	return 0;
//}

//int main()
//{
//	int a = 111;
//	int b = 2000;
//	int c = 0;
//	//extern int Add();
//	c = Add(a, b);
//	printf("%d+%d=%d", a, b, c);
//
//	return 0;
//}

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