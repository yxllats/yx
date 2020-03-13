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
	printf("\a\n");//\a是警告字符
	printf("%s\n", "\32");//\ddd和\xdd,ddd表示1~3个八进制的数字,dd表示2个十六进制数字.
	printf("字符串arr1和arr2的长度一共是:");
	z=add(strlen(arr1), strlen(arr2));
	printf("%d\n", z);
	return 0;
}