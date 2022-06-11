#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组下标数
	int left = 0;//左下标值
	int right = sz;//右下标值
	int mid = 0;//左右下标平均值
	int k = 10;//需要查找的值

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
			printf("查找的值%d,在数组arr[%d]", k, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("查找的值%d不在数组arr[]中", k);
	}
	return 0;
}

