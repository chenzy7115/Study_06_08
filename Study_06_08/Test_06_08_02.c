#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//extern int Add();

//使用define 来定义宏
//#define MAX(x,y)(x>y?x:y)

int main()
{
	printf("%d\n", (int)sizeof(char*));
	printf("%d\n", (int)sizeof(int*));
	printf("%d\n", (int)sizeof(short*));
	printf("%d\n", (int)sizeof(float*));

}

