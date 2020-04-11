#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int my_strlen(const char* p)
{
	int count = 0;
	assert(p != NULL);
	while (*p != '\0')
	{
		p ++;
		count ++;
	}
	return count;
}


int main()
{
	char ch[] = "hello word";
	int num = my_strlen(ch);
	printf("%d\n", num);
	return 0;
}