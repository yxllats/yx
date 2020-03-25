#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void swap(int *i, int *j)
{
	int temp = 0;
	temp = *i;
	*i = *j;
	*j = temp;
}

int main()
{
	int x = 10;
	int y = 20;
	printf("x=%d,y=%d\n", x, y);
	swap(&x, &y);
	printf("x=%d,y=%d\n", x, y);
	return 0;
}