#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int func(char *p)
{
	int num = 0;
	while (*p != '\0')
	{
		num++;
		p++;
	}
	return num;
}

int main()
{
	char arr[100] = {0};
	printf("ÇëÊäÈëÒ»×Ö·û´®:");
	scanf("%s", arr);
	int count = func(arr);
	printf("%d", count);
	return 0;
}