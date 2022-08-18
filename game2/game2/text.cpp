#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"


void game()
{
	char board[ROW][COL] = {0};
	intcharboard(board,ROW,COL);
	display(board,ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		display(board, ROW, COL);
	}


}








void menu()
{
	printf("                *****************************                   \n");
	printf("                *******1.play 2.exit*********                   \n");
	printf("                *****************************                   \n");
}



int main()
{
	int input = 0;
	menu();
	do
	{
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入：>\n");

		}
	} while (input);
		return 0;
}