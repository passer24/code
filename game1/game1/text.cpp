#define _CRT_SECURE_NO_WARNINGS 1//测试三子棋
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("******1.play 2.exit***\n");
	printf("**********************\n");

}

void game()//数组存放棋盘信息
{
	 char ret = 0;
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
	while (1)
	{
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret=iswin(board,ROW,COL);
		if (ret == 'C');
		{
			break;
		}
		if (ret == '*')
			printf("玩家赢\n");
		if (ret == '#')
			printf("电脑赢\n");
		else
			printf("平局\n");
	}
}

void text()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);
}





int main()
{
	text();
	return 0;
}