#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* des, const char* str)
{
	assert(des != NULL);
	assert(str != NULL);
	char* ptr = des;
	while ((*des++ = *str++) != 0);
	return ptr;
}

int main()
{
	char ch1[] = "hello world";
	char ch2[] = "hi hi";
	char* p=my_strcpy(ch1, ch2);
	printf("%s", p);
	return 0;
}