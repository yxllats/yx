#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int DigitSum(unsigned int n)
{
	if (n > 10)
		return n % 10 + DigitSum(n / 10);
	else
		return n;
}
int main()
{
	unsigned int i = 0;
	printf("请输入一个非负整数：");
	scanf("%d", &i);
	int sum = DigitSum(i);
	printf("各位数之和为%d\n",sum);
	return 0;
}