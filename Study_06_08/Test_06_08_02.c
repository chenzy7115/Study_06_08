#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char ch = 'w';
	char* p = &ch;	
	printf("�ַ�����ch�ĵ�ַ��%p\n", p);
	*p = 'H';
	printf("ֱ��ͨ��ָ���ҵ�ch�ĵ�ַ����ֵ%c\n", ch);
	printf("ָ����ڴ�ռ��С��%d\n", (int)sizeof(p));
	return 0;
}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("ʹ��ָ�������ʾa�ĵ�ַΪ%p\n", p);
//	printf("ʹ��ȡ��ַ��&����ʾa�ĵ�ַΪ%p\n", &a);//%p��ʾ��ַ
//	*p = 20;
//	printf("a=%d", a);
//	return 0;
//}

////extern int Add();
//
////ʹ��define �������
//#define MAX(x,y)(x>y?x:y)
//
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d��%d�������%d", a, b, max);
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
//	printf("a��b�Ǹ�����%d\n", MAX);
//	//printf("��ʾ����b��ֵ��%d\n", b);
//
//	return 0;
//}