#define _CRT_SECURE_NO_WARNINGS 1

void mul_table(int j)
{
	for (int x = 1; x <= j;x++)
	{
		for (int y = 1; y <=x; y++)
		{
			printf("%2d*%-2d=%-2d",y,x,x*y);
		}
		printf("\n");
	}
}

int main()
{
	int i = 0;
	printf("������˷����������\n");
	scanf("%d",&i);
	mul_table(i);
	return 0;
}