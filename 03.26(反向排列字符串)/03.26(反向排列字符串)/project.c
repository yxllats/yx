#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void reverse_string(char * string)
{
	if (*string != '\0')
	{
		reverse_string(++string);
		printf("%c ", *(string-1));
	}
}

int main()
{
	char arr[100] = { 0 };
	printf("ÇëÊäÈëÒ»×Ö·û´®:");
	scanf("%s", arr);
	reverse_string(arr);
	return 0;
}