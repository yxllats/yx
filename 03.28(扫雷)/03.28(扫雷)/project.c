#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("***1.��ʼ��Ϸ   0.�˳���Ϸ********\n");
	printf("**********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initarr(mine, ROWS, COLS, '0');
	Initarr(show, ROWS, COLS, '*');
	//Print(mine, ROW, COL);
	Print(show, ROW, COL);
	Setmine(mine, ROW, COL);
	Print(mine, ROW, COL);
	Findmine(mine, show,ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	while (1)
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		if (1 == input)
			game();
		else if (0 == input)
		{
			printf("�˳���Ϸ��\n");
			break;
		}
		else
			printf("ѡ�����������ѡ��\n");
	}
}