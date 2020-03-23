#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//定义变量
	int j, num;
	int arr[1000] = { 0 };

	//定义数组以及需要查找的数
	printf("请输入数组大小:");
	scanf("%d", &j);
	for (int i = 0; i < j; i++)
		arr[i] = i + 1;
	printf("请输入要查找的数:");
	scanf("%d", &num);

	//查找数字对应数组的下标
	//int size = sizeof(arr) / sizeof(arr[0])如果数组大小未知可以使用该语句
	int left = 0;
	int right = j - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (num > arr[mid])
			left = mid + 1;
		else if (num<arr[mid])
			right = mid - 1;
		else
		{
			printf("寻找的数组下标为%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("未找到\n");
	}
	return 0;
}