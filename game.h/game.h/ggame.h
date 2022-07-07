#include<stdio.h>
#define ROW 10
#define COL 10


#pragma once 
#ifdef_cplusplus
extern"C"
 {
#endif





	void game();
	void initboard(char board[ROW][COL], int row, int col);
	void display(char board[ROW][COL], int row, int col);
	void playermove(char board[ROW][COL], int row, int col);
	void playermoves(char board[ROW][COL], int row, int col);
	char iswin(char board[ROW][COL], int row, int col);
	int isfull(char board[ROW][COL], int row, int col);

#ifdef_cplusplus
}
#endif