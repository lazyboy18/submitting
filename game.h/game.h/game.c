#define _CRT_SECURE_NO_WARNINGS 
#include"ggame.h"
void initboard(char board[ROW][COL], int row, int col)
//注意如何接收参数！！接收数组board时应该注意board的类型与性质，几行几列

{
	//i和j与row和col有关，
	//由于我们希望棋盘最初为空，所以数组统统赋值为空格！！！
	//若需要逐一打印则需二重循环，引入两个变量协助打印！！！
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
//注意如何接收参数！！接收数组board时应该注意board的类型与性质，几行几列

{
	//根据需要设计棋盘！！
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			//此处设计使该函数有了打印功能便于下次玩家或人机输入值后打印棋盘！！！
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col - 1)
					printf("|");

			}
			printf("\n");
		}


	}

}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		//玩家下棋坐标
		printf("一号玩家走\n");
		printf("请输入坐标:");
		scanf("%d%d", &x, &y);
		//玩家下棋限制
		if (x >= 1 && x <= row, y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}

		}

	}

}
void playermoves(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		//玩家下棋坐标
		printf("二号玩家走\n");
		printf("请输入坐标:");
		scanf("%d%d", &x, &y);
		//玩家下棋限制
		if (x >= 1 && x <= row, y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}

		}

	}

}
int isfull(char board[ROW][COL], int row, int col)
//判断是否平局
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
			//假如有一个空格出现，则说明还没有平局
		}


	}
	return 1;


}


char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 2] == board[i][j + 1] && board[i][j] != ' ')
				return board[i][j];

		}

	}
	for (i = 0; i < row - 2; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i+1][j] && board[i+1][j ] == board[i+2][j] && board[i][j] != ' ')
				return board[i][j];


		}



	}

	for (i = 0; i < row - 2; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if (board[i][j] == board[i + 1][j+1] && board[i + 1][j+1] == board[i + 2][j+2] && board[i][j] != ' ')
				return board[i][j];

		}

	}
	for (i = 2; i < row; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if (board[i][j] == board[i -1][j + 1] && board[i -1][j + 1] == board[i -2][j + 2] && board[i][j] != ' ')
				return board[i][j];

		}

	}

	int pic = 0;

	pic = isfull(board, ROW, COL);
	if (1 == pic)

	{
		return 'q';
	}
	else if (0 == pic)
		return 'c';




}
