#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test1()
{
	int a = 0;
	printf("δ��static�����ı���a=%d\n", a);
	a++;
}

void test2()
{
	static int b = 0;
	printf("  ��static�����ı���b=%d\n", b);
	b++;
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		test1();
		test2();
	}
	return 0;
}