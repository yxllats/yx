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
		printf("\n������:");
		scanf("%d", &a);
		if (num<a)
		{
			printf("�´��ˣ�\n\n");
		}
		else if (num>a)
		{
			printf("��С�ˣ�\n\n");
		}
		else if (num == a)
		{
			printf("�¶��ˣ�\n\n");
			break;
		}
	}
}


void menu()
{
	printf("*******************************\n****1:��ʼ��Ϸ,****0:�˳���Ϸ\n*******************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	while (1)
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		if (1 == input)
		{
			game();
		}
		else if (0 == input)
			break;
		else
			printf("ѡ�����������ѡ��\n");
	}
	return 0;
}