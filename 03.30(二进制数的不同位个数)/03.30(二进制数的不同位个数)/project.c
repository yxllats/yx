#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int count = 0;
	char c_2[32] = { 0 };
	int m = 31;
	int a = 0;
	int b = 0;
	printf("输入两个整数：");
	scanf("%d %d", &a, &b);
	int c_10 = a^b;
	while (c_10)
	{
		int i = c_10 % 2;
		c_2[--m] = i;
		c_10 = c_10 / 2;

		if (i)
			count++;
	}
	printf("%d\n", count);
	return 0;
}