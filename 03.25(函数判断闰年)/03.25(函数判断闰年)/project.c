#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int is_leap_year(int year)
{
	return((0 == year % 4 && 0 != year % 100) || 0 == year % 400);
}

int main()
{
	int count = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (is_leap_year(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}