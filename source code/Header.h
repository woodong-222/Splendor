#pragma once

void boardpan(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); //������ ����Լ�
void color(int color); // ������ ���, �۾��� ���� �Լ�
void GROUND_color(int color); // ������ ���, �۾��� ���� �Լ�
void print_jowel(char jowel[]); // ī�� ���� ��ū ��� �Լ� ( ���� ī�� ��� �� ���)
void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // ���� �Լ�
void intro(void); // ��Ʈ�� ��� �Լ�
void M(int scale); // ȿ���� ��� �Լ�
void get_jowel(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // �÷��̾� ��ū ���� �� ��ü ��ū ����
void get_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // ���� ī�� �����ϱ� �Լ�
int check_winner(void); // ����� �Ǵ� �Լ�
void get_nob_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // ���� ī�� �����ϱ� �Լ�
void book_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // ���� ī�� ���ϱ� �Լ�

extern int white; // ��ū â�� �ִ� �Ͼ�� ��ū
extern int blue; // �Ķ��� ��ū
extern int red; // ������ ��ū
extern int green; // �ʷϻ� ��ū
extern int purple; // ����� ��ū
extern int gold; // �ݻ� �� ��ū
extern int current_player; // ���� �÷��̾ ��Ÿ���� ���� ( �� �������� 0�̸� player1 , 1�̸� player2, .... -> player (current_player + 1) )
extern int drawn_cards[3]; // �ܰ躰�� ���� ī�� ���� �����ϴ� ����

typedef struct {
	int point;
	char value[10];
	int white;
	int blue;
	int red;
	int green;
	int purple;
}Develop;

typedef struct {
	int white;
	int blue;
	int red;
	int green;
	int purple;
}Nob;

typedef struct {
	int score; // �� �÷��̾��� ����

	int white; // �� �÷��̾��� ���� ��ū
	int blue;
	int red;
	int green;
	int purple;
	int gold;

	int card_white; // �� �÷��̾��� ī�� ���� ��ū
	int card_blue;
	int card_red;
	int card_green;
	int card_purple;
}Player;