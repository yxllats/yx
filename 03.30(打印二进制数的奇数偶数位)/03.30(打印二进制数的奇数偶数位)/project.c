#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num = 0;
	printf("������һ��������\n");
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


	printf("����λ������:\n");
	for (int i = 31 ; i >= 0; i-=2)
	{
		printf("%d ",number[i]);
	}
	printf("\nż��λ������:\n");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", number[i]);
	}
	return 0;
}
