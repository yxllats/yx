#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int Func(int a,int b)
{
	if (a == 0)
		return 0;
	else
		return pow(a % 10, b) + Func(a / 10, b);
}

int main()
{
	int temp = 1;
	int x = 10;
	for (int i = 0; i <= 100000; i++)
	{
		if (i == x)
		{
			x *= 10;
			temp++;
		}
		if (i == Func(i, temp))
			printf("%d ", i);
	}
	return 0;
}