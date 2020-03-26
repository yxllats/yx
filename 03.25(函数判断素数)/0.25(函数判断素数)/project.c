#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h.>
#include<math.h>

int is_prime_number(int i)
{
	for (int j = 2; j <= sqrt(i); j++)
	{
		if (0 == i%j)
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (is_prime_number(i))
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}
