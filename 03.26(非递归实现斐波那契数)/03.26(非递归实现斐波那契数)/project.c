#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 1, b = 1, c = 1, n = 0;
	printf("������Ҫ���쳲���������λ�ã�");
	scanf("%d", &n);
	if (n < 3)
		c = 1;
	else
	{
		for (int i = 2; i < n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	printf("��%d��쳲���������%d\n", n, c);
	return 0;
}