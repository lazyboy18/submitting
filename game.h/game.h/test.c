#define _CRT_SECURE_NO_WARNINGS 
#include"ggame.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	display(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		display(board, ROW, COL);
		iswin(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		playermoves(board, ROW, COL);
		display(board, ROW, COL);
		iswin(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("一号玩家赢！！！\n");
	}
	else if (ret == '#')
	{
		printf("二号玩家赢！！！\n");
	}
	else if (ret == 'q')
	{
		printf("平局！！！\n");
	}


}




void menu()
{
	printf("******************************\n");
	printf("***   1.play 0.exit  *********\n");
	printf("******************************\n");


}




void test()
{
	menu();
	printf("请选择:>\n");
	int input = 0;
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！！！\n");
		default:
			printf("请重新选择！！\n");
				break;
		}

	} while (input);

}







int main()
{
	test();
	return 0;
}