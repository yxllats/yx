#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int a1 = 0;
	int a2 = 0;
	int count=0;
	for (int i = 1; i <= 100; i++)
	{
		if (i < 10)
		{
			a1 = i % 10;
			if (9 == a1)
			{
				printf("%d ", i);
				count++;
			}
		}
		if (i>10)
		{
			a1 = i % 10;
			a2 = i / 10;
			if (9 != a2)
			{
				if (9 == a1)
				{
					printf("%d ", i);
					count++;
				}
			}
			if (9 == a2)
			{
				printf("%d ", i);
				count++;
			}
		}	
	}
	printf("\n%d\n", count);
	return 0;
}