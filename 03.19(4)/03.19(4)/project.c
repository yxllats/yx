#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int count = 0;
	int x = 1000;
	while(x<=2000)
	{
		if (0 == x % 4 && 0 != x % 100)
		{
				printf("%d ", x);
				x += 4;
				count++;
		}
		else if (0 == x % 400)
		{
			printf("%d ", x);
			x += 4;
			count++;
		}
		else x += 1;
	}
	printf("\n%d\n", count);
	return 0;
}