#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Sum(int n)
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		n = n % 10 + n * 10;
		sum += n;
	}
	return sum;
}

int main()
{
	int n = 2;
	int sum=Sum(n);
	printf("%d\n", sum);
	return 0;
}