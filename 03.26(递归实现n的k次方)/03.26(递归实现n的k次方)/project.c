#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int func(int n, int k)
{
	if (k-- > 1)
		return n*func(n, k);
	else
		return n;
}

int main()
{
	int n, k;
	printf("请输入n，k：");
	scanf("%d,%d", &n, &k);
	int num=func(n, k);
	printf("%d的%d次方是：%d", n, k, num);
	return 0;
}