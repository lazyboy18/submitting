#define _CRT_SECURE_NO_WARNINGS 
#include"ggame.h"
void initboard(char board[ROW][COL], int row, int col)
//ע����ν��ղ���������������boardʱӦ��ע��board�����������ʣ����м���

{
	//i��j��row��col�йأ�
	//��������ϣ���������Ϊ�գ���������ͳͳ��ֵΪ�ո񣡣���
	//����Ҫ��һ��ӡ�������ѭ����������������Э����ӡ������
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
//ע����ν��ղ���������������boardʱӦ��ע��board�����������ʣ����м���

{
	//������Ҫ������̣���
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			//�˴����ʹ�ú������˴�ӡ���ܱ����´���һ��˻�����ֵ���ӡ���̣�����
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
		//�����������
		printf("һ�������\n");
		printf("����������:");
		scanf("%d%d", &x, &y);
		//�����������
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
		//�����������
		printf("���������\n");
		printf("����������:");
		scanf("%d%d", &x, &y);
		//�����������
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
//�ж��Ƿ�ƽ��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
			//������һ���ո���֣���˵����û��ƽ��
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
