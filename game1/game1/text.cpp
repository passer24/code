#define _CRT_SECURE_NO_WARNINGS 1//����������
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("******1.play 2.exit***\n");
	printf("**********************\n");

}

void game()//������������Ϣ
{
	 char ret = 0;
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
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
			printf("���Ӯ\n");
		if (ret == '#')
			printf("����Ӯ\n");
		else
			printf("ƽ��\n");
	}
}

void text()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
}





int main()
{
	text();
	return 0;
}