#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
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


	printf("奇数位的数是:\n");
	for (int i = 31 ; i >= 0; i-=2)
	{
		printf("%d ",number[i]);
	}
	printf("\n偶数位的数是:\n");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", number[i]);
	}
	return 0;
}
