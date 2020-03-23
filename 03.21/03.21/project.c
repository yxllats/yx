#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int a1 = 0;
	int a2 = 0;
	int count=0;
	for (int i = 1; i <= 100; i++)
	{
		if (9 == i % 10)
			count++;
		if (9 == i / 10)
			count++;
	}
	printf("%d\n", count);
	return 0;
}