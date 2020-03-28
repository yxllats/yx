#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Bubble_sort(int arr[],int sz)
{
	int count = 0;
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				count++;
			}
		}
		if (!count)
			break;
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 56, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,sz);
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}