#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int add(int x, int y)
{
	int c = 0;
	c = x + y;
	return c;
}
int main()
{
	char arr1[] = "abcd";
	char arr2[] = "abc0";
	int z = 0;
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("\a\n");//\a�Ǿ����ַ�
	printf("%s\n", "\32");//\ddd��\xdd,ddd��ʾ1~3���˽��Ƶ�����,dd��ʾ2��ʮ����������.
	printf("�ַ���arr1��arr2�ĳ���һ����:");
	z=add(strlen(arr1), strlen(arr2));
	printf("%d\n", z);
	return 0;
}