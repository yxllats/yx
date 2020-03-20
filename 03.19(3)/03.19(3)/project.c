#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void gcd(int x, int y)
{
	int a,t;
	if (x < y)
	{
		t = y;
		y = x;
		x = t;
	}
	while (x%y)
	{
		a = x%y;
		x = y;
		y = a;;
	}
	printf("x和y的最大公约数是%d", y);
}

int main()
{
	int v, w;
	printf("请输入两个数:");
	scanf("%d%d", &v, &w);
	gcd(v, w);
	return 0;
}