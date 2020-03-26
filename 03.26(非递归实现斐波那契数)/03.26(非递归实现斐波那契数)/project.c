#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 1, b = 1, c = 1, n = 0;
	printf("请输入要求的斐波那契数的位置：");
	scanf("%d", &n);
	if (n < 3)
		c = 1;
	else
	{
		for (int i = 2; i < n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	printf("第%d个斐波那契数是%d\n", n, c);
	return 0;
}