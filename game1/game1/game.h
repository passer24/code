#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL],int rwo,int col);
int isfull(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL],int row,int col);
void Playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);