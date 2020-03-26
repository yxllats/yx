#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int func(int n)
{
	if (n < 3)
		return 1;
	else
		return func(n - 1) + func(n - 2);
}

int main()
{
	int a = 1, b = 1, c = 1, n = 0;
	printf("请输入要求的斐波那契数的位置：");
	scanf("%d", &n);
	int count = func(n);
	printf("第%d个斐波那契数是%d\n", n, count);
	return 0;
}