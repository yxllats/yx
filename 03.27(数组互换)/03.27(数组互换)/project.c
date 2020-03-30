#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Arr_swap(int arr1[], int arr2[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[] = { 9, 8, 7, 6, 5 };
	Arr_swap(arr1, arr2, sz);
	print(arr1, sz);
	print(arr2, sz);
	return 0;
}