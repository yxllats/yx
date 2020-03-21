#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	float i_sum = 0;
	float j_sum = 0;
	float sum = 0;
	for (float i = 1; i <= 99; i += 2)
	{
		i_sum = i_sum + 1 / i;
	}
	for (float j = 2; j <= 100; j += 2)
	{
		j_sum = j_sum + 1 / j;
	}
	sum = i_sum - j_sum;
	printf("%f\n", sum);
	return 0;
}