#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void func(int x)
{
	if (x < 9)
		printf("%d", x);
	else
	{
		func(x / 10);
		printf("%d", x % 10);
	}
}

int main()
{
	int num = 0;
	printf("请输入一个数:");
	printf("\n");
	scanf("%d",&num);
	func(num);
	return 0;
}