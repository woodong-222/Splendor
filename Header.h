#pragma once

void boardpan(void);
void print_void(void);
void color(int color);
void GROUND_color(int color);

extern int white;
extern int blue;
extern int red;
extern int green;
extern int brown;
extern int gold;
extern int current_player; // 현재 플레이어를 나타내는 변수 ( 이 변수값이 0이면 player1 , 1이면 player2, .... -> player (current_player + 1) )

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
	int score; // 각 플레이어의 점수

	int white; // 각 플레이어의 보석 토큰
	int blue;
	int red;
	int green;
	int brown;
	int gold;

	int card_white; // 각 플레이어의 카드 보석 토큰
	int card_blue;
	int card_red;
	int card_green;
	int card_brown;
}Player;