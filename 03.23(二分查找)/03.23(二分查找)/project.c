#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//�������
	int j, num;
	int arr[1000] = { 0 };

	//���������Լ���Ҫ���ҵ���
	printf("�����������С:");
	scanf("%d", &j);
	for (int i = 0; i < j; i++)
		arr[i] = i + 1;
	printf("������Ҫ���ҵ���:");
	scanf("%d", &num);

	//�������ֶ�Ӧ������±�
	//int size = sizeof(arr) / sizeof(arr[0])��������Сδ֪����ʹ�ø����
	int left = 0;
	int right = j - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (num > arr[mid])
			left = mid + 1;
		else if (num<arr[mid])
			right = mid - 1;
		else
		{
			printf("Ѱ�ҵ������±�Ϊ%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("δ�ҵ�\n");
	}
	return 0;
}