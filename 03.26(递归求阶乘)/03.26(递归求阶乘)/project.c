#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int func(int x)
{
	if (x < 2)
		return 1;
	else
		return x*func(x - 1);
}

int main()
{
	int num = 0;
	int count = 0;
	printf("������һ����:");
	scanf("%d", &num);
	count = func(num);
	printf("%d�Ľ׳���%d:\n", num, count);
	return 0;
}