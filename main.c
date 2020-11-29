#include <stdio.h>
#include <windows.h>
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

void color(int color) { // 배경색이 검은색인 글씨색 변경
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

void GROUND_color(int color) { // 배경이 ground에 따라 바뀜, 글씨색 변경
	int ground = 9; // 현재 ground는 9 -> 밝은 파랑
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

void print_void(void) // 빈칸 출력
{
	printf("│                                                             │\n");
}

void boardpan(void)
{
	//일자줄 표현
	color(WHITE);
	printf("┌");
	for (int i = 0; i < 30; i++)
		printf("─");
	printf("┬");
	for (int i = 0; i < 30; i++)
		printf("─");
	printf("┐");
	printf("\n");

	if (current_player == 0) // player1 차례일때
	{
		printf("│ ");
		GROUND_color(WHITE);
		printf("player1                      ");
		color(WHITE);
		printf("│");
		printf(" player2                      ");
		printf("│\n");
		printf("│ ");
		GROUND_color(WHITE);
		printf("점수 : %d                     ", player[0].score);
		color(WHITE);
		printf("│");
		printf(" 점수 : %d                     ", player[1].score);
		printf("│");
		color(WHITE);
		printf("\n");

		//보석 토큰 출력
		printf("│ ");
		GROUND_color(WHITE);
		printf("보석 토큰 : ");
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
		printf("     ");
		color(WHITE);
		printf("│");
		printf(" 보석 토큰 : ");
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
		printf("     │\n");

		//카드 토큰 출력
		printf("│ ");
		GROUND_color(WHITE);
		printf("카드 토큰 : ");
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
		printf("       ");
		color(WHITE);
		printf("│");
		printf(" 카드 토큰 : ");
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
		printf("       │\n");
	}
	else if (current_player == 1) // player2차례 일때
	{
		printf("│");
		color(WHITE);
		printf(" player1                      ");
		printf("│ ");
		GROUND_color(WHITE);
		printf("player2                      ");
		color(WHITE);
		printf("│");
		printf("\n");
		printf("│ ");
		printf("점수 : %d                     ", player[0].score);
		printf("│ ");
		GROUND_color(WHITE);
		printf("점수 : %d                     ", player[1].score);
		color(WHITE);
		printf("│");
		printf("\n");

		//보석 토큰 출력
		printf("│ 보석 토큰 : ");
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
		printf("     │ ");
		GROUND_color(WHITE);
		printf("보석 토큰 : ");
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
		printf("     ");
		color(WHITE);
		printf("│");
		printf("\n");

		//카드 토큰 출력
		printf("│ 카드 토큰 : ");
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
		printf("       │ ");
		GROUND_color(WHITE);
		printf("카드 토큰 : ");
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
		printf("       ");
		color(WHITE);
		printf("│");
		printf("\n");
	}
	else // player1, 2 중 누구의 차례도 아닐 때
	{
		printf("│");
		color(WHITE);
		printf(" player1                      ");
		printf("│");
		color(WHITE);
		printf(" player2                      ");
		color(WHITE);
		printf("│\n");
		printf("│");
		color(WHITE);
		printf(" 점수 : %d                     ", player[0].score);
		printf("│");
		color(WHITE);
		printf(" 점수 : %d                     ", player[1].score);
		printf("│\n");
		color(WHITE);

		//보석 토큰 출력
		printf("│ 보석 토큰 : ");
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
		printf("     │ 보석 토큰 : ");
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
		printf("     │\n");

		//카드 토큰 출력
		printf("│ 카드 토큰 : ");
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
		printf("       │ 카드 토큰 : ");
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
		printf("       │\n");
	}

	//일자줄 표현
	printf("├");
	for (int i = 0; i < 30; i++)
		printf("─");
	printf("┴");
	for (int i = 0; i < 30; i++)
		printf("─");
	printf("┤");
	printf("\n");

	//빈칸
	print_void();

	//귀족 카드 출력
	printf("│                        ");
	color(LIGHT_RED);
	printf("--귀족 카드--");
	color(WHITE);
	printf("                        │\n");
	printf("│ ");
	color(LIGHT_RED);
	printf("┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_RED);
	printf("│         │ │         │ │         │ │         │ │         │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_RED);
	printf("│         │ │         │ │         │ │         │ │         │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_RED);
	printf("│         │ │         │ │         │ │         │ │         │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_RED);
	printf("│         │ │         │ │         │ │         │ │         │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_RED);
	printf("│         │ │         │ │         │ │         │ │         │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_RED);
	printf("└─────────┘ └─────────┘ └─────────┘ └─────────┘ └─────────┘ ");
	color(WHITE);
	printf("│\n");

	//개발 카드 출력
	color(WHITE);
	printf("│                    ");
	color(LIGHT_GREEN);
	printf("-- 1단계 개발 카드--");
	color(WHITE);
	printf("                     │\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("┌────────────┐ ┌────────────┐ ┌────────────┐ ┌────────────┐ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GREEN);
	printf("└────────────┘ └────────────┘ └────────────┘ └────────────┘ ");
	color(WHITE);
	printf("│\n");

	color(WHITE);
	printf("│                    ");
	color(LIGHT_GOLD);
	printf("-- 2단계 개발 카드--");
	color(WHITE);
	printf("                     │\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("┌────────────┐ ┌────────────┐ ┌────────────┐ ┌────────────┐ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_GOLD);
	printf("└────────────┘ └────────────┘ └────────────┘ └────────────┘ ");
	color(WHITE);
	printf("│\n");

	color(WHITE);
	printf("│                    ");
	color(LIGHT_BLUE);
	printf("-- 3단계 개발 카드--");
	color(WHITE);
	printf("                     │\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("┌────────────┐ ┌────────────┐ ┌────────────┐ ┌────────────┐ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("│            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("│\n");
	printf("│ ");
	color(LIGHT_BLUE);
	printf("└────────────┘ └────────────┘ └────────────┘ └────────────┘ ");
	color(WHITE);
	printf("│\n");

	//빈칸
	print_void();

	//토큰 창고 보유 토큰 출력
	printf("│        ● %d    ", white);
	color(BLUE);
	printf("● %d    ", blue);
	color(RED);
	printf("● %d    ", red);
	color(GREEN);
	printf("● %d    ", green);
	color(BROWN);
	printf("● %d    ", brown);
	color(GOLD);
	printf("● %d", gold);
	color(WHITE);
	printf("         │\n");

	//빈칸
	print_void();

	//일자줄 표현
	color(WHITE);
	printf("├");
	for (int i = 0; i < 30; i++)
		printf("─");
	printf("┬");
	for (int i = 0; i < 30; i++)
		printf("─");
	printf("┤");
	printf("\n");


	if (current_player == 2) // player3 차례일때
	{
		printf("│ ");
		GROUND_color(WHITE);
		printf("player3                      ");
		color(WHITE);
		printf("│");
		printf(" player4                      ");
		printf("│");
		printf("\n");
		printf("│ ");
		GROUND_color(WHITE);
		printf("점수 : %d                     ", player[2].score);
		color(WHITE);
		printf("│");
		printf(" 점수 : %d                     ", player[3].score);
		printf("│\n");
		color(WHITE);

		//보석 토큰 출력
		printf("│ ");
		GROUND_color(WHITE);
		printf("보석 토큰 : ");
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
		printf("     ");
		color(WHITE);
		printf("│");
		printf(" 보석 토큰 : ");
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
		printf("     │\n");

		//카드 토큰 출력
		printf("│ ");
		GROUND_color(WHITE);
		printf("카드 토큰 : ");
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
		printf("       ");
		color(WHITE);
		printf("│");
		printf(" 카드 토큰 : ");
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
		printf("       │");
		printf("\n");
	}
	else if (current_player == 3) // player4차례 일때
	{
		printf("│ ");
		color(WHITE);
		printf("player3                      ");
		printf("│ ");
		GROUND_color(WHITE);
		printf("player4                      ");
		color(WHITE);
		printf("│");
		printf("\n");
		printf("│ ");
		printf("점수 : %d                     ", player[2].score);
		printf("│ ");
		GROUND_color(WHITE);
		printf("점수 : %d                     ", player[3].score);
		color(WHITE);
		printf("│");
		printf("\n");

		//보석 토큰 출력
		printf("│ 보석 토큰 : ");
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
		printf("     │ ");
		GROUND_color(WHITE);
		printf("보석 토큰 : ");
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
		printf("     ");
		color(WHITE);
		printf("│\n");

		//카드 토큰 출력
		printf("│ 카드 토큰 : ");
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
		printf("       │ ");
		GROUND_color(WHITE);
		printf("카드 토큰 : ");
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
		printf("       ");
		color(WHITE);
		printf("│");
		printf("\n");
	}

	else // player3, 4 중 누구의 차례도 아닐 때
	{
		printf("│");
		color(WHITE);
		printf(" player3                      ");
		printf("│");
		color(WHITE);
		printf(" player4                      ");
		color(WHITE);
		printf("│\n");
		printf("│");
		color(WHITE);
		printf(" 점수 : %d                     ", player[2].score);
		printf("│");
		color(WHITE);
		printf(" 점수 : %d                     ", player[3].score);
		printf("│\n");
		color(WHITE);

		//보석 토큰 출력
		printf("│ 보석 토큰 : ");
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
		printf("     │ 보석 토큰 : ");
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
		printf("     │\n");

		//카드 토큰 출력
		printf("│ 카드 토큰 : ");
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
		printf("       │ 카드 토큰 : ");
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
		printf("       │\n");
	}

	//일자줄 표현
	printf("└");
	for (int i = 0; i < 30; i++)
		printf("─");
	printf("┴");
	for (int i = 0; i < 30; i++)
		printf("─");
	printf("┘");
	printf("\n");
}
