#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//extern int Add();

//ʹ��define �������
//#define MAX(x,y)(x>y?x:y)

int main()
{
	int a = 10;
	int b = a++;
	printf("��ʾa++");
	printf("��ʾ����a��ֵ��%d\n",a);
	printf("��ʾ����b��ֵ��%d\n",b);

	a = 10;
	b = ++a;
	printf("��ʾ++a");
	printf("��ʾ����a��ֵ��%d\n", a);
	printf("��ʾ����b��ֵ��%d\n", b);

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
//	printf("a��b�Ǹ�����%d\n", MAX);
//	//printf("��ʾ����b��ֵ��%d\n", b);
//
//	return 0;
//}