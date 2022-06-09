#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	unsigned int a = 1000;
	unsigned int b = ~a;
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}