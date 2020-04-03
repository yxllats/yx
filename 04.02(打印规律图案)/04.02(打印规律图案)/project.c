#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7 - i; j++)
			printf(" ");
		for (; j > 7 - i&&j < 7 + i; j++)
			printf("*");
		printf("\n");
	}
	for (i = 6; i >= 1; i--)
	{
		for (j = 1; j <= 7 - i; j++)
			printf(" ");
		for (; j>7 - i&&j < 7 + i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}