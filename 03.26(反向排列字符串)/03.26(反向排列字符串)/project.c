#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void reverse_string(char *str)
{
	int left = 0;
	int right = strlen(str) - 1;
	while (left <= right)
	{
		char ptr = str[left];
		str[left] = str[right];
		str[right] = ptr;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "hello";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}