#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int func(int n, int k)
{
	if (k-- > 1)
		return n*func(n, k);
	else
		return n;
}

int main()
{
	int n, k;
	printf("������n��k��");
	scanf("%d,%d", &n, &k);
	int num=func(n, k);
	printf("%d��%d�η��ǣ�%d", n, k, num);
	return 0;
}