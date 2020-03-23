#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game()
{
	int num = rand()%100+1;
	int a = 0;
	while (1)
	{
		printf("\n猜数字:");
		scanf("%d", &a);
		if (num<a)
		{
			printf("猜大了！\n\n");
		}
		else if (num>a)
		{
			printf("猜小了！\n\n");
		}
		else if (num == a)
		{
			printf("猜对了！\n\n");
			break;
		}
	}
}


void menu()
{
	printf("*******************************\n****1:开始游戏,****0:退出游戏\n*******************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	while (1)
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		if (1 == input)
		{
			game();
		}
		else if (0 == input)
			break;
		else
			printf("选择错误，请重新选择\n");
	}
	return 0;
}