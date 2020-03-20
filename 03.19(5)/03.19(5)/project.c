#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int x = 100;
	int t;
	int count = 0;
	while (x <= 200)
	{
		t = 0;
		for (int i = 2; i < x; i++)
		{
			if (0 == x%i)
			{
				t++;
				break;
			}
		}
		if (!t)
		{
			printf("%d\n", x++);
			count++;
		}
		else
			x++;
	}
	printf("%d\n", count);
	return 0;
}