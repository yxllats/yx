#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%-2d=%-5d ", j, i,i*j);
		}
		printf("\n");
	}
	return 0;
}