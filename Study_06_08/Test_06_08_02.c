#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

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

	return 0;
}