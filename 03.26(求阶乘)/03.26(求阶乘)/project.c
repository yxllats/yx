#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num = 0;
	int count = 1;
	printf("请输入一个数：");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		count=count*i;
	}
	printf("%d", count);
	return 0;
}