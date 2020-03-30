#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void init(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
		arr[i] =  0 ;
}
void print(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}