#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int len1 = 0;
	int len2 = 0;

	char arr1[] = "c:\test\32\test.c";
	char arr2[] = { 'a','b','c' ,'\0'};

	len1 = strlen(arr1);
	len2 = strlen(arr2);

	printf("%d\n", len1);
	printf("%d\n", len2);
	return 0;
}