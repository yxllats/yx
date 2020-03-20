#define _CRT_SECURE_NO_WARNINGS 1

void sort(float a,float b,float c)
{
	float t;
	if (a < b)
	{
		t = b;
		b = a;
		a = t;
	}
	if (a < c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (b < c)
	{
		t = c;
		c = b;
		b = t;
	}
	printf("%f>%f>%f", a, b, c);
}

int main()
{
	float x, y, z;
	printf("请输入需要比较的三个数:");
	scanf("%f%f%f", &x, &y, &z);
	sort(x, y, z);
	return 0;
}