#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//���������±���
	int left = 0;//���±�ֵ
	int right = sz;//���±�ֵ
	int mid = 0;//�����±�ƽ��ֵ
	int k = 10;//��Ҫ���ҵ�ֵ

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("���ҵ�ֵ%d,������arr[%d]", k, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("���ҵ�ֵ%d��������arr[]��", k);
	}
	return 0;
}

