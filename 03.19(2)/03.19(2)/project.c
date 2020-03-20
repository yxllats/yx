#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 1;
	while (i < 100)
	{
		if (0 == i % 3)
		{
			printf("%d ", i);
			i += 3;
		}
		else
			i += 1;
	}
	return 0;
}