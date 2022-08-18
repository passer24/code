#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void intcharboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void playermove(char board[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;
	while (1) 
	{
		printf("������Ҫ�ߵ����꣺>");
		scanf_s("%d %d", &a, &b);
		if (a >= 1 && a <= row  && b>=1 && b <= col )
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�á�");
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}
	}
}

