#pragma once

void boardpan(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[]); //������ ����Լ�
void print_void(void); //�������� ��ĭ ����Լ�
void color(int color); // ������ ���, �۾��� ���� �Լ�
void GROUND_color(int color); // ������ ���, �۾��� ���� �Լ�
void print_jowel(char jowel[]); // ī�� ���� ��ū ��� �Լ� ( ���� ī�� ��� �� ���)
void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[]); // ���� �Լ�
void intro(void); // ��Ʈ�� ��� �Լ�
void M(int scale); // ȿ���� ��� �Լ�

extern int white; // ��ū â�� �ִ� �Ͼ�� ��ū
extern int blue; // �Ķ��� ��ū
extern int red; // ������ ��ū
extern int green; // �ʷϻ� ��ū
extern int brown; // ����(��ũ)�� ��ū
extern int gold; // Ȳ�ݻ� �� ��ū
extern int current_player; // ���� �÷��̾ ��Ÿ���� ���� ( �� �������� 0�̸� player1 , 1�̸� player2, .... -> player (current_player + 1) )

typedef struct {
	int point;
	const char value[10];
	int white;
	int blue;
	int red;
	int green;
	int brown;
}Develop_1;

typedef struct {
	int point;
	const char value[10];
	int white;
	int blue;
	int red;
	int green;
	int brown;
}Develop_2;

typedef struct {
	int point;
	const char value[10];
	int white;
	int blue;
	int red;
	int green;
	int brown;
}Develop_3;

typedef struct {
	int white;
	int blue;
	int red;
	int green;
	int brown;
}Nob;

typedef struct {
	int score; // �� �÷��̾��� ����

	int white; // �� �÷��̾��� ���� ��ū
	int blue;
	int red;
	int green;
	int brown;
	int gold;

	int card_white; // �� �÷��̾��� ī�� ���� ��ū
	int card_blue;
	int card_red;
	int card_green;
	int card_brown;
}Player;