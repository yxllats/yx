#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	float arr[10] = { 0 };
	float temp = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("请输入第%d个数：",(i+1));
		scanf("%f", &arr[i]);
	}
	for (int j = 0; j < 9; j++)
	{
		if (arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
	printf("max=%f", arr[9]);
	return 0;
}