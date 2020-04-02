#include"game.h"

void Initarr(char arr[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void Print(char arr[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
		printf("%d", i);
	printf("\n");
	for (int i = 1; i <= row;i++)
	{
		printf("%d", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char arr[ROWS][COLS], int row, int col)
{
	int count = Easy;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

int  GetmineCount(char arr[ROWS][COLS],int x,int y)
{
	{
		return (arr[x - 1][y - 1] + arr[x - 1][y] + arr[x - 1][y + 1]
				+ arr[x][y - 1] + arr[x][y + 1]
				+ arr[x + 1][y - 1] + arr[x + 1][y] + arr[x + 1][y + 1]
				- 8 * '0'+'0');	
		}

}

void Findmine(char arr1[ROWS][COLS],char arr2[ROWS][COLS],int row,int col)
{
	int x = 0, y = 0;
	int win = 0;
	while (win<row*col-Easy)
	{
		printf("请输入排查的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (arr1[x][y] == '1')
			{
				printf("踩到雷了，游戏结束！\n");
				Print(arr1, ROW, COL);
				break;
			}
			else
			{
				arr2[x][y] = GetmineCount(arr1, x, y);
				Print(arr2, ROW, COL);
				win++;
			}
		}
		else
			printf("坐标有误，请重新输入！\n");
	}
	printf("恭喜过关！\n");
	Print(arr1, ROW, COL);
}