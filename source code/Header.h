#pragma once

void boardpan(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); //보드판 출력함수
void color(int color); // 검정색 배경, 글씨색 변경 함수
void GROUND_color(int color); // 지정색 배경, 글씨색 변경 함수
void print_jowel(char jowel[]); // 카드 보석 토큰 출력 함수 ( 개발 카드 출력 시 사용)
void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // 게임 함수
void intro(void); // 인트로 출력 함수
void M(int scale); // 효과음 출력 함수
void get_jowel(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // 플레이어 토큰 연산 및 전체 토큰 연산
void get_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // 개발 카드 구입하기 함수
int check_winner(void); // 우승자 판단 함수
void get_nob_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // 귀족 카드 구입하기 함수
void book_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]); // 개발 카드 찜하기 함수

extern int white; // 토큰 창고에 있는 하얀색 토큰
extern int blue; // 파란색 토큰
extern int red; // 빨간색 토큰
extern int green; // 초록색 토큰
extern int purple; // 보라색 토큰
extern int gold; // 금색 찜 토큰
extern int current_player; // 현재 플레이어를 나타내는 변수 ( 이 변수값이 0이면 player1 , 1이면 player2, .... -> player (current_player + 1) )
extern int drawn_cards[3]; // 단계별로 뽑은 카드 수를 저장하는 변수

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
	int score; // 각 플레이어의 점수

	int white; // 각 플레이어의 보석 토큰
	int blue;
	int red;
	int green;
	int purple;
	int gold;

	int card_white; // 각 플레이어의 카드 보석 토큰
	int card_blue;
	int card_red;
	int card_green;
	int card_purple;
}Player;