#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int swap_binary_num(int num)
{
	int count = 0;
	int number[32] = { 0 };
	int m = 31;

	while (m >= 0)
	{
		if (num >= 0)
		{
			int i = num % 2;
			num = num >> 1;
			number[m--] = i;
		}
		else
		{
			int i = -(num % 2);
			num = num >> 1;
			number[m--] = i;
		}
	}
	for (int i = 0; i < 32; i++)
	{
		if (number[i] == 1)
			count++;
	}
	return count;
}

int main()
{
	int num = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	int count = swap_binary_num(num);
	printf("\n%d个1", count);
	return 0;
}