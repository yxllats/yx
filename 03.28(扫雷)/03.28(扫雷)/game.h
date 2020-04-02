#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define Easy 10

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Initarr(char arr[ROWS][COLS], int rows, int cols, char set);

void Print(char arr[ROWS][COLS], int row, int col);

void Setmine(char arr[ROWS][COLS], int row, int col);

void Findmine(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);

int  GetmineCount(char arr[ROWS][COLS], int x, int y);