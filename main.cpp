#include <stdio.h>
#include <windows.h>

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

int white = 7;
int blue = 7;
int red = 7;
int green = 7;
int brown = 7;
int gold = 5;
int current_player = 0; // ���� �÷��̾ ��Ÿ���� ���� ( �� �������� 0�̸� player1 , 1�̸� player2, .... -> player (current_player + 1) )

struct develop_1 {
	int point[40] = { 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	const char* value[40] = { "brown", "red", "blue", "green", "white", "blue", "blue", "blue", "blue", "blue",  "blue",  "blue", "green", "green",  "green",  "green",  "green",  "green",  "green", "brown", "brown" , "brown" , "brown" , "brown" , "brown" , "brown", "red", "red" , "red" , "red" , "red" , "red" , "red" , "white", "white" , "white" , "white" , "white" , "white" , "white" };
	int white[40] = { 0, 4, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 2, 1, 0, 2, 1, 0, 0, 1, 2, 2, 2, 1, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 3 };
	int blue[40] = { 4, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 3, 0, 2, 1, 0, 0, 2, 0, 1, 0, 1, 2, 0, 0, 0, 2, 1, 1, 3, 0, 2, 1 };
	int red[40] = { 0, 0, 4, 0, 0, 1, 2, 1, 2, 0, 0, 0, 3, 2, 2, 1, 1, 0, 0, 1, 1, 1, 0, 3, 1, 0, 0, 2, 0, 0, 0, 0, 1, 0, 1, 1, 0, 2, 0, 0 };
	int green[40] = { 0, 0, 0, 0, 4, 1, 2, 3, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 2, 0, 1, 3, 1, 1, 2, 1, 0, 1, 1, 0, 1, 0, 0, 2, 1, 0, 0, 2, 0 };
	int brown[40] = { 0, 0, 0, 4, 0, 1, 0, 0, 1, 3, 2, 2, 0, 0, 2, 1, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 2, 3, 2, 1, 1, 0, 1, 1, 1 };
};

struct develop_2 {
	int point[30] = { 2,2,1,2,2,3,2,1,2,1,1,3,1,1,1,2,2,2,1,2,2,1,2,3,1,3,2,3,2,2 };
	const char* value[30] = { "brown","blue", "green", "white", "green", "white", "white", "green", "blue", "white", "red","blue", "brown", "blue", "red", "brown", "green", "green", "brown", "blue", "red", "blue", "red", "red", "white", "green", "white", "brown", "brown", "red" };
	int white[30] = { 5,5,2,0,4,6,0,3,2,0,0,0,3,0,2,0,0,0,3,0,0,0,1,0,2,0,0,0,0,3 };
	int blue[30] = { 0,3,3,0,2,0,0,0,0,0,3,6,2,2,0,0,0,5,0,5,0,2,4,0,3,0,0,0,1,0 };
	int red[30] = { 0,0,0,4,0,0,5,3,1,2,2,0,0,0,2,3,0,0,0,0,0,3,0,6,3,0,5,0,2,0 };
	int green[30] = { 0,0,0,1,0,0,0,2,0,3,0,0,2,3,0,5,5,3,3,0,0,2,2,0,0,6,0,0,4,0 };
	int brown[30] = { 0,0,2,2,1,0,0,0,4,2,3,0,0,3,3,0,0,0,2,0,5,0,0,0,0,0,3,6,0,5 };
};

struct develop_3 {
	int point[20] = { 4,4,4,3,4,3,4,3,5,3,4,5,5,4,5,4,4,4,5,3 };
	const char* value[20] = { "blue","green","red","brown","white","green","brown","blue","brown","white","red","red","blue","white","green","brown","green","blue","white","red" };
	int white[20] = { 7,3,0,3,3,5,0,3,0,0,0,0,7,0,0,0,0,6,3,3 };
	int blue[20] = { 0,6,0,3,0,3,0,0,0,3,3,0,3,0,7,0,7,3,0,5 };
	int red[20] = { 0,0,0,3,3,3,7,3,7,5,3,3,0,0,0,6,0,0,0,0 };
	int green[20] = { 0,3,7,5,0,0,0,3,0,3,6,7,0,0,3,3,0,0,0,3 };
	int brown[20] = { 0,0,0,0,6,3,0,5,3,3,0,0,0,7,0,3,0,3,7,3 };
};

struct cha {
	int point[10] = { 3,3,3,3,3,3,3,3,3,3 };
	char value[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int white[10] = { 4,0,0,4,3,0,3,0,0,4 };
	int blue[10] = { 4,0,0,0,3,4,3,3,0,0 };
	int red[10] = { 0,4,4,3,0,0,0,3,3,0 };
	int green[10] = { 0,0,4,0,0,4,3,3,3,0 };
	int brown[10] = { 0,4,0,3,3,0,0,0,3,4 };
};

struct Player {
	int score[4] = { 0 }; // �� �÷��̾��� ����

	int white[4] = { 0 }; // �� �÷��̾��� ���� ��ū
	int blue[4] = { 0 };
	int red[4] = { 0 };
	int green[4] = { 0 };
	int brown[4] = { 0 };
	int gold[4] = { 0 };

	int card_white[4] = { 0 }; // �� �÷��̾��� ī�� ��ū
	int card_blue[4] = { 0 };
	int card_red[4] = { 0 };
	int card_green[4] = { 0 };
	int card_brown[4] = { 0 };
};

struct develop_1 card1;
struct develop_2 card2;
struct develop_3 card3;
struct cha nob;
struct Player player;

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
	printf("��                                                             ��\n");
}

void boardpan(void)
{
	//������ ǥ��
	color(WHITE);
	printf("��");
	for (int i = 0; i < 30; i++)
		printf("��");
	printf("��");
	for (int i = 0; i < 30; i++)
		printf("��");
	printf("��");
	printf("\n");

	if (current_player == 0) // player1 �����϶�
	{
		printf("�� ");
		GROUND_color(WHITE);
		printf("player1                      ");
		color(WHITE);
		printf("��");
		printf(" player2                      ");
		printf("��\n");
		printf("�� ");
		GROUND_color(WHITE);
		printf("���� : %d                     ", player.score[0]);
		color(WHITE);
		printf("��");
		printf(" ���� : %d                     ", player.score[1]);
		printf("��");
		color(WHITE);
		printf("\n");

		//���� ��ū ���
		printf("�� ");
		GROUND_color(WHITE);
		printf("���� ��ū : ");
		GROUND_color(WHITE);
		printf("%d ", player.white[0]);
		GROUND_color(BLUE);
		printf("%d ", player.blue[0]);
		GROUND_color(RED);
		printf("%d ", player.red[0]);
		GROUND_color(GREEN);
		printf("%d ", player.green[0]);
		GROUND_color(BROWN);
		printf("%d ", player.brown[0]);
		GROUND_color(GOLD);
		printf("%d ", player.gold[0]);
		GROUND_color(WHITE);
		printf("     ");
		color(WHITE);
		printf("��");
		printf(" ���� ��ū : ");
		printf("%d ", player.white[1]);
		color(BLUE);
		printf("%d ", player.blue[1]);
		color(RED);
		printf("%d ", player.red[1]);
		color(GREEN);
		printf("%d ", player.green[1]);
		color(BROWN);
		printf("%d ", player.brown[1]);
		color(GOLD);
		printf("%d ", player.gold[1]);
		color(WHITE);
		printf("     ��\n");

		//ī�� ��ū ���
		printf("�� ");
		GROUND_color(WHITE);
		printf("ī�� ��ū : ");
		printf("%d ", player.card_white[0]);
		GROUND_color(BLUE);
		printf("%d ", player.card_blue[0]);
		GROUND_color(RED);
		printf("%d ", player.card_red[0]);
		GROUND_color(GREEN);
		printf("%d ", player.card_green[0]);
		GROUND_color(BROWN);
		printf("%d ", player.card_brown[0]);
		GROUND_color(WHITE);
		printf("       ");
		color(WHITE);
		printf("��");
		printf(" ī�� ��ū : ");
		printf("%d ", player.card_white[1]);
		color(BLUE);
		printf("%d ", player.card_blue[1]);
		color(RED);
		printf("%d ", player.card_red[1]);
		color(GREEN);
		printf("%d ", player.card_green[1]);
		color(BROWN);
		printf("%d ", player.card_brown[1]);
		color(WHITE);
		printf("       ��\n");
	}
	else if(current_player == 1) // player2���� �϶�
	{
		printf("��");
		color(WHITE);
		printf(" player1                      ");
		printf("�� ");
		GROUND_color(WHITE);
		printf("player2                      ");
		color(WHITE);
		printf("��");
		printf("\n");
		printf("�� ");
		printf("���� : %d                     ", player.score[0]);
		printf("�� ");
		GROUND_color(WHITE);
		printf("���� : %d                     ", player.score[1]);
		color(WHITE);
		printf("��");
		printf("\n");

		//���� ��ū ���
		printf("�� ���� ��ū : ");
		color(WHITE);
		printf("%d ", player.white[0]);
		color(BLUE);
		printf("%d ", player.blue[0]);
		color(RED);
		printf("%d ", player.red[0]);
		color(GREEN);
		printf("%d ", player.green[0]);
		color(BROWN);
		printf("%d ", player.brown[0]);
		color(GOLD);
		printf("%d ", player.gold[0]);
		color(WHITE);
		printf("     �� ");
		GROUND_color(WHITE);
		printf("���� ��ū : ");
		printf("%d ", player.white[1]);
		GROUND_color(BLUE);
		printf("%d ", player.blue[1]);
		GROUND_color(RED);
		printf("%d ", player.red[1]);
		GROUND_color(GREEN);
		printf("%d ", player.green[1]);
		GROUND_color(BROWN);
		printf("%d ", player.brown[1]);
		GROUND_color(GOLD);
		printf("%d ", player.gold[1]);
		GROUND_color(WHITE);
		printf("     ");
		color(WHITE);
		printf("��");
		printf("\n");

		//ī�� ��ū ���
		printf("�� ī�� ��ū : ");
		color(WHITE);
		printf("%d ", player.card_white[0]);
		color(BLUE);
		printf("%d ", player.card_blue[0]);
		color(RED);
		printf("%d ", player.card_red[0]);
		color(GREEN);
		printf("%d ", player.card_green[0]);
		color(BROWN);
		printf("%d ", player.card_brown[0]);
		color(WHITE);
		printf("       �� ");
		GROUND_color(WHITE);
		printf("ī�� ��ū : ");
		printf("%d ", player.card_white[1]);
		GROUND_color(BLUE);
		printf("%d ", player.card_blue[1]);
		GROUND_color(RED);
		printf("%d ", player.card_red[1]);
		GROUND_color(GREEN);
		printf("%d ", player.card_green[1]);
		GROUND_color(BROWN);
		printf("%d ", player.card_brown[1]);
		GROUND_color(WHITE);
		printf("       ");
		color(WHITE);
		printf("��");
		printf("\n");
	}
	else // player1, 2 �� ������ ���ʵ� �ƴ� ��
	{
		printf("��");
		color(WHITE);
		printf(" player1                      ");
		printf("��");
		color(WHITE);
		printf(" player2                      ");
		color(WHITE);
		printf("��\n");
		printf("��");
		color(WHITE);
		printf(" ���� : %d                     ", player.score[0]);
		printf("��");
		color(WHITE);
		printf(" ���� : %d                     ", player.score[1]);
		printf("��\n");
		color(WHITE);

		//���� ��ū ���
		printf("�� ���� ��ū : ");
		color(WHITE);
		printf("%d ", player.white[0]);
		color(BLUE);
		printf("%d ", player.blue[0]);
		color(RED);
		printf("%d ", player.red[0]);
		color(GREEN);
		printf("%d ", player.green[0]);
		color(BROWN);
		printf("%d ", player.brown[0]);
		color(GOLD);
		printf("%d ", player.gold[0]);
		color(WHITE);
		printf("     �� ���� ��ū : ");
		printf("%d ", player.white[1]);
		color(BLUE);
		printf("%d ", player.blue[1]);
		color(RED);
		printf("%d ", player.red[1]);
		color(GREEN);
		printf("%d ", player.green[1]);
		color(BROWN);
		printf("%d ", player.brown[1]);
		color(GOLD);
		printf("%d ", player.gold[1]);
		color(WHITE);
		printf("     ��\n");

		//ī�� ��ū ���
		printf("�� ī�� ��ū : ");
		color(WHITE);
		printf("%d ", player.card_white[0]);
		color(BLUE);
		printf("%d ", player.card_blue[0]);
		color(RED);
		printf("%d ", player.card_red[0]);
		color(GREEN);
		printf("%d ", player.card_green[0]);
		color(BROWN);
		printf("%d ", player.card_brown[0]);
		color(WHITE);
		printf("       �� ī�� ��ū : ");
		printf("%d ", player.card_white[1]);
		color(BLUE);
		printf("%d ", player.card_blue[1]);
		color(RED);
		printf("%d ", player.card_red[1]);
		color(GREEN);
		printf("%d ", player.card_green[1]);
		color(BROWN);
		printf("%d ", player.card_brown[1]);
		color(WHITE);
		printf("       ��\n");
	}

	//������ ǥ��
	printf("��");
	for (int i = 0; i < 30; i++)
		printf("��");
	printf("��");
	for (int i = 0; i < 30; i++)
		printf("��");
	printf("��");
	printf("\n");
	
	//��ĭ
	print_void();

	//���� ī�� ���
	printf("��                        ");
	color(LIGHT_RED);
	printf("--���� ī��--");
	color(WHITE);
	printf("                        ��\n");
	printf("�� ");
	color(LIGHT_RED);
	printf("���������������������� ���������������������� ���������������������� ���������������������� ���������������������� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_RED);
	printf("��         �� ��         �� ��         �� ��         �� ��         �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_RED);
	printf("��         �� ��         �� ��         �� ��         �� ��         �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_RED);
	printf("��         �� ��         �� ��         �� ��         �� ��         �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_RED);
	printf("��         �� ��         �� ��         �� ��         �� ��         �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_RED);
	printf("��         �� ��         �� ��         �� ��         �� ��         �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_RED);
	printf("���������������������� ���������������������� ���������������������� ���������������������� ���������������������� ");
	color(WHITE);
	printf("��\n");

	//���� ī�� ���
	color(WHITE);
	printf("��                    ");
	color(LIGHT_GREEN);
	printf("-- 1�ܰ� ���� ī��--");
	color(WHITE);
	printf("                     ��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GREEN);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("��\n");

	color(WHITE);
	printf("��                    ");
	color(LIGHT_GOLD);
	printf("-- 2�ܰ� ���� ī��--");
	color(WHITE);
	printf("                     ��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_GOLD);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("��\n");	
	
	color(WHITE);
	printf("��                    ");
	color(LIGHT_BLUE);
	printf("-- 3�ܰ� ���� ī��--");
	color(WHITE);
	printf("                     ��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("��            �� ��            �� ��            �� ��            �� ");
	color(WHITE);
	printf("��\n");
	printf("�� ");
	color(LIGHT_BLUE);
	printf("���������������������������� ���������������������������� ���������������������������� ���������������������������� ");
	color(WHITE);
	printf("��\n");

	//��ĭ
	print_void();

	//��ū â�� ���� ��ū ���
	printf("��        �� %d    ", white);
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
	printf("         ��\n");

	//��ĭ
	print_void();

	//������ ǥ��
	color(WHITE);
	printf("��");
	for (int i = 0; i < 30; i++)
		printf("��");
	printf("��");
	for (int i = 0; i < 30; i++)
		printf("��");
	printf("��");
	printf("\n");


	if (current_player == 2) // player3 �����϶�
	{
		printf("�� ");
		GROUND_color(WHITE);
		printf("player3                      ");
		color(WHITE);
		printf("��");
		printf(" player4                      ");
		printf("��");
		printf("\n");
		printf("�� ");
		GROUND_color(WHITE);
		printf("���� : %d                     ", player.score[2]);
		color(WHITE);
		printf("��");
		printf(" ���� : %d                     ", player.score[3]);
		printf("��\n");
		color(WHITE);

		//���� ��ū ���
		printf("�� ");
		GROUND_color(WHITE);
		printf("���� ��ū : ");
		GROUND_color(WHITE);
		printf("%d ", player.white[2]);
		GROUND_color(BLUE);
		printf("%d ", player.blue[2]);
		GROUND_color(RED);
		printf("%d ", player.red[2]);
		GROUND_color(GREEN);
		printf("%d ", player.green[2]);
		GROUND_color(BROWN);
		printf("%d ", player.brown[2]);
		GROUND_color(GOLD);
		printf("%d ", player.gold[2]);
		GROUND_color(WHITE);
		printf("     ");
		color(WHITE);
		printf("��");
		printf(" ���� ��ū : ");
		printf("%d ", player.white[3]);
		color(BLUE);
		printf("%d ", player.blue[3]);
		color(RED);
		printf("%d ", player.red[3]);
		color(GREEN);
		printf("%d ", player.green[3]);
		color(BROWN);
		printf("%d ", player.brown[3]);
		color(GOLD);
		printf("%d ", player.gold[3]);
		color(WHITE);
		printf("     ��\n");

		//ī�� ��ū ���
		printf("�� ");
		GROUND_color(WHITE);
		printf("ī�� ��ū : ");
		printf("%d ", player.card_white[2]);
		GROUND_color(BLUE);
		printf("%d ", player.card_blue[2]);
		GROUND_color(RED);
		printf("%d ", player.card_red[2]);
		GROUND_color(GREEN);
		printf("%d ", player.card_green[2]);
		GROUND_color(BROWN);
		printf("%d ", player.card_brown[2]);
		GROUND_color(WHITE);
		printf("       ");
		color(WHITE);
		printf("��");
		printf(" ī�� ��ū : ");
		printf("%d ", player.card_white[3]);
		color(BLUE);
		printf("%d ", player.card_blue[3]);
		color(RED);
		printf("%d ", player.card_red[3]);
		color(GREEN);
		printf("%d ", player.card_green[3]);
		color(BROWN);
		printf("%d ", player.card_brown[3]);
		color(WHITE);
		printf("       ��");
		printf("\n");
	}
	else if (current_player == 3) // player4���� �϶�
	{
		printf("�� ");
		color(WHITE);
		printf("player3                      ");
		printf("�� ");
		GROUND_color(WHITE);
		printf("player4                      ");
		color(WHITE);
		printf("��");
		printf("\n");
		printf("�� ");
		printf("���� : %d                     ", player.score[2]);
		printf("�� ");
		GROUND_color(WHITE);
		printf("���� : %d                     ", player.score[3]);
		color(WHITE);
		printf("��");
		printf("\n");

		//���� ��ū ���
		printf("�� ���� ��ū : ");
		color(WHITE);
		printf("%d ", player.white[2]);
		color(BLUE);
		printf("%d ", player.blue[2]);
		color(RED);
		printf("%d ", player.red[2]);
		color(GREEN);
		printf("%d ", player.green[2]);
		color(BROWN);
		printf("%d ", player.brown[2]);
		color(GOLD);
		printf("%d ", player.gold[2]);
		color(WHITE);
		printf("     �� ");
		GROUND_color(WHITE);
		printf("���� ��ū : ");
		printf("%d ", player.white[3]);
		GROUND_color(BLUE);
		printf("%d ", player.blue[3]);
		GROUND_color(RED);
		printf("%d ", player.red[3]);
		GROUND_color(GREEN);
		printf("%d ", player.green[3]);
		GROUND_color(BROWN);
		printf("%d ", player.brown[3]);
		GROUND_color(GOLD);
		printf("%d ", player.gold[3]);
		GROUND_color(WHITE);
		printf("     ");
		color(WHITE);
		printf("��\n");

		//ī�� ��ū ���
		printf("�� ī�� ��ū : ");
		color(WHITE);
		printf("%d ", player.card_white[2]);
		color(BLUE);
		printf("%d ", player.card_blue[2]);
		color(RED);
		printf("%d ", player.card_red[2]);
		color(GREEN);
		printf("%d ", player.card_green[2]);
		color(BROWN);
		printf("%d ", player.card_brown[2]);
		color(WHITE);
		printf("       �� ");
		GROUND_color(WHITE);
		printf("ī�� ��ū : ");
		printf("%d ", player.card_white[3]);
		GROUND_color(BLUE);
		printf("%d ", player.card_blue[3]);
		GROUND_color(RED);
		printf("%d ", player.card_red[3]);
		GROUND_color(GREEN);
		printf("%d ", player.card_green[3]);
		GROUND_color(BROWN);
		printf("%d ", player.card_brown[3]);
		GROUND_color(WHITE);
		printf("       ");
		color(WHITE);
		printf("��");
		printf("\n");
	}

	else // player3, 4 �� ������ ���ʵ� �ƴ� ��
	{
		printf("��");
		color(WHITE);
		printf(" player3                      ");
		printf("��");
		color(WHITE);
		printf(" player4                      ");
		color(WHITE);
		printf("��\n");
		printf("��");
		color(WHITE);
		printf(" ���� : %d                     ", player.score[2]);
		printf("��");
		color(WHITE);
		printf(" ���� : %d                     ", player.score[3]);
		printf("��\n");
		color(WHITE);

		//���� ��ū ���
		printf("�� ���� ��ū : ");
		color(WHITE);
		printf("%d ", player.white[2]);
		color(BLUE);
		printf("%d ", player.blue[2]);
		color(RED);
		printf("%d ", player.red[2]);
		color(GREEN);
		printf("%d ", player.green[2]);
		color(BROWN);
		printf("%d ", player.brown[2]);
		color(GOLD);
		printf("%d ", player.gold[2]);
		color(WHITE);
		printf("     �� ���� ��ū : ");
		printf("%d ", player.white[3]);
		color(BLUE);
		printf("%d ", player.blue[3]);
		color(RED);
		printf("%d ", player.red[3]);
		color(GREEN);
		printf("%d ", player.green[3]);
		color(BROWN);
		printf("%d ", player.brown[3]);
		color(GOLD);
		printf("%d ", player.gold[3]);
		color(WHITE);
		printf("     ��\n");

		//ī�� ��ū ���
		printf("�� ī�� ��ū : ");
		color(WHITE);
		printf("%d ", player.card_white[2]);
		color(BLUE);
		printf("%d ", player.card_blue[2]);
		color(RED);
		printf("%d ", player.card_red[2]);
		color(GREEN);
		printf("%d ", player.card_green[2]);
		color(BROWN);
		printf("%d ", player.card_brown[2]);
		color(WHITE);
		printf("       �� ī�� ��ū : ");
		printf("%d ", player.card_white[3]);
		color(BLUE);
		printf("%d ", player.card_blue[3]);
		color(RED);
		printf("%d ", player.card_red[3]);
		color(GREEN);
		printf("%d ", player.card_green[3]);
		color(BROWN);
		printf("%d ", player.card_brown[3]);
		color(WHITE);
		printf("       ��\n");
	}

	//������ ǥ��
	printf("��");
	for (int i = 0; i < 30; i++)
		printf("��");
	printf("��");
	for (int i = 0; i < 30; i++)
		printf("��");
	printf("��");
	printf("\n");
}

int main(void)
{
	/*
	while (1)
	{
		system("cls");
		*/
		boardpan();
		current_player = 0;
		/*/
	}
	*/
}
