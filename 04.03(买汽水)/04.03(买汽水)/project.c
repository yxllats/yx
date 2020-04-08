#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int get_empty_bottle(int num)
//{
//	return num / 2;
//}
//int get_bottle(int num)
//{
//	return num / 1 + get_empty_bottle(num / 1);
//}
//
//int main()
//{
//	int mon = 20;
//	int sum = get_bottle(20);
//	printf("%d\n", sum);
//	return 0;
//}


int swap_bottle(int n)
{
	if (n > 1)
		return n / 2 + swap_bottle(n / 2);
	else
		return 0;
}

int main()
{
	int money = 20;
	int bottle = 20 / 1;
	int sum = swap_bottle(20) + bottle;
	printf("%d\n", sum);
	return 0;
}