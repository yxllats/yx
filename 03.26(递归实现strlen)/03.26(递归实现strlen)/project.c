#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int func(char *p)
{
	if (*p != '\0')
		return 1 + func(++p);
	else
		return 0;
}

int main()
{
	char arr[100] = { 0 };
	printf("������һ�ַ���:");
	scanf("%s", arr);
	int count = func(arr);
	printf("%d", count);
	return 0;
}