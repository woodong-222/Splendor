#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"

#define WHITE 7
#define BLUE 1
#define GREEN 2
#define RED 4
#define BROWN 5
#define GOLD 6
#define LIGHT_BLUE 9
#define LIGHT_GREEN 10
#define LIGHT_RED 12
#define LIGHT_GOLD 14

Develop_1 card1[40] = { {1,"brown",0,4,0,0,0}, {1,"red",4,0,0,0,0}, {1,"blue",0,0,4,0,0}, {1,"green",0,0,0,0,4}, {1,"white",0,0,0,4,0}, {0,"blue",1,0,1,1,1}, {0,"blue",1,0,2,2,0}, {0,"blue",0,1,1,3,0}, {0,"blue",1,0,2,1,1}, {0,"blue",0,0,0,0,3}, {0,"blue",0,0,0,2,2}, {0,"blue",1,0,0,0,2}, {0,"green",0,0,3,0,0}, {0,"green",0,2,2,0,0}, {0,"green",0,1,2,0,2}, {0,"green",1,1,1,0,1}, {0,"green",1,1,1,0,2}, {0,"green",2,1,0,0,0}, {0,"green",1,3,0,1,0}, {0,"brown",0,0,1,2,0}, {0,"brown",2,2,1,0,0}, {0,"brown",1,1,1,1,0}, {0,"brown",0,0,0,3,0}, {0,"brown",0,0,3,1,1}, {0,"brown",1,2,1,1,0}, {0,"brown",2,0,0,2,0}, {0,"red",2,1,0,1,1}, {0,"red",2,0,2,0,0}, {0,"red",1,1,0,1,1}, {0,"red",0,2,0,1,0}, {0,"red",3,0,0,0,0}, {0,"red",2,0,0,1,2}, {0,"red",1,0,1,0,3}, {0,"white",0,2,0,0,2}, {0,"white",0,1,1,2,1}, {0,"white",0,1,1,1,1}, {0,"white",0,3,0,0,0}, {0,"white",0,0,2,0,1}, {0,"white",0,2,0,2,1}, {0,"white",3,1,0,0,1} };
Develop_2 card2[30] = { { 2,"brown",5,0,0,0,0}, {2,"blue",5,3,0,0,0}, {1,"green",2,3,0,0,2}, {2,"white",0,0,4,1,2}, {1,"green",4,2,0,0,1}, {3,"white",6,0,0,0,0}, {2,"white",0,0,5,0,0}, {1,"green",3,0,3,2,0}, {2,"blue",2,0,1,0,4}, {1,"white",0,0,2,3,2}, {1,"red",0,3,2,0,3}, {3,"blue",0,6,0,0,0}, {1,"brown",3,2,0,2,0}, {1,"blue",0,2,0,3,3},{1,"red",2,0,2,0,3}, {2,"brown",0,0,3,5,0}, {2,"green",0,0,0,5,0}, {2,"green",0,5,0,3,0}, {1,"brown",3,0,0,3,2}, {2,"blue",0,5,0,0,0}, {2,"red",0,0,0,0,5}, {1,"blue",0,2,3,2,0}, {2,"red",1,4,0,2,0}, {3,"red",0,0,6,0,0}, {1,"white",2,3,3,0,0}, {3,"green",0,0,0,6,0}, {2,"white",0,0,5,0,3}, {3,"brown",0,0,0,0,6}, {2,"brown",0,1,2,4,0}, {2,"red",3,0,0,0,5} };
Develop_3 card3[20] = { { 4,"blue",7,0,0,0,0 }, { 4,"green",3,6,0,3,0} , {4,"red",0,0,0,7,0}, {3, "brown",3,3,3,5,0}, {4, "white",3,0,3,0,6}, {3, "green", 5,3,3,0,3}, {4,"brown",0,0,7,0,0},{3,"blue",3,0,3,3,5}, {5,"brown",0,0,7,0,3},{3,"white",0,3,5,3,3},{4,"red",0,3,3,6,0},{5,"red",0,0,3,7,0},{5,"blue",7,3,0,0,0},{4,"white",0,0,6,3,3},{5,"green",0,7,0,3,0}, {4, "brown",0,0,6,3,3}, {4,"green",0,7,0,0,0},{4,"blue",6,3,0,0,3}, {5,"white",3,0,0,0,7}, {3,"red",3,5,0,3,3} };
Nob nob[10] = { {4,4,0,0,0}, {0,0,4,0,4}, {0,0,4,4,0}, {4,0,3,0,3}, {3,3,0,0,3}, {0,4,0,4,0}, {3,3,0,3,0}, {0,3,3,3,0}, {0,0,3,3,3}, {4,0,0,0,4} };
Player player[4] = { 0 };

int main(void)
{
	int nob_card[10], i, temp, x, y, dev_card1[40], dev_card2[30], dev_card3[20];

	srand((unsigned int)time(NULL));

	//�ߺ����� ���� ī��
	for (i = 0; i < 10; i++) nob_card[i] = i;
	for (i = 0; i < 30; i++)
	{
		x = rand() % 10;
		y = rand() % 10;

		if (x != y) {
			temp = nob_card[x];
			nob_card[x] = nob_card[y];
			nob_card[y] = temp;
		}
	}

	 //�ߺ����� ���� ī��1
	for (i = 0; i < 40; i++) dev_card1[i] = i;
	for (i = 0; i < 100; i++)
	{
		x = rand() % 40;
		y = rand() % 40;

		if (x != y) {
			temp = dev_card1[x];
			dev_card1[x] = dev_card1[y];
			dev_card1[y] = temp;
		}
	}

	//�ߺ����� ���� ī��2
	for (i = 0; i < 30; i++) dev_card2[i] = i;
	for (i = 0; i < 70; i++)
	{
		x = rand() % 30;
		y = rand() % 30;

		if (x != y) {
			temp = dev_card2[x];
			dev_card2[x] = dev_card2[y];
			dev_card2[y] = temp;
		}
	}

	//�ߺ����� ���� ī��2
	for (i = 0; i < 20; i++) dev_card3[i] = i;
	for (i = 0; i < 50; i++)
	{
		x = rand() % 20;
		y = rand() % 20;

		if (x != y) {
			temp = dev_card3[x];
			dev_card3[x] = dev_card3[y];
			dev_card3[y] = temp;
		}
	}

	//������ ���

	current_player = 1;
	boardpan(nob_card, dev_card1, dev_card2, dev_card3);


	game(nob_card, dev_card1, dev_card2, dev_card3);
		

	system("pause");
	return 0;
}


void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[])
{
	int key;
	int i = 0;


	printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("                                                            �� player%d�� �����Դϴ�.                                                                                                 ��\n",current_player + 1);
	printf("                                                            �� ���ϴ� Ȱ���� �������ּ���.                                                                                           ��\n");
	printf("                                                            �� ���� ��ū ��������  :   A                                                                                             ��\n");
	printf("                                                            �� ���� ī�� �����ϱ�  :   S                                                                                             ��\n");
	printf("                                                            �� ���� ī�� «�ϱ�    :   D                                                                                             ��\n");
	printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");

	while (1)
	{
		if (kbhit())
		{
			key = getch();
			if (key == 97 || key == 65)
			{
				//���� ��ū ��������
				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
				printf("                                                            �� player%d�� �����Դϴ�.                                                                                                 ��\n", current_player + 1);
				printf("                                                            �� ���� ��ū �������⸦ �����߽��ϴ�.                                                                                    ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
			}
			if (key == 115 || key == 83)
			{
				//���� ī�� �����ϱ�
				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
				printf("                                                            �� player%d�� �����Դϴ�.                                                                                                 ��\n", current_player + 1);
				printf("                                                            �� ���� ī�� �����ϱ⸦ �����߽��ϴ�.                                                                                    ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
			}
			if (key == 100 || key == 68)
			{
				//���� ī�� ���ϱ�
				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
				printf("                                                            �� player%d�� �����Դϴ�.                                                                                                 ��\n", current_player + 1);
				printf("                                                            �� ���� ī�� ���ϱ⸦ �����߽��ϴ�.                                                                                      ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��                                                                                                                       ��\n");
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
			}
			if (key == 49)
			{
				//�׽�Ʈ�� : �÷��̾� �ٲٱ� - ��ǰ �ϼ��� ���� �� if�� �����
				current_player -= 1;
				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
				printf("                                                            �� player%d�� �����Դϴ�.                                                                                                 ��\n", current_player + 1);
				printf("                                                            �� ���ϴ� Ȱ���� �������ּ���.                                                                                           ��\n");
				printf("                                                            �� ���� ��ū ��������  :   A                                                                                             ��\n");
				printf("                                                            �� ���� ī�� �����ϱ�  :   S                                                                                             ��\n");
				printf("                                                            �� ���� ī�� «�ϱ�    :   D                                                                                             ��\n");
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
			}
			if (key == 50)
			{
				//�׽�Ʈ�� : �÷��̾� �ٲٱ� - ��ǰ �ϼ��� ���� �� if�� �����
				current_player += 1;
				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
				printf("                                                            �� player%d�� �����Դϴ�.                                                                                                 ��\n", current_player + 1);
				printf("                                                            �� ���ϴ� Ȱ���� �������ּ���.                                                                                           ��\n");
				printf("                                                            �� ���� ��ū ��������  :   A                                                                                             ��\n");
				printf("                                                            �� ���� ī�� �����ϱ�  :   S                                                                                             ��\n");
				printf("                                                            �� ���� ī�� «�ϱ�    :   D                                                                                             ��\n");
				printf("                                                            ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
			}
		}
	}

}

void color(int color) { // ������ �������� �۾��� ����
	if (color == WHITE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	else if (color == BLUE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	else if (color == GREEN)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	else if (color == RED)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	else if (color == GOLD)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GOLD);
	else if (color == BROWN)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BROWN);
	else if (color == LIGHT_BLUE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHT_BLUE);
	else if (color == LIGHT_GREEN)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHT_GREEN);
	else if (color == LIGHT_RED)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHT_RED);
	else if (color == LIGHT_GOLD)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHT_GOLD);
}

void GROUND_color(int color) { // ����� ground�� ���� �ٲ�, �۾��� ����
	int ground = 9; // ���� ground�� 9 -> ���� �Ķ�
	if (color == WHITE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + WHITE);
	else if (color == BLUE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + BLUE);
	else if (color == GREEN)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + GREEN);
	else if (color == RED)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + RED);
	else if (color == GOLD)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + GOLD);
	else if (color == BROWN)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + BROWN);
	else if (color == LIGHT_BLUE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + LIGHT_BLUE);
	else if (color == LIGHT_GREEN)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + LIGHT_GREEN);
	else if (color == LIGHT_RED)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + LIGHT_RED);
	else if (color == LIGHT_GOLD)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + LIGHT_GOLD);
}

void print_void(void) // ��ĭ ���
{
	printf("                                                            ��                                                                                                                       ��\n");
}

void boardpan(int nob_card[], int dev_card1[],  int dev_card2[], int dev_card3[])
{
	int a[5] = { 0, 1, 2, 3, 4 };
	int b[4] = { 0, 1, 2, 3 };
	int c[4] = { 0, 1, 2, 3 };
	int d[4] = { 0, 1,2 , 3 };

	printf("                                                             Splendor                                                                                          made by. 6�� <���ϴ�>\n");

	//������ ǥ��
	color(WHITE);
	printf("                                                            ��");
	for (int i = 0; i < 59; i++)
		printf("��");
	printf("��");
	for (int i = 0; i < 59; i++)
		printf("��");
	printf("��");
	printf("\n");

	if (current_player == 0) // player1 �����϶�
	{
		printf("                                                            �� ");
		GROUND_color(WHITE);
		printf("player1                                                   ");
		color(WHITE);
		printf("��");
		printf(" player2                                                   ");
		printf("��\n");
		printf("                                                            �� ");
		GROUND_color(WHITE);
		printf("���� : %d                                                  ", player[0].score);
		color(WHITE);
		printf("��");
		printf(" ���� : %d                                                  ", player[1].score);
		printf("��");
		color(WHITE);
		printf("\n");

		//���� ��ū ���
		printf("                                                            �� ");
		GROUND_color(WHITE);
		printf("���� ��ū : ");
		GROUND_color(WHITE);
		printf("%d ", player[0].white);
		GROUND_color(BLUE);
		printf("%d ", player[0].blue);
		GROUND_color(RED);
		printf("%d ", player[0].red);
		GROUND_color(GREEN);
		printf("%d ", player[0].green);
		GROUND_color(BROWN);
		printf("%d ", player[0].brown);
		GROUND_color(GOLD);
		printf("%d ", player[0].gold);
		GROUND_color(WHITE);
		printf("                                  ");
		color(WHITE);
		printf("��");
		printf(" ���� ��ū : ");
		printf("%d ", player[1].white);
		color(BLUE);
		printf("%d ", player[1].blue);
		color(RED);
		printf("%d ", player[1].red);
		color(GREEN);
		printf("%d ", player[1].green);
		color(BROWN);
		printf("%d ", player[1].brown);
		color(GOLD);
		printf("%d ", player[1].gold);
		color(WHITE);
		printf("                                  ��\n");

		//ī�� ��ū ���
		printf("                                                            �� ");
		GROUND_color(WHITE);
		printf("ī�� ��ū : ");
		printf("%d ", player[0].card_white);
		GROUND_color(BLUE);
		printf("%d ", player[0].card_blue);
		GROUND_color(RED);
		printf("%d ", player[0].card_red);
		GROUND_color(GREEN);
		printf("%d ", player[0].card_green);
		GROUND_color(BROWN);
		printf("%d ", player[0].card_brown);
		GROUND_color(WHITE);
		printf("                                    ");
		color(WHITE);
		printf("��");
		printf(" ī�� ��ū : ");
		printf("%d ", player[1].card_white);
		color(BLUE);
		printf("%d ", player[1].card_blue);
		color(RED);
		printf("%d ", player[1].card_red);
		color(GREEN);
		printf("%d ", player[1].card_green);
		color(BROWN);
		printf("%d ", player[1].card_brown);
		color(WHITE);
		printf("                                    ��\n");
	}
	else if (current_player == 1) // player2���� �϶�
	{
		printf("                                                            ��");
		color(WHITE);
		printf(" player1                                                   ");
		printf("�� ");
		GROUND_color(WHITE);
		printf("player2                                                   ");
		color(WHITE);
		printf("��");
		printf("\n");

		printf("                                                            �� ");
		printf("���� : %d                                                  ", player[0].score);
		printf("�� ");
		GROUND_color(WHITE);
		printf("���� : %d                                                  ", player[1].score);
		color(WHITE);
		printf("��");
		printf("\n");

		//���� ��ū ���
		printf("                                                            �� ���� ��ū : ");
		color(WHITE);
		printf("%d ", player[0].white);
		color(BLUE);
		printf("%d ", player[0].blue);
		color(RED);
		printf("%d ", player[0].red);
		color(GREEN);
		printf("%d ", player[0].green);
		color(BROWN);
		printf("%d ", player[0].brown);
		color(GOLD);
		printf("%d ", player[0].gold);
		color(WHITE);
		printf("                                  �� ");
		GROUND_color(WHITE);
		printf("���� ��ū : ");
		printf("%d ", player[1].white);
		GROUND_color(BLUE);
		printf("%d ", player[1].blue);
		GROUND_color(RED);
		printf("%d ", player[1].red);
		GROUND_color(GREEN);
		printf("%d ", player[1].green);
		GROUND_color(BROWN);
		printf("%d ", player[1].brown);
		GROUND_color(GOLD);
		printf("%d ", player[1].gold);
		GROUND_color(WHITE);
		printf("                                  ");
		color(WHITE);
		printf("��");
		printf("\n");

		//ī�� ��ū ���
		printf("                                                            �� ī�� ��ū : ");
		color(WHITE);
		printf("%d ", player[0].card_white);
		color(BLUE);
		printf("%d ", player[0].card_blue);
		color(RED);
		printf("%d ", player[0].card_red);
		color(GREEN);
		printf("%d ", player[0].card_green);
		color(BROWN);
		printf("%d ", player[0].card_brown);
		color(WHITE);
		printf("                                    �� ");
		GROUND_color(WHITE);
		printf("ī�� ��ū : ");
		printf("%d ", player[1].card_white);
		GROUND_color(BLUE);
		printf("%d ", player[1].card_blue);
		GROUND_color(RED);
		printf("%d ", player[1].card_red);
		GROUND_color(GREEN);
		printf("%d ", player[1].card_green);
		GROUND_color(BROWN);
		printf("%d ", player[1].card_brown);
		GROUND_color(WHITE);
		printf("                                    ");
		color(WHITE);
		printf("��");
		printf("\n");
	}

	else // player1, 2 �� ������ ���ʵ� �ƴ� ��
	{
		printf("                                                            ��");
		color(WHITE);
		printf(" player1                                                   ");
		printf("��");
		color(WHITE);
		printf(" player2                                                   ");
		color(WHITE);
		printf("��\n");
		printf("                                                            ��");
		color(WHITE);
		printf(" ���� : %d                                                  ", player[0].score);
		printf("��");
		color(WHITE);
		printf(" ���� : %d                                                  ", player[1].score);
		printf("��\n");
		color(WHITE);

		//���� ��ū ���
		printf("                                                            �� ���� ��ū : ");
		color(WHITE);
		printf("%d ", player[0].white);
		color(BLUE);
		printf("%d ", player[0].blue);
		color(RED);
		printf("%d ", player[0].red);
		color(GREEN);
		printf("%d ", player[0].green);
		color(BROWN);
		printf("%d ", player[0].brown);
		color(GOLD);
		printf("%d ", player[0].gold);
		color(WHITE);
		printf("                                  �� ���� ��ū : ");
		printf("%d ", player[1].white);
		color(BLUE);
		printf("%d ", player[1].blue);
		color(RED);
		printf("%d ", player[1].red);
		color(GREEN);
		printf("%d ", player[1].green);
		color(BROWN);
		printf("%d ", player[1].brown);
		color(GOLD);
		printf("%d ", player[1].gold);
		color(WHITE);
		printf("                                  ��\n");

		//ī�� ��ū ���
		printf("                                                            �� ī�� ��ū : ");
		color(WHITE);
		printf("%d ", player[0].card_white);
		color(BLUE);
		printf("%d ", player[0].card_blue);
		color(RED);
		printf("%d ", player[0].card_red);
		color(GREEN);
		printf("%d ", player[0].card_green);
		color(BROWN);
		printf("%d ", player[0].card_brown);
		color(WHITE);
		printf("                                    �� ī�� ��ū : ");
		printf("%d ", player[1].card_white);
		color(BLUE);
		printf("%d ", player[1].card_blue);
		color(RED);
		printf("%d ", player[1].card_red);
		color(GREEN);
		printf("%d ", player[1].card_green);
		color(BROWN);
		printf("%d ", player[1].card_brown);
		color(WHITE);
		printf("                                    ��\n");
	}

	//������ ǥ��
	printf("                                                            ��");
	for (int i = 0; i < 59; i++)
		printf("��");
	printf("��");
	for (int i = 0; i < 59; i++)
		printf("��");
	printf("��");
	printf("\n");

	//��ĭ
	print_void();

	//���� ī�� ���
	printf("                                                            ��                                                     ");
	color(LIGHT_RED);
	printf("--���� ī��--");
	color(WHITE);
	printf("                                                     ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_RED);
	printf("���������������������� ���������������������� ���������������������� ���������������������� ����������������������                              ");
	color(WHITE);
	printf("��\n");

	printf("                                                            ��                              ");
	color(LIGHT_RED);
	printf("��       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("�� ��       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("�� ��       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("�� ��       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("�� ��       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("�� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_RED);
	printf("�� ");
	color(WHITE);
	printf("�� %d", nob[nob_card[a[0]]].white);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(WHITE);
	printf("�� %d", nob[nob_card[a[1]]].white);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(WHITE);
	printf("�� %d", nob[nob_card[a[2]]].white);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(WHITE);
	printf("�� %d", nob[nob_card[a[3]]].white);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(WHITE);
	printf("�� %d", nob[nob_card[a[4]]].white);
	color(LIGHT_RED);
	printf("    �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_RED);
	printf("�� ");
	color(BLUE);
	printf("�� %d", nob[nob_card[a[0]]].blue);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(BLUE);
	printf("�� %d", nob[nob_card[a[1]]].blue);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(BLUE);
	printf("�� %d", nob[nob_card[a[2]]].blue);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(BLUE);
	printf("�� %d", nob[nob_card[a[3]]].blue);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(BLUE);
	printf("�� %d", nob[nob_card[a[4]]].blue);
	color(LIGHT_RED);
	printf("    �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_RED);
	printf("�� ");
	color(RED);
	printf("�� %d", nob[nob_card[a[0]]].red);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(RED);
	printf("�� %d", nob[nob_card[a[1]]].red);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(RED);
	printf("�� %d", nob[nob_card[a[2]]].red);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(RED);
	printf("�� %d", nob[nob_card[a[3]]].red);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(RED);
	printf("�� %d", nob[nob_card[a[4]]].red);
	color(LIGHT_RED);
	printf("    �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_RED);
	printf("�� ");
	color(GREEN);
	printf("�� %d", nob[nob_card[a[0]]].green);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(GREEN);
	printf("�� %d", nob[nob_card[a[1]]].green);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(GREEN);
	printf("�� %d", nob[nob_card[a[2]]].green);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(GREEN);
	printf("�� %d", nob[nob_card[a[3]]].green);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(GREEN);
	printf("�� %d", nob[nob_card[a[4]]].green);
	color(LIGHT_RED);
	printf("    �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_RED);
	printf("�� ");
	color(BROWN);
	printf("�� %d", nob[nob_card[a[0]]].brown);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(BROWN);
	printf("�� %d", nob[nob_card[a[1]]].brown);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(BROWN);
	printf("�� %d", nob[nob_card[a[2]]].brown);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(BROWN);
	printf("�� %d", nob[nob_card[a[3]]].brown);
	color(LIGHT_RED);
	printf("    �� �� ");
	color(BROWN);
	printf("�� %d", nob[nob_card[a[4]]].brown);
	color(LIGHT_RED);
	printf("    �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_RED);
	printf("���������������������� ���������������������� ���������������������� ���������������������� ���������������������� ");
	color(WHITE);
	printf("                             ��\n");

	//��ĭ
	print_void();

	//���� ī�� ���
	color(WHITE);
	printf("                                                            ��                                                 ");
	color(LIGHT_GREEN);
	printf("-- 1�ܰ� ���� ī��--");
	color(WHITE);
	printf("                                                  ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("�� ");
	color(WHITE);
	printf("%d", card1[dev_card1[b[0]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[dev_card1[b[0]]].value);
	color(LIGHT_GREEN);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card1[dev_card1[b[1]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[dev_card1[b[1]]].value);
	color(LIGHT_GREEN);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card1[dev_card1[b[2]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[dev_card1[b[2]]].value);
	color(LIGHT_GREEN);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card1[dev_card1[b[3]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[dev_card1[b[3]]].value);
	color(LIGHT_GREEN);
	printf("�� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("�� ");
	color(WHITE);
	printf("�� %d", card1[dev_card1[b[0]]].white);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card1[dev_card1[b[1]]].white);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card1[dev_card1[b[2]]].white);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card1[dev_card1[b[3]]].white);
	color(LIGHT_GREEN);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("�� ");
	color(BLUE);
	printf("�� %d", card1[dev_card1[b[0]]].blue);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card1[dev_card1[b[1]]].blue);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card1[dev_card1[b[2]]].blue);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card1[dev_card1[b[3]]].blue);
	color(LIGHT_GREEN);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("�� ");
	color(RED);
	printf("�� %d", card1[dev_card1[b[0]]].red);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card1[dev_card1[b[1]]].red);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card1[dev_card1[b[2]]].red);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card1[dev_card1[b[3]]].red);
	color(LIGHT_GREEN);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("�� ");
	color(GREEN);
	printf("�� %d", card1[dev_card1[b[0]]].green);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card1[dev_card1[b[1]]].green);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card1[dev_card1[b[2]]].green);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card1[dev_card1[b[3]]].green);
	color(LIGHT_GREEN);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("�� ");
	color(BROWN);
	printf("�� %d", card1[dev_card1[b[0]]].brown);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card1[dev_card1[b[1]]].brown);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card1[dev_card1[b[2]]].brown);
	color(LIGHT_GREEN);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card1[dev_card1[b[3]]].brown);
	color(LIGHT_GREEN);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GREEN);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("                             ��\n");


	
	color(WHITE);
	printf("                                                            ��                                                 ");
	color(LIGHT_GOLD);
	printf("-- 2�ܰ� ���� ī��--");
	color(WHITE);
	printf("                                                  ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("�� ");
	color(WHITE);
	printf("%d", card2[dev_card2[c[0]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[dev_card2[c[0]]].value);
	color(LIGHT_GOLD);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card2[dev_card2[c[1]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[dev_card2[c[1]]].value);
	color(LIGHT_GOLD);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card2[dev_card2[c[2]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[dev_card2[c[2]]].value);
	color(LIGHT_GOLD);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card2[dev_card2[c[3]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[dev_card2[c[3]]].value);
	color(LIGHT_GOLD);
	printf("�� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("�� ");
	color(WHITE);
	printf("�� %d", card2[dev_card2[c[0]]].white);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card2[dev_card2[c[1]]].white);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card2[dev_card2[c[2]]].white);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card2[dev_card2[c[3]]].white);
	color(LIGHT_GOLD);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("�� ");
	color(BLUE);
	printf("�� %d", card2[dev_card2[c[0]]].blue);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card2[dev_card2[c[1]]].blue);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card2[dev_card2[c[2]]].blue);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card2[dev_card2[c[3]]].blue);
	color(LIGHT_GOLD);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("�� ");
	color(RED);
	printf("�� %d", card2[dev_card2[c[0]]].red);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card2[dev_card2[c[1]]].red);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card2[dev_card2[c[2]]].red);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card2[dev_card2[c[3]]].red);
	color(LIGHT_GOLD);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("�� ");
	color(GREEN);
	printf("�� %d", card2[dev_card2[c[0]]].green);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card2[dev_card2[c[1]]].green);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card2[dev_card2[c[2]]].green);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card2[dev_card2[c[3]]].green);
	color(LIGHT_GOLD);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("�� ");
	color(BROWN);
	printf("�� %d", card2[dev_card2[c[0]]].brown);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card2[dev_card2[c[1]]].brown);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card2[dev_card2[c[2]]].brown);
	color(LIGHT_GOLD);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card2[dev_card2[c[3]]].brown);
	color(LIGHT_GOLD);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_GOLD);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("                             ��\n");



	color(WHITE);
	printf("                                                            ��                                                 ");
	color(LIGHT_BLUE);
	printf("-- 3�ܰ� ���� ī��--");
	color(WHITE);
	printf("                                                  ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("�� ");
	color(WHITE);
	printf("%d", card3[dev_card3[d[0]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[dev_card3[d[0]]].value);
	color(LIGHT_BLUE);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card3[dev_card3[d[1]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[dev_card3[d[1]]].value);
	color(LIGHT_BLUE);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card3[dev_card3[d[2]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[dev_card3[d[2]]].value);
	color(LIGHT_BLUE);
	printf("�� �� ");
	color(WHITE);
	printf("%d", card3[dev_card3[d[3]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[dev_card3[d[3]]].value);
	color(LIGHT_BLUE);
	printf("�� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("�� ");
	color(WHITE);
	printf("�� %d", card3[dev_card3[d[0]]].white);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card3[dev_card3[d[1]]].white);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card3[dev_card3[d[2]]].white);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(WHITE);
	printf("�� %d", card3[dev_card3[d[3]]].white);
	color(LIGHT_BLUE);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("�� ");
	color(BLUE);
	printf("�� %d", card3[dev_card3[d[0]]].blue);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card3[dev_card3[d[1]]].blue);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card3[dev_card3[d[2]]].blue);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(BLUE);
	printf("�� %d", card3[dev_card3[d[3]]].blue);
	color(LIGHT_BLUE);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("�� ");
	color(RED);
	printf("�� %d", card3[dev_card3[d[0]]].red);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card3[dev_card3[d[1]]].red);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card3[dev_card3[d[2]]].red);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(RED);
	printf("�� %d", card3[dev_card3[d[3]]].red);
	color(LIGHT_BLUE);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("�� ");
	color(GREEN);
	printf("�� %d", card3[dev_card3[d[0]]].green);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card3[dev_card3[d[1]]].green);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card3[dev_card3[d[2]]].green);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(GREEN);
	printf("�� %d", card3[dev_card3[d[3]]].green);
	color(LIGHT_BLUE);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("�� ");
	color(BROWN);
	printf("�� %d", card3[dev_card3[d[0]]].brown);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card3[dev_card3[d[1]]].brown);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card3[dev_card3[d[2]]].brown);
	color(LIGHT_BLUE);
	printf("       �� �� ");
	color(BROWN);
	printf("�� %d", card3[dev_card3[d[3]]].brown);
	color(LIGHT_BLUE);
	printf("       �� ");
	color(WHITE);
	printf("                             ��\n");

	printf("                                                            ��                              ");
	color(LIGHT_BLUE);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("                             ��\n");


	//��ĭ
	print_void();

	//��ū â�� ���� ��ū ���
	printf("                                                            ��                                     �� %d    ", white);
	color(BLUE);
	printf("�� %d    ", blue);
	color(RED);
	printf("�� %d    ", red);
	color(GREEN);
	printf("�� %d    ", green);
	color(BROWN);
	printf("�� %d    ", brown);
	color(GOLD);
	printf("�� %d", gold);
	color(WHITE);
	printf("                                      ��\n");

	//��ĭ
	print_void();

	//������ ǥ��
	color(WHITE);
	printf("                                                            ��");
	for (int i = 0; i < 59; i++)
		printf("��");
	printf("��");
	for (int i = 0; i < 59; i++)
		printf("��");
	printf("��");
	printf("\n");


	if (current_player == 2) // player3 �����϶�
	{
		printf("                                                            �� ");
		GROUND_color(WHITE);
		printf("player3                                                   ");
		color(WHITE);
		printf("��");
		printf(" player4                                                   ");
		printf("��");
		printf("\n");

		printf("                                                            �� ");
		GROUND_color(WHITE);
		printf("���� : %d                                                  ", player[2].score);
		color(WHITE);
		printf("��");
		printf(" ���� : %d                                                  ", player[3].score);
		printf("��\n");
		color(WHITE);

		//���� ��ū ���
		printf("                                                            �� ");
		GROUND_color(WHITE);
		printf("���� ��ū : ");
		GROUND_color(WHITE);
		printf("%d ", player[2].white);
		GROUND_color(BLUE);
		printf("%d ", player[2].blue);
		GROUND_color(RED);
		printf("%d ", player[2].red);
		GROUND_color(GREEN);
		printf("%d ", player[2].green);
		GROUND_color(BROWN);
		printf("%d ", player[2].brown);
		GROUND_color(GOLD);
		printf("%d ", player[2].gold);
		GROUND_color(WHITE);
		printf("                                  ");
		color(WHITE);
		printf("��");
		printf(" ���� ��ū : ");
		printf("%d ", player[3].white);
		color(BLUE);
		printf("%d ", player[3].blue);
		color(RED);
		printf("%d ", player[3].red);
		color(GREEN);
		printf("%d ", player[3].green);
		color(BROWN);
		printf("%d ", player[3].brown);
		color(GOLD);
		printf("%d ", player[3].gold);
		color(WHITE);
		printf("                                  ��\n");

		//ī�� ��ū ���
		printf("                                                            �� ");
		GROUND_color(WHITE);
		printf("ī�� ��ū : ");
		printf("%d ", player[2].card_white);
		GROUND_color(BLUE);
		printf("%d ", player[2].card_blue);
		GROUND_color(RED);
		printf("%d ", player[2].card_red);
		GROUND_color(GREEN);
		printf("%d ", player[2].card_green);
		GROUND_color(BROWN);
		printf("%d ", player[2].card_brown);
		GROUND_color(WHITE);
		printf("                                    ");
		color(WHITE);
		printf("��");
		printf(" ī�� ��ū : ");
		printf("%d ", player[3].card_white);
		color(BLUE);
		printf("%d ", player[3].card_blue);
		color(RED);
		printf("%d ", player[3].card_red);
		color(GREEN);
		printf("%d ", player[3].card_green);
		color(BROWN);
		printf("%d ", player[3].card_brown);
		color(WHITE);
		printf("                                    ��");
		printf("\n");
	}
	else if (current_player == 3) // player4���� �϶�
	{
		printf("                                                            �� ");
		color(WHITE);
		printf("player3                                                   ");
		printf("�� ");
		GROUND_color(WHITE);
		printf("player4                                                   ");
		color(WHITE);
		printf("��");
		printf("\n");

		printf("                                                            �� ");
		printf("���� : %d                                                  ", player[2].score);
		printf("�� ");
		GROUND_color(WHITE);
		printf("���� : %d                                                  ", player[3].score);
		color(WHITE);
		printf("��");
		printf("\n");

		//���� ��ū ���
		printf("                                                            �� ���� ��ū : ");
		color(WHITE);
		printf("%d ", player[2].white);
		color(BLUE);
		printf("%d ", player[2].blue);
		color(RED);
		printf("%d ", player[2].red);
		color(GREEN);
		printf("%d ", player[2].green);
		color(BROWN);
		printf("%d ", player[2].brown);
		color(GOLD);
		printf("%d ", player[2].gold);
		color(WHITE);
		printf("                                  �� ");
		GROUND_color(WHITE);
		printf("���� ��ū : ");
		printf("%d ", player[3].white);
		GROUND_color(BLUE);
		printf("%d ", player[3].blue);
		GROUND_color(RED);
		printf("%d ", player[3].red);
		GROUND_color(GREEN);
		printf("%d ", player[3].green);
		GROUND_color(BROWN);
		printf("%d ", player[3].brown);
		GROUND_color(GOLD);
		printf("%d ", player[3].gold);
		GROUND_color(WHITE);
		printf("                                  ");
		color(WHITE);
		printf("��\n");

		//ī�� ��ū ���
		printf("                                                            �� ī�� ��ū : ");
		color(WHITE);
		printf("%d ", player[2].card_white);
		color(BLUE);
		printf("%d ", player[2].card_blue);
		color(RED);
		printf("%d ", player[2].card_red);
		color(GREEN);
		printf("%d ", player[2].card_green);
		color(BROWN);
		printf("%d ", player[2].card_brown);
		color(WHITE);
		printf("                                    �� ");
		GROUND_color(WHITE);
		printf("ī�� ��ū : ");
		printf("%d ", player[3].card_white);
		GROUND_color(BLUE);
		printf("%d ", player[3].card_blue);
		GROUND_color(RED);
		printf("%d ", player[3].card_red);
		GROUND_color(GREEN);
		printf("%d ", player[3].card_green);
		GROUND_color(BROWN);
		printf("%d ", player[3].card_brown);
		GROUND_color(WHITE);
		printf("                                    ");
		color(WHITE);
		printf("��");
		printf("\n");
	}

	else // player3, 4 �� ������ ���ʵ� �ƴ� ��
	{
		printf("                                                            ��");
		color(WHITE);
		printf(" player3                                                   ");
		printf("��");
		color(WHITE);
		printf(" player4                                                   ");
		color(WHITE);
		printf("��\n");

		printf("                                                            ��");
		color(WHITE);
		printf(" ���� : %d                                                  ", player[2].score);
		printf("��");
		color(WHITE);
		printf(" ���� : %d                                                  ", player[3].score);
		printf("��\n");
		color(WHITE);

		//���� ��ū ���
		printf("                                                            �� ���� ��ū : ");
		color(WHITE);
		printf("%d ", player[2].white);
		color(BLUE);
		printf("%d ", player[2].blue);
		color(RED);
		printf("%d ", player[2].red);
		color(GREEN);
		printf("%d ", player[2].green);
		color(BROWN);
		printf("%d ", player[2].brown);
		color(GOLD);
		printf("%d ", player[2].gold);
		color(WHITE);
		printf("                                  �� ���� ��ū : ");
		printf("%d ", player[3].white);
		color(BLUE);
		printf("%d ", player[3].blue);
		color(RED);
		printf("%d ", player[3].red);
		color(GREEN);
		printf("%d ", player[3].green);
		color(BROWN);
		printf("%d ", player[3].brown);
		color(GOLD);
		printf("%d ", player[3].gold);
		color(WHITE);
		printf("                                  ��\n");

		//ī�� ��ū ���
		printf("                                                            �� ī�� ��ū : ");
		color(WHITE);
		printf("%d ", player[2].card_white);
		color(BLUE);
		printf("%d ", player[2].card_blue);
		color(RED);
		printf("%d ", player[2].card_red);
		color(GREEN);
		printf("%d ", player[2].card_green);
		color(BROWN);
		printf("%d ", player[2].card_brown);
		color(WHITE);
		printf("                                    �� ī�� ��ū : ");
		printf("%d ", player[3].card_white);
		color(BLUE);
		printf("%d ", player[3].card_blue);
		color(RED);
		printf("%d ", player[3].card_red);
		color(GREEN);
		printf("%d ", player[3].card_green);
		color(BROWN);
		printf("%d ", player[3].card_brown);
		color(WHITE);
		printf("                                    ��\n");
	}

	//������ ǥ��
	printf("                                                            ��");
	for (int i = 0; i < 59; i++)
		printf("��");
	printf("��");
	for (int i = 0; i < 59; i++)
		printf("��");
	printf("��");
	printf("\n");
}

void print_jowel(char jowel[]) // ī�� ���� ��ū ���
{
	if (!strcmp(jowel, "white"))
	{
		color(WHITE);
		printf("��");
	}

	if (!strcmp(jowel, "blue"))
	{
		color(BLUE);
		printf("��");
	}

	if (!strcmp(jowel, "red"))
	{
		color(RED);
		printf("��");
	}

	if (!strcmp(jowel, "green"))
	{
		color(GREEN);
		printf("��");
	}

	if (!strcmp(jowel, "brown"))
	{
		color(BROWN);
		printf("��");
	}
}