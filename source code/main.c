#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "Header.h"

#define WHITE 7
#define BLUE 1
#define GREEN 2
#define RED 4
#define PURPLE 5
#define GOLD 6
#define LIGHT_BLUE 9
#define LIGHT_GREEN 10
#define LIGHT_RED 12
#define LIGHT_GOLD 14
#define DO    260 //도
#define RE    290 //레
#define MI    330 //미
#define PA    340 //파
#define SOL   380 //솔
#define RA    430 //라
#define SI    490 //시
#define _DO    510 //도

Develop_1 card1[40] = { {1,"purple",0,4,0,0,0}, {1,"red",4,0,0,0,0}, {1,"blue",0,0,4,0,0}, {1,"green",0,0,0,0,4}, {1,"white",0,0,0,4,0}, {0,"blue",1,0,1,1,1}, {0,"blue",1,0,2,2,0}, {0,"blue",0,1,1,3,0}, {0,"blue",1,0,2,1,1}, {0,"blue",0,0,0,0,3}, {0,"blue",0,0,0,2,2}, {0,"blue",1,0,0,0,2}, {0,"green",0,0,3,0,0}, {0,"green",0,2,2,0,0}, {0,"green",0,1,2,0,2}, {0,"green",1,1,1,0,1}, {0,"green",1,1,1,0,2}, {0,"green",2,1,0,0,0}, {0,"green",1,3,0,1,0}, {0,"purple",0,0,1,2,0}, {0,"purple",2,2,1,0,0}, {0,"purple",1,1,1,1,0}, {0,"purple",0,0,0,3,0}, {0,"purple",0,0,3,1,1}, {0,"purple",1,2,1,1,0}, {0,"purple",2,0,0,2,0}, {0,"red",2,1,0,1,1}, {0,"red",2,0,2,0,0}, {0,"red",1,1,0,1,1}, {0,"red",0,2,0,1,0}, {0,"red",3,0,0,0,0}, {0,"red",2,0,0,1,2}, {0,"red",1,0,1,0,3}, {0,"white",0,2,0,0,2}, {0,"white",0,1,1,2,1}, {0,"white",0,1,1,1,1}, {0,"white",0,3,0,0,0}, {0,"white",0,0,2,0,1}, {0,"white",0,2,0,2,1}, {0,"white",3,1,0,0,1} };
Develop_2 card2[30] = { { 2,"purple",5,0,0,0,0}, {2,"blue",5,3,0,0,0}, {1,"green",2,3,0,0,2}, {2,"white",0,0,4,1,2}, {1,"green",4,2,0,0,1}, {3,"white",6,0,0,0,0}, {2,"white",0,0,5,0,0}, {1,"green",3,0,3,2,0}, {2,"blue",2,0,1,0,4}, {1,"white",0,0,2,3,2}, {1,"red",0,3,2,0,3}, {3,"blue",0,6,0,0,0}, {1,"purple",3,2,0,2,0}, {1,"blue",0,2,0,3,3},{1,"red",2,0,2,0,3}, {2,"purple",0,0,3,5,0}, {2,"green",0,0,0,5,0}, {2,"green",0,5,0,3,0}, {1,"purple",3,0,0,3,2}, {2,"blue",0,5,0,0,0}, {2,"red",0,0,0,0,5}, {1,"blue",0,2,3,2,0}, {2,"red",1,4,0,2,0}, {3,"red",0,0,6,0,0}, {1,"white",2,3,3,0,0}, {3,"green",0,0,0,6,0}, {2,"white",0,0,5,0,3}, {3,"purple",0,0,0,0,6}, {2,"purple",0,1,2,4,0}, {2,"red",3,0,0,0,5} };
Develop_3 card3[20] = { { 4,"blue",7,0,0,0,0 }, { 4,"green",3,6,0,3,0} , {4,"red",0,0,0,7,0}, {3, "purple",3,3,3,5,0}, {4, "white",3,0,3,0,6}, {3, "green", 5,3,3,0,3}, {4,"purple",0,0,7,0,0},{3,"blue",3,0,3,3,5}, {5,"purple",0,0,7,0,3},{3,"white",0,3,5,3,3},{4,"red",0,3,3,6,0},{5,"red",0,0,3,7,0},{5,"blue",7,3,0,0,0},{4,"white",0,0,6,3,3},{5,"green",0,7,0,3,0}, {4, "purple",0,0,6,3,3}, {4,"green",0,7,0,0,0},{4,"blue",6,3,0,0,3}, {5,"white",3,0,0,0,7}, {3,"red",3,5,0,3,3} };
Nob nob[10] = { {4,4,0,0,0}, {0,0,4,0,4}, {0,0,4,4,0}, {4,0,3,0,3}, {3,3,0,0,3}, {0,4,0,4,0}, {3,3,0,3,0}, {0,3,3,3,0}, {0,0,3,3,3}, {4,0,0,0,4} };
Player player[4] = { 0 };

int main(void)
{
	int nob_card[10], i, temp, x, y, dev_card1[40], dev_card2[30], dev_card3[20];
	int board_card[12] = { 0 }; //보드에 펼쳐진 카드의 인덱스를 저장하는 배열

	srand((unsigned int)time(NULL));

	//중복없는 귀족 카드
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

	//중복없는 개발 카드1 셔플
	for (i = 0; i < 40; i++) dev_card1[i] = i;//덱을 인덱스에 맞춰 초기화
	for (i = 0; i < 100; i++)
	{
		x = rand() % 40;//0~39의 난수를 x에 초기화
		y = rand() % 40;

		if (x != y) {//x와 y가 다르면 dev_card1[x]와 dev_card1[y]를 교환
			temp = dev_card1[x];
			dev_card1[x] = dev_card1[y];
			dev_card1[y] = temp;
		}
	}

	//중복없는 개발 카드2
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

	//중복없는 개발 카드3
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

	//보드판에 펼칠 카드 초기화
	for (i = 0; i < 4; i++)
		board_card[i] = dev_card1[i];
	for (i = 0; i < 4; i++)
		board_card[i + 4] = dev_card2[i];
	for (i = 0; i < 4; i++)
		board_card[i + 8] = dev_card3[i];

	//인트로 출력
	//intro(); // 테스트 시에 거슬리면 이 부분만 주석처리해 빠른 게임 테스트 가능

	//보드판 출력
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);

	// 게임 출력
	game(nob_card, dev_card1, dev_card2, dev_card3, board_card);


	system("pause");
	return 0;
}

void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[])
{
	int key; //입력받은 키를 저장하는 키 저장 변수

	//이러한 양식으로 밑의 게임 메세지 출력
	printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
	printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1); // current_player에 +1을 해야 현재의 player가 누구인지 나옴
	printf("                                                            │ 원하는 활동을 선택해주세요.                                                                                           │\n");
	printf("                                                            │ 보석 토큰 가져오기  :   A                                                                                             │\n");
	printf("                                                            │ 개발 카드 구입하기  :   S                                                                                             │\n");
	printf("                                                            │ 개발 카드 찜하기    :   D                                                                                             │\n");
	printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			//보석 토큰 가져오기
			if (key == 97 || key == 65) // 키보드 a키 입력
			{
				M(DO); // 효과음 '도' 출력

				get_jowel(nob_card, dev_card1, dev_card2, dev_card3, board_card); // 보석 토큰 가져오기 함수

				current_player++;
				if (current_player == 4) current_player = 0;// 한바퀴 돌아 다시 1번 차례일 때 current_player를 0으로 초기화

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
				printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
				printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1); // current_player에 +1을 해야 현재의 player가 누구인지 나옴
				printf("                                                            │ 원하는 활동을 선택해주세요.                                                                                           │\n");
				printf("                                                            │ 보석 토큰 가져오기  :   A                                                                                             │\n");
				printf("                                                            │ 개발 카드 구입하기  :   S                                                                                             │\n");
				printf("                                                            │ 개발 카드 찜하기    :   D                                                                                             │\n");
				printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");

			}

			//개발 카드 구입하기
			if (key == 115 || key == 83) // 키보드 s키 입력
			{
				M(RE); // 효과음 '레' 출력

				get_card(nob_card, dev_card1, dev_card2, dev_card3, board_card);//개발 카드 구입하기 함수

				current_player++;
				if (current_player == 4) current_player = 0;// 한바퀴 돌아 다시 1번 차례일 때 current_player를 0으로 초기화

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
				printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
				printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1); // current_player에 +1을 해야 현재의 player가 누구인지 나옴
				printf("                                                            │ 원하는 활동을 선택해주세요.                                                                                           │\n");
				printf("                                                            │ 보석 토큰 가져오기  :   A                                                                                             │\n");
				printf("                                                            │ 개발 카드 구입하기  :   S                                                                                             │\n");
				printf("                                                            │ 개발 카드 찜하기    :   D                                                                                             │\n");
				printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
			}

			//개발 카드 찜하기
			if (key == 100 || key == 68) // 키보드 d키 입력
			{
				M(MI); // 효과음 '미' 출력

				//개발 카드 찜하기 함수 위치

				current_player++;
				if (current_player == 4) current_player = 0;// 한바퀴 돌아 다시 1번 차례일 때 current_player를 0으로 초기화

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
				printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
				printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1); // current_player에 +1을 해야 현재의 player가 누구인지 나옴
				printf("                                                            │ 원하는 활동을 선택해주세요.                                                                                           │\n");
				printf("                                                            │ 보석 토큰 가져오기  :   A                                                                                             │\n");
				printf("                                                            │ 개발 카드 구입하기  :   S                                                                                             │\n");
				printf("                                                            │ 개발 카드 찜하기    :   D                                                                                             │\n");
				printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");

				/*출력예시
				printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
				printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
				printf("                                                            │ 개발 카드 찜하기를 선택했습니다.                                                                                      │\n");
				printf("                                                            │                                                                                                                       │\n");
				printf("                                                            │                                                                                                                       │\n");
				printf("                                                            │                                                                                                                       │\n");
				printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
				*/
			}
		}
	}
}

void get_jowel(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]) //플레이어 토큰 연산 및 전체 토큰 연산
{
	int w = 0; // 흰
	int b = 0; // 파
	int r = 0; // 빨
	int gr = 0; // 초
	int pu = 0; // 보
	int key; // 입력받은 키값 저장 변수
	int w2 = 0; // 흰2
	int b2 = 0; // 파2
	int r2 = 0; // 빨2
	int gr2 = 0; // 초2
	int pu2 = 0; // 보2
	int token = 0; // 토큰을 3개 받을 때 0 저장, 2개일 때 1 저장


_start: // goto _start; 의 도착지점
	w = 0; b = 0; r = 0; gr = 0; pu = 0; w2 = 0; b2 = 0; r2 = 0; gr2 = 0; pu2 = 0; token = 0;

	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
	printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
	printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
	printf("                                                            │ 보석 토큰 가져오기를 선택했습니다.                                                                                    │\n");
	printf("                                                            │ 가져올 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T, 활동 선택창으로 넘어가기 : Z)                       │\n");
	printf("                                                            │                                                                                                                       │\n");
	printf("                                                            │                                                                                                                       │\n");
	printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == 113 || key == 81) // 키보드 q키 입력
			{
				M(DO); // 효과음 '도' 출력
				w += 1;
				break;
			}
			else if (key == 119 || key == 87) // 키보드 w키 입력
			{
				M(RE); // 효과음 '레' 출력
				b += 1;
				break;
			}
			else if (key == 101 || key == 69) // 키보드 e키 입력
			{
				M(MI); // 효과음 '미' 출력
				r += 1;
				break;
			}
			else if (key == 114 || key == 82) // 키보드 r키 입력
			{
				M(PA); // 효과음 '파' 출력
				gr += 1;
				break;
			}
			else if (key == 116 || key == 84) // 키보드 t키 입력
			{
				M(SOL); // 효과음 '솔' 출력
				pu += 1;
				break;
			}
			else if (key == 122 || key == 90) // 키보드 z키 입력
			{
				M(_DO); // 효과음 '높은 도' 출력
				current_player -= 1; // 게임 함수에서 +1을 해주므로 다시 하려면 -1을 해줘야함
				return; //함수 종료
				break;
			}
		}
	}

	if (w == 1 || b == 1 || r == 1 || gr == 1 || pu == 1) // 처음 입력 받은 토큰 출력
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
		printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
		printf("                                                            │ 보석 토큰 가져오기를 선택했습니다.                                                                                    │\n");
		printf("                                                            │ 가져올 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T, 활동 선택창으로 넘어가기 : Z)                       │\n");
		printf("                                                            │  ");
		if (b == 1)
			color(BLUE);
		if (r == 1)
			color(RED);
		if (gr == 1)
			color(GREEN);
		if (pu == 1)
			color(PURPLE);
		printf("●");
		color(WHITE);
		printf("                                                                                                                   │\n");
		printf("                                                            │                                                                                                                       │\n");
		printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
	}

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == 113 || key == 81) // 키보드 q키 입력
			{
				M(DO); // 효과음 '도' 출력
				w += 1;
				w2 = 1;
				break;
			}
			else if (key == 119 || key == 87) // 키보드 w키 입력
			{
				M(RE); // 효과음 '레' 출력
				b += 1;
				b2 = 1;
				break;
			}
			else if (key == 101 || key == 69) // 키보드 e키 입력
			{
				M(MI); // 효과음 '미' 출력
				r += 1;
				r2 = 1;
				break;
			}
			else if (key == 114 || key == 82) // 키보드 r키 입력
			{
				M(PA); // 효과음 '파' 출력
				gr += 1;
				gr2 = 1;
				break;
			}
			else if (key == 116 || key == 84) // 키보드 t키 입력
			{
				M(SOL); // 효과음 '솔' 출력
				pu += 1;
				pu2 = 1;
				break;
			}
			else if (key == 122 || key == 90) // 키보드 z키 입력
			{
				M(_DO); // 효과음 '도' 출력
				current_player -= 1; // 게임 함수에서 +1을 해주므로 다시 하려면 -1을 해줘야함
				return; // 함수 종료
				break;
			}
		}
	}

	if (w == 2 || b == 2 || r == 2 || gr == 2 || pu == 2) // 같은 코인을 2번 받았을 때
	{
		token = 1;
	}

	if (token == 0) //같은 코인을 받지 않았을 때
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
		printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
		printf("                                                            │ 보석 토큰 가져오기를 선택했습니다.                                                                                    │\n");
		printf("                                                            │ 가져올 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T, 활동 선택창으로 넘어가기 : Z)                       │\n");
		printf("                                                            │  ");
		// 색에 맞춰 토큰 출력
		if (b == 1 && b2 != 1)
			color(BLUE);
		if (r == 1 && r2 != 1)
			color(RED);
		if (gr == 1 && gr2 != 1)
			color(GREEN);
		if (pu == 1 && pu2 != 1)
			color(PURPLE);
		printf("●");

		if (w2 == 1)
			color(WHITE);
		if (b2 == 1)
			color(BLUE);
		if (r2 == 1)
			color(RED);
		if (gr2 == 1)
			color(GREEN);
		if (pu2 == 1)
			color(PURPLE);
		printf(" ●");

		color(WHITE);
		printf("                                                                                                                │\n");
		printf("                                                            │                                                                                                                       │\n");
		printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");

		while (1)
		{
			if (_kbhit())
			{
				key = _getch();

				if (key == 113 || key == 81) // 키보드 q키 입력
				{
					M(DO); // 효과음 '도' 출력
					w += 1;
					if (w == 2) // ex)흰 파 흰 -> 이런식으로 토큰받는다고 했을 시 (같은거 2번)
					{
						w -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
						printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
						printf("                                                            │ 보석 토큰 가져오기를 선택했습니다.                                                                                    │\n");
						printf("                                                            │ 가져올 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T)                                                     │\n");
						printf("                                                            │  ");
						printf("     ");
						printf("                                                                                                                │\n");
						printf("                                                            │ 서로 다른 토큰만 가져올 수 있습니다. 다시 입력해주세요.                                                               │\n");
						printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
						Sleep(4000); // 4초 지연 후 _start로 돌아감
						goto _start;
					}
					break;
				}
				else if (key == 119 || key == 87) // 키보드 w키 입력
				{
					M(RE); // 효과음 '레' 출력
					b += 1;
					if (b == 2)// ex)파 흰 파 -> 이런식으로 토큰받는다고 했을 시 (같은거 2번)
					{
						b -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
						printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
						printf("                                                            │ 보석 토큰 가져오기를 선택했습니다.                                                                                    │\n");
						printf("                                                            │ 가져올 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T)                                                     │\n");
						printf("                                                            │  ");
						printf("     ");
						printf("                                                                                                                │\n");
						printf("                                                            │ 서로 다른 토큰만 가져올 수 있습니다. 다시 입력해주세요.                                                               │\n");
						printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
						Sleep(4000); // 4초 지연 후 _start로 돌아감
						goto _start;
					}
					break;
				}
				else if (key == 101 || key == 69) // 키보드 e키 입력
				{
					M(MI); // 효과음 '미' 출력
					r += 1;
					if (r == 2)// ex)빨 파 빨 -> 이런식으로 토큰받는다고 했을 시 (같은거 2번)
					{
						r -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
						printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
						printf("                                                            │ 보석 토큰 가져오기를 선택했습니다.                                                                                    │\n");
						printf("                                                            │ 가져올 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T)                                                     │\n");
						printf("                                                            │  ");
						printf("     ");
						printf("                                                                                                                │\n");
						printf("                                                            │ 서로 다른 토큰만 가져올 수 있습니다. 다시 입력해주세요.                                                               │\n");
						printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
						Sleep(4000); // 4초 지연 후 _start로 돌아감
						goto _start;
					}
					break;
				}
				else if (key == 114 || key == 82) // 키보드 r키 입력
				{
					M(PA); // 효과음 '파' 출력
					gr += 1;
					if (gr == 2)// ex)초 파 초 -> 이런식으로 토큰받는다고 했을 시 (같은거 2번)
					{
						gr -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
						printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
						printf("                                                            │ 보석 토큰 가져오기를 선택했습니다.                                                                                    │\n");
						printf("                                                            │ 가져올 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T)                                                     │\n");
						printf("                                                            │  ");
						printf("     ");
						printf("                                                                                                                │\n");
						printf("                                                            │ 서로 다른 토큰만 가져올 수 있습니다. 다시 입력해주세요.                                                               │\n");
						printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
						Sleep(4000); // 4초 지연 후 _start로 돌아감
						goto _start;
					}
					break;
				}
				else if (key == 116 || key == 84) // 키보드 t키 입력
				{
					M(SOL); // 효과음 '솔' 출력
					pu += 1;
					if (pu == 2)// ex)보 파 보 -> 이런식으로 토큰받는다고 했을 시 (같은거 2번)
					{
						pu -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
						printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
						printf("                                                            │ 보석 토큰 가져오기를 선택했습니다.                                                                                    │\n");
						printf("                                                            │ 가져올 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T)                                                     │\n");
						printf("                                                            │  ");
						printf("     ");
						printf("                                                                                                                │\n");
						printf("                                                            │ 서로 다른 토큰만 가져올 수 있습니다. 다시 입력해주세요.                                                               │\n");
						printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
						Sleep(4000); // 4초 지연 후 _start로 돌아감
						goto _start;
					}
					break;
				}
				else if (key == 122 || key == 90) // 키보드 z키 입력
				{
					M(_DO); // 효과음 '높은 도' 출력
					current_player -= 1; // 게임 함수에서 +1을 해주므로 다시 하려면 -1을 해줘야함
					return; // 함수 종료
					break;
				}
			}
		}
	}


	if ((w == 2 && (white - w) < 2) || (b == 2 && (blue - b) < -2) || (r == 2 && (red - r) < 2) || (gr == 2 && (green - gr) < 2) || (pu == 2 && (purple - pu) < 2)) // 2개 같은 색 가져올 때 잔량 부족 표현
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
		printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
		printf("                                                            │ 가져온 토큰 잔량이 4개 미만이라 2개 연속으로 가져올 수 없습니다.                                                      │\n");
		printf("                                                            │ 다시 토큰을 입력하세요.                                                                                               │\n");
		printf("                                                            │                                                                                                                       │\n");
		printf("                                                            │                                                                                                                       │\n");
		printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
		Sleep(4000); // 4초 지연 후 _start로 돌아감
		goto _start;
	}

	if (white - w < 0 || blue - b < 0 || red - r < 0 || green - gr < 0 || purple - pu < 0) // 토큰의 수가 부족할 때
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
		printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", 1);
		printf("                                                            │ 선택한 토큰이 부족합니다.                                                                                             │\n");
		printf("                                                            │ 다시 토큰을 입력하세요.                                                                                               │\n");
		printf("                                                            │                                                                                                                       │\n");
		printf("                                                            │                                                                                                                       │\n");
		printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
		Sleep(4000); // 4초 지연 후 _start로 돌아감
		goto _start;
	}

	int total = w + b + r + gr + pu + player[current_player].white + player[current_player].blue + player[current_player].red + player[current_player].green + player[current_player].purple;

	while (total > 10)
	{
		int tr_w = 0, tr_b = 0, tr_r = 0, tr_gr = 0, tr_pu = 0;//버릴 토큰 받을 변수
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
		printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
		printf("                                                            │ 흰색:%d   파란색:%d  빨간색:%d  초록색:%d  보라색:%d                                                                       │\n", w, b, r, gr, pu);
		printf("                                                            │ 플레이어 토큰이 %d개를 초과하였습니다.                                                                                 │\n", total - 10);
		printf("                                                            │ 가져온 토큰 중 버릴 토큰을 입력하세요.(흰 : Q, 파 : W, 빨 : E, 초 : R, 보 : T, 활동 선택창으로 넘어가기 : Z)          │\n");
		printf("                                                            │                                                                                                                       │\n");
		printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");

		while (1)
		{
			if (_kbhit())
			{
				key = _getch();

				if (key == 113 || key == 81) // 키보드 q키 입력
				{
					M(DO); // 효과음 '도' 출력
					tr_w = 1;
					break;
				}
				else if (key == 119 || key == 87) // 키보드 w키 입력
				{
					M(RE); // 효과음 '레' 출력
					tr_b = 1;
					break;
				}
				else if (key == 101 || key == 69) // 키보드 e키 입력
				{
					M(MI); // 효과음 '미' 출력
					tr_r = 1;
					break;
				}
				else if (key == 114 || key == 82) // 키보드 r키 입력
				{
					M(PA); // 효과음 '파' 출력
					tr_gr = 1;
					break;
				}
				else if (key == 116 || key == 84) // 키보드 t키 입력
				{
					M(SOL); // 효과음 '솔' 출력
					tr_pu = 1;
					break;
				}
				else if (key == 122 || key == 90) // 키보드 z키 입력
				{
					M(_DO); // 효과음 '높은 도' 출력
					current_player -= 1; // 게임 함수에서 +1을 해주므로 다시 하려면 -1을 해줘야함
					return; // 함수 종료
					break;
				}
			}
		}

		//-1이 안되도록 방지
		if (w - tr_w < 0)
			tr_w = 0;
		if (b - tr_b < 0)
			tr_b = 0;
		if (r - tr_r < 0)
			tr_r = 0;
		if (gr - tr_gr < 0)
			tr_gr = 0;
		if (pu - tr_pu < 0)
			tr_pu = 0;

		//가져온 토큰에서 넘치는 만큼 버리기
		w -= tr_w; b -= tr_b; r -= tr_r; gr -= tr_gr; pu -= tr_pu;
		total -= tr_w + tr_b + tr_r + tr_gr + tr_pu;
		tr_w = 0; tr_b = 0; tr_r = 0; tr_gr = 0; tr_pu = 0;
	}


	white -= w; blue -= b; red -= r; green -= gr; purple -= pu;//창고에서 가져오는만큼 빼기
	player[current_player].white += w; player[current_player].blue += b; player[current_player].red += r; player[current_player].green += gr; player[current_player].purple += pu;//가져온 만큼 플레이어 토큰에 더하기


}

void get_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]) {
	int step1 = 0; // 개발 카드 단계
	int step2 = 0; // 개발 카드 순서
	int cardIdx = 0; // 뽑은 카드 인덱스
	int key; // 입력받은 키값 저장 변수

	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
	printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
	printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
	printf("                                                            │ 개발 카드 구입하기를 선택했습니다.                                                                                    │\n");
	printf("                                                            │ 구입할 개발 카드의 단계를 입력해주세요.                                                                               │\n");
	printf("                                                            │ ( 1단계 개발 카드 : 1, 2단계 개발 카드 : 2, 3단계 개발 카드 : 3, 활동 선택창으로 넘어가기 : Z )                       │\n");
	printf("                                                            │                                                                                                                       │\n");
	printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == '1') // 키보드 1키 입력
			{
				M(DO); // 효과음 '도' 출력
				step1 = 0;
				break;
			}
			else if (key == '2') // 키보드 2키 입력
			{
				M(RE); // 효과음 '레' 출력
				step1 = 1;
				break;
			}
			else if (key == '3') // 키보드 3키 입력
			{
				M(MI); // 효과음 '미' 출력
				step1 = 2;
				break;
			}
			else if (key == 122 || key == 90) // 키보드 z키 입력
			{
				M(_DO); // 효과음 '높은 도' 출력
				current_player -= 1; // 게임 함수에서 +1을 해주므로 다시 하려면 -1을 해줘야함
				return; //함수 종료
				break;
			}
		}
	}

	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
	printf("                                                            ┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n");
	printf("                                                            │ player%d의 차례입니다.                                                                                                 │\n", current_player + 1);
	printf("                                                            │ 개발 카드 구입하기를 선택했습니다.                                                                                    │\n");
	printf("                                                            │ %d단계에서 구입할 개발 카드의 순서를 입력해주세요.                                                                     │\n", step1 + 1);
	printf("                                                            │ ( 1번째 개발 카드 : 1, 2번째 개발 카드 : 2, 3번째 개발 카드 : 3, 4번째 개발 카드 : 4, 활동 선택창으로 넘어가기 : Z )  │\n");
	printf("                                                            │                                                                                                                       │\n");
	printf("                                                            └───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n");
	
	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == '1') // 키보드 1키 입력
			{
				M(DO); // 효과음 '도' 출력
				step2 = 0;
				break;
			}
			else if (key == '2') // 키보드 2키 입력
			{
				M(RE); // 효과음 '레' 출력
				step2 = 1;
				break;
			}
			else if (key == '3') // 키보드 3키 입력
			{
				M(MI); // 효과음 '미' 출력
				step2 = 2;
				break;
			}
			else if (key == '4') // 키보드 4키 입력
			{
				M(PA); // 효과음 '파' 출력
				step2 = 3;
				break;
			}
			else if (key == 122 || key == 90) // 키보드 z키 입력
			{
				M(_DO); // 효과음 '높은 도' 출력
				current_player -= 1; // 게임 함수에서 +1을 해주므로 다시 하려면 -1을 해줘야함
				return; //함수 종료
				break;
			}
		}
	}

	cardIdx = board_card[step1 * 4 + step2];

	//printf("drawn_cards[0] : %d, drawn_cards[1] : %d, drawn_cards[2] : %d", drawn_cards[0], drawn_cards[1], drawn_cards[2]);
	//getchar();
	//예외처리 하는 곳
	


	switch (step1)
	{
	case 0:
		// 뽑은 카드의 스코어만큼 점수 증가
		player[current_player].score += card1[cardIdx].point; 

		//가격만큼 보석 감소 <- *******예외처리해줘야됨*******
		player[current_player].blue -= card1[cardIdx].blue;
		player[current_player].green -= card1[cardIdx].green;
		player[current_player].purple -= card1[cardIdx].purple;
		player[current_player].red -= card1[cardIdx].red;
		player[current_player].white -= card1[cardIdx].white;

		//카드 혜택 적용
		if (!strcmp("blue", card1[cardIdx].value))		player[current_player].card_blue++;
		if (!strcmp("green", card1[cardIdx].value))		player[current_player].card_green++;		
		if (!strcmp("purple", card1[cardIdx].value))	player[current_player].card_purple++;
		if (!strcmp("red", card1[cardIdx].value))		player[current_player].card_red++;
		if (!strcmp("white", card1[cardIdx].value))		player[current_player].card_white++;

		//다음 카드를 보드에 놓기
		board_card[step1 * 4 + step2] = dev_card1[drawn_cards[step1]];
		break;
	case 1:
		// 뽑은 카드의 스코어만큼 점수 증가
		player[current_player].score += card2[cardIdx].point;

		//가격만큼 보석 감소 <- *******예외처리해줘야됨*******
		player[current_player].blue -= card2[cardIdx].blue;
		player[current_player].green -= card2[cardIdx].green;
		player[current_player].purple -= card2[cardIdx].purple;
		player[current_player].red -= card2[cardIdx].red;
		player[current_player].white -= card2[cardIdx].white;

		//카드 혜택 적용
		if (!strcmp("blue", card2[cardIdx].value))		player[current_player].card_blue++;
		if (!strcmp("green", card2[cardIdx].value))		player[current_player].card_green++;
		if (!strcmp("purple", card2[cardIdx].value))	player[current_player].card_purple++;
		if (!strcmp("red", card2[cardIdx].value))		player[current_player].card_red++;
		if (!strcmp("white", card2[cardIdx].value))		player[current_player].card_white++;

		//다음 카드를 보드에 놓기
		board_card[step1 * 4 + step2] = dev_card2[drawn_cards[step1]];
		break;
	case 2:
		// 뽑은 카드의 스코어만큼 점수 증가
		player[current_player].score += card3[cardIdx].point;

		//가격만큼 보석 감소 <- *******예외처리해줘야됨*******
		player[current_player].blue -= card3[cardIdx].blue;
		player[current_player].green -= card3[cardIdx].green;
		player[current_player].purple -= card3[cardIdx].purple;
		player[current_player].red -= card3[cardIdx].red;
		player[current_player].white -= card3[cardIdx].white;

		//카드 혜택 적용
		if (!strcmp("blue", card3[cardIdx].value))		player[current_player].card_blue++;
		if (!strcmp("green", card3[cardIdx].value))		player[current_player].card_green++;
		if (!strcmp("purple", card3[cardIdx].value))	player[current_player].card_purple++;
		if (!strcmp("red", card3[cardIdx].value))		player[current_player].card_red++;
		if (!strcmp("white", card3[cardIdx].value))		player[current_player].card_white++;

		//다음 카드를 보드에 놓기
		board_card[step1 * 4 + step2] = dev_card3[drawn_cards[step1]];
		break;
	}


	if (!(drawn_cards[0] >= 36 || drawn_cards[1] >= 26 || drawn_cards[2] >= 16)) {
		//뽑은 카드 개수 증가
		drawn_cards[step1]++;
	}
	else {
		//덱에 남은 카드가 0인데 그 라인에 있는 카드를 뽑았을 때, 뽑은 카드의 자리에는 0,0,0,0,0이 와야함

	}

	//지울것
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		printf("%d ", board_card[i * 4 + j]);
	//	}
	//	printf("\n");
	//}getchar();
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
	else if (color == PURPLE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), PURPLE);
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
	else if (color == PURPLE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + PURPLE);
	else if (color == LIGHT_BLUE)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + LIGHT_BLUE);
	else if (color == LIGHT_GREEN)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + LIGHT_GREEN);
	else if (color == LIGHT_RED)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + LIGHT_RED);
	else if (color == LIGHT_GOLD)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (ground << 4) + LIGHT_GOLD);
}

void print_void(void) // 보드판 빈칸 출력
{
	printf("                                                            │                                                                                                                       │\n");
}

void boardpan(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[])
{
	int a[5] = { 0, 1, 2, 3, 4 };
	//int b[4] = { 0, 1, 2, 3 }; //1단계
	//int c[4] = { 0, 1, 2, 3 }; //2단계
	//int d[4] = { 0, 1, 2, 3 }; //3단계
	int card_size[3] = { 36 - drawn_cards[0], 26 - drawn_cards[1], 16 - drawn_cards[2] };
	//int card_size[3] = { 36, 26, 16 };

	printf("\n\n                                                             Splendor                                                                                           made by. 6팀 <로켓단>\n");

	//일자줄 표현
	color(WHITE);
	printf("                                                            ┌");
	for (int i = 0; i < 59; i++)
		printf("─");
	printf("┬");
	for (int i = 0; i < 59; i++)
		printf("─");
	printf("┐");
	printf("\n");

	if (current_player == 0) // player1 차례일때
	{
		printf("                                                            │ ");
		GROUND_color(WHITE);
		printf("player1                                                   ");
		color(WHITE);
		printf("│");
		printf(" player2                                                   ");
		printf("│\n");
		printf("                                                            │ ");
		GROUND_color(WHITE);
		printf("점수 : %d                                                  ", player[0].score);
		color(WHITE);
		printf("│");
		printf(" 점수 : %d                                                  ", player[1].score);
		printf("│");
		color(WHITE);
		printf("\n");

		//보석 토큰 출력
		printf("                                                            │ ");
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
		GROUND_color(PURPLE);
		printf("%d ", player[0].purple);
		GROUND_color(GOLD);
		printf("%d ", player[0].gold);
		GROUND_color(WHITE);
		printf("                                  ");
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
		color(PURPLE);
		printf("%d ", player[1].purple);
		color(GOLD);
		printf("%d ", player[1].gold);
		color(WHITE);
		printf("                                  │\n");

		//카드 토큰 출력
		printf("                                                            │ ");
		GROUND_color(WHITE);
		printf("카드 토큰 : ");
		printf("%d ", player[0].card_white);
		GROUND_color(BLUE);
		printf("%d ", player[0].card_blue);
		GROUND_color(RED);
		printf("%d ", player[0].card_red);
		GROUND_color(GREEN);
		printf("%d ", player[0].card_green);
		GROUND_color(PURPLE);
		printf("%d ", player[0].card_purple);
		GROUND_color(WHITE);
		printf("                                    ");
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
		color(PURPLE);
		printf("%d ", player[1].card_purple);
		color(WHITE);
		printf("                                    │\n");
	}
	else if (current_player == 1) // player2차례 일때
	{
		printf("                                                            │");
		color(WHITE);
		printf(" player1                                                   ");
		printf("│ ");
		GROUND_color(WHITE);
		printf("player2                                                   ");
		color(WHITE);
		printf("│");
		printf("\n");

		printf("                                                            │ ");
		printf("점수 : %d                                                  ", player[0].score);
		printf("│ ");
		GROUND_color(WHITE);
		printf("점수 : %d                                                  ", player[1].score);
		color(WHITE);
		printf("│");
		printf("\n");

		//보석 토큰 출력
		printf("                                                            │ 보석 토큰 : ");
		color(WHITE);
		printf("%d ", player[0].white);
		color(BLUE);
		printf("%d ", player[0].blue);
		color(RED);
		printf("%d ", player[0].red);
		color(GREEN);
		printf("%d ", player[0].green);
		color(PURPLE);
		printf("%d ", player[0].purple);
		color(GOLD);
		printf("%d ", player[0].gold);
		color(WHITE);
		printf("                                  │ ");
		GROUND_color(WHITE);
		printf("보석 토큰 : ");
		printf("%d ", player[1].white);
		GROUND_color(BLUE);
		printf("%d ", player[1].blue);
		GROUND_color(RED);
		printf("%d ", player[1].red);
		GROUND_color(GREEN);
		printf("%d ", player[1].green);
		GROUND_color(PURPLE);
		printf("%d ", player[1].purple);
		GROUND_color(GOLD);
		printf("%d ", player[1].gold);
		GROUND_color(WHITE);
		printf("                                  ");
		color(WHITE);
		printf("│");
		printf("\n");

		//카드 토큰 출력
		printf("                                                            │ 카드 토큰 : ");
		color(WHITE);
		printf("%d ", player[0].card_white);
		color(BLUE);
		printf("%d ", player[0].card_blue);
		color(RED);
		printf("%d ", player[0].card_red);
		color(GREEN);
		printf("%d ", player[0].card_green);
		color(PURPLE);
		printf("%d ", player[0].card_purple);
		color(WHITE);
		printf("                                    │ ");
		GROUND_color(WHITE);
		printf("카드 토큰 : ");
		printf("%d ", player[1].card_white);
		GROUND_color(BLUE);
		printf("%d ", player[1].card_blue);
		GROUND_color(RED);
		printf("%d ", player[1].card_red);
		GROUND_color(GREEN);
		printf("%d ", player[1].card_green);
		GROUND_color(PURPLE);
		printf("%d ", player[1].card_purple);
		GROUND_color(WHITE);
		printf("                                    ");
		color(WHITE);
		printf("│");
		printf("\n");
	}

	else // player1, 2 중 누구의 차례도 아닐 때
	{
		printf("                                                            │");
		color(WHITE);
		printf(" player1                                                   ");
		printf("│");
		color(WHITE);
		printf(" player2                                                   ");
		color(WHITE);
		printf("│\n");
		printf("                                                            │");
		color(WHITE);
		printf(" 점수 : %d                                                  ", player[0].score);
		printf("│");
		color(WHITE);
		printf(" 점수 : %d                                                  ", player[1].score);
		printf("│\n");
		color(WHITE);

		//보석 토큰 출력
		printf("                                                            │ 보석 토큰 : ");
		color(WHITE);
		printf("%d ", player[0].white);
		color(BLUE);
		printf("%d ", player[0].blue);
		color(RED);
		printf("%d ", player[0].red);
		color(GREEN);
		printf("%d ", player[0].green);
		color(PURPLE);
		printf("%d ", player[0].purple);
		color(GOLD);
		printf("%d ", player[0].gold);
		color(WHITE);
		printf("                                  │ 보석 토큰 : ");
		printf("%d ", player[1].white);
		color(BLUE);
		printf("%d ", player[1].blue);
		color(RED);
		printf("%d ", player[1].red);
		color(GREEN);
		printf("%d ", player[1].green);
		color(PURPLE);
		printf("%d ", player[1].purple);
		color(GOLD);
		printf("%d ", player[1].gold);
		color(WHITE);
		printf("                                  │\n");

		//카드 토큰 출력
		printf("                                                            │ 카드 토큰 : ");
		color(WHITE);
		printf("%d ", player[0].card_white);
		color(BLUE);
		printf("%d ", player[0].card_blue);
		color(RED);
		printf("%d ", player[0].card_red);
		color(GREEN);
		printf("%d ", player[0].card_green);
		color(PURPLE);
		printf("%d ", player[0].card_purple);
		color(WHITE);
		printf("                                    │ 카드 토큰 : ");
		printf("%d ", player[1].card_white);
		color(BLUE);
		printf("%d ", player[1].card_blue);
		color(RED);
		printf("%d ", player[1].card_red);
		color(GREEN);
		printf("%d ", player[1].card_green);
		color(PURPLE);
		printf("%d ", player[1].card_purple);
		color(WHITE);
		printf("                                    │\n");
	}

	//일자줄 표현
	printf("                                                            ├");
	for (int i = 0; i < 59; i++)
		printf("─");
	printf("┴");
	for (int i = 0; i < 59; i++)
		printf("─");
	printf("┤");
	printf("\n");

	//빈칸
	print_void();

	//귀족 카드 출력
	printf("                                                            │                                                               ");
	color(LIGHT_RED);
	printf("--귀족 카드--");
	color(WHITE);
	printf("                                           │\n");

	printf("                                                            │                                        ");
	color(LIGHT_RED);
	printf("┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐                    ");
	color(WHITE);
	printf("│\n");

	printf("                                                            │                                        ");
	color(LIGHT_RED);
	printf("│       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("│ │       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("│ │       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("│ │       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("│ │       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("│ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                                        ");
	color(LIGHT_RED);
	printf("│ ");
	color(WHITE);
	printf("■ %d", nob[nob_card[a[0]]].white);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(WHITE);
	printf("■ %d", nob[nob_card[a[1]]].white);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(WHITE);
	printf("■ %d", nob[nob_card[a[2]]].white);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(WHITE);
	printf("■ %d", nob[nob_card[a[3]]].white);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(WHITE);
	printf("■ %d", nob[nob_card[a[4]]].white);
	color(LIGHT_RED);
	printf("    │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                                        ");
	color(LIGHT_RED);
	printf("│ ");
	color(BLUE);
	printf("■ %d", nob[nob_card[a[0]]].blue);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(BLUE);
	printf("■ %d", nob[nob_card[a[1]]].blue);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(BLUE);
	printf("■ %d", nob[nob_card[a[2]]].blue);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(BLUE);
	printf("■ %d", nob[nob_card[a[3]]].blue);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(BLUE);
	printf("■ %d", nob[nob_card[a[4]]].blue);
	color(LIGHT_RED);
	printf("    │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                                        ");
	color(LIGHT_RED);
	printf("│ ");
	color(RED);
	printf("■ %d", nob[nob_card[a[0]]].red);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(RED);
	printf("■ %d", nob[nob_card[a[1]]].red);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(RED);
	printf("■ %d", nob[nob_card[a[2]]].red);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(RED);
	printf("■ %d", nob[nob_card[a[3]]].red);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(RED);
	printf("■ %d", nob[nob_card[a[4]]].red);
	color(LIGHT_RED);
	printf("    │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                                        ");
	color(LIGHT_RED);
	printf("│ ");
	color(GREEN);
	printf("■ %d", nob[nob_card[a[0]]].green);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(GREEN);
	printf("■ %d", nob[nob_card[a[1]]].green);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(GREEN);
	printf("■ %d", nob[nob_card[a[2]]].green);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(GREEN);
	printf("■ %d", nob[nob_card[a[3]]].green);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(GREEN);
	printf("■ %d", nob[nob_card[a[4]]].green);
	color(LIGHT_RED);
	printf("    │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                                        ");
	color(LIGHT_RED);
	printf("│ ");
	color(PURPLE);
	printf("■ %d", nob[nob_card[a[0]]].purple);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(PURPLE);
	printf("■ %d", nob[nob_card[a[1]]].purple);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(PURPLE);
	printf("■ %d", nob[nob_card[a[2]]].purple);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(PURPLE);
	printf("■ %d", nob[nob_card[a[3]]].purple);
	color(LIGHT_RED);
	printf("    │ │ ");
	color(PURPLE);
	printf("■ %d", nob[nob_card[a[4]]].purple);
	color(LIGHT_RED);
	printf("    │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                                        ");
	color(LIGHT_RED);
	printf("└─────────┘ └─────────┘ └─────────┘ └─────────┘ └─────────┘ ");
	color(WHITE);
	printf("                   │\n");

	//빈칸
	print_void();

	//개발 카드 출력
	color(WHITE);
	printf("                                                            │                                                           ");
	color(LIGHT_GREEN);
	printf("-- 1단계 개발 카드--");
	color(WHITE);
	printf("                                        │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	printf("┌────────────┐       ┌────────────┐ ┌────────────┐ ┌────────────┐ ┌────────────┐ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	printf("│            │       │ ");
	color(WHITE); 
	printf("%d", card1[board_card[0]].point);
	//printf("%d", card1[dev_card1[b[0]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[board_card[0]].value);
	//print_jowel(card1[dev_card1[b[0]]].value);
	color(LIGHT_GREEN);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card1[board_card[1]].point);
	//printf("%d", card1[dev_card1[b[1]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[board_card[1]].value);
	//print_jowel(card1[dev_card1[b[1]]].value);
	color(LIGHT_GREEN);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card1[board_card[2]].point);
	//printf("%d", card1[dev_card1[b[2]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[board_card[2]].value);
	//print_jowel(card1[dev_card1[b[2]]].value);
	color(LIGHT_GREEN);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card1[board_card[3]].point);
	//printf("%d", card1[dev_card1[b[3]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[board_card[3]].value);
	//print_jowel(card1[dev_card1[b[3]]].value);
	color(LIGHT_GREEN);
	printf("│ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	printf("│            │       │            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	printf("│  남은 카드 │       │ ");
	color(WHITE);
	printf("● %d", card1[board_card[0]].white);
	//printf("● %d", card1[dev_card1[b[0]]].white);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card1[board_card[1]].white);
	//printf("● %d", card1[dev_card1[b[1]]].white);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card1[board_card[2]].white);
	//printf("● %d", card1[dev_card1[b[2]]].white);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card1[board_card[3]].white);
	//printf("● %d", card1[dev_card1[b[3]]].white);
	color(LIGHT_GREEN);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	printf("│            │       │ ");
	color(BLUE);
	printf("● %d", card1[board_card[0]].blue);
	//printf("● %d", card1[dev_card1[b[0]]].blue);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card1[board_card[1]].blue);
	//printf("● %d", card1[dev_card1[b[1]]].blue);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card1[board_card[2]].blue);
	//printf("● %d", card1[dev_card1[b[2]]].blue);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card1[board_card[3]].blue);
	//printf("● %d", card1[dev_card1[b[3]]].blue);
	color(LIGHT_GREEN);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	if (card_size[0] >= 10)
		printf("│     %d장   │       │ ", card_size[0]);
	else
		printf("│     %d장    │       │ ", card_size[0]);
	color(RED);
	printf("● %d", card1[board_card[0]].red);
	//printf("● %d", card1[dev_card1[b[0]]].red);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card1[board_card[1]].red);
	//printf("● %d", card1[dev_card1[b[1]]].red);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card1[board_card[2]].red);
	//printf("● %d", card1[dev_card1[b[2]]].red);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card1[board_card[3]].red);
	//printf("● %d", card1[dev_card1[b[3]]].red);
	color(LIGHT_GREEN);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	printf("│            │       │ ");
	color(GREEN);
	printf("● %d", card1[board_card[0]].green);
	//printf("● %d", card1[dev_card1[b[0]]].green);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card1[board_card[1]].green);
	//printf("● %d", card1[dev_card1[b[1]]].green);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card1[board_card[2]].green);
	//printf("● %d", card1[dev_card1[b[2]]].green);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card1[board_card[3]].green);
	//printf("● %d", card1[dev_card1[b[3]]].green);
	color(LIGHT_GREEN);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	printf("│            │       │ ");
	color(PURPLE);
	printf("● %d", card1[board_card[0]].purple);
	//printf("● %d", card1[dev_card1[b[0]]].purple);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card1[board_card[1]].purple);
	//printf("● %d", card1[dev_card1[b[1]]].purple);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card1[board_card[2]].purple);
	//printf("● %d", card1[dev_card1[b[2]]].purple);
	color(LIGHT_GREEN);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card1[board_card[3]].purple);
	//printf("● %d", card1[dev_card1[b[3]]].purple);
	color(LIGHT_GREEN);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GREEN);
	printf("└────────────┘       └────────────┘ └────────────┘ └────────────┘ └────────────┘ ");
	color(WHITE);
	printf("                   │\n");



	color(WHITE);
	printf("                                                            │                                                           ");
	color(LIGHT_GOLD);
	printf("-- 2단계 개발 카드--");
	color(WHITE);
	printf("                                        │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	printf("┌────────────┐       ┌────────────┐ ┌────────────┐ ┌────────────┐ ┌────────────┐ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	printf("│            │       │ ");
	color(WHITE);
	printf("%d", card2[board_card[4]].point);
	//printf("%d", card2[dev_card2[c[0]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[board_card[4]].value);
	//print_jowel(card2[dev_card2[c[0]]].value);
	color(LIGHT_GOLD);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card2[board_card[5]].point);
	//printf("%d", card2[dev_card2[c[1]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[board_card[5]].value);
	//print_jowel(card2[dev_card2[c[1]]].value);
	color(LIGHT_GOLD);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card2[board_card[6]].point);
	//printf("%d", card2[dev_card2[c[2]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[board_card[6]].value);
	//print_jowel(card2[dev_card2[c[2]]].value);
	color(LIGHT_GOLD);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card2[board_card[7]].point);
	//printf("%d", card2[dev_card2[c[3]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[board_card[7]].value);
	//print_jowel(card2[dev_card2[c[3]]].value);
	color(LIGHT_GOLD);
	printf("│ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	printf("│            │       │            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	printf("│  남은 카드 │       │ ");
	color(WHITE);
	printf("● %d", card2[board_card[4]].white);
	//printf("● %d", card2[dev_card2[c[0]]].white);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card2[board_card[5]].white);
	//printf("● %d", card2[dev_card2[c[1]]].white);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card2[board_card[6]].white);
	//printf("● %d", card2[dev_card2[c[2]]].white);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card2[board_card[7]].white);
	//printf("● %d", card2[dev_card2[c[3]]].white);
	color(LIGHT_GOLD);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	printf("│            │       │ ");
	color(BLUE);
	printf("● %d", card2[board_card[4]].blue);
	//printf("● %d", card2[dev_card2[c[0]]].blue);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card2[board_card[5]].blue);
	//printf("● %d", card2[dev_card2[c[1]]].blue);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card2[board_card[6]].blue);
	//printf("● %d", card2[dev_card2[c[2]]].blue);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card2[board_card[7]].blue);
	//printf("● %d", card2[dev_card2[c[3]]].blue);
	color(LIGHT_GOLD);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	if (card_size[1] >= 10)
		printf("│     %d장   │       │ ", card_size[1]);
	else
		printf("│     %d장    │       │ ", card_size[1]);
	color(RED);
	printf("● %d", card2[board_card[4]].red);
	//printf("● %d", card2[dev_card2[c[0]]].red);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card2[board_card[5]].red);
	//printf("● %d", card2[dev_card2[c[1]]].red);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card2[board_card[6]].red);
	//printf("● %d", card2[dev_card2[c[2]]].red);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card2[board_card[7]].red);
	//printf("● %d", card2[dev_card2[c[3]]].red);
	color(LIGHT_GOLD);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	printf("│            │       │ ");
	color(GREEN);
	printf("● %d", card2[board_card[4]].green);
	//printf("● %d", card2[dev_card2[c[0]]].green);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card2[board_card[5]].green);
	//printf("● %d", card2[dev_card2[c[1]]].green);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card2[board_card[6]].green);
	//printf("● %d", card2[dev_card2[c[2]]].green);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card2[board_card[7]].green);
	//printf("● %d", card2[dev_card2[c[3]]].green);
	color(LIGHT_GOLD);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	printf("│            │       │ ");
	color(PURPLE);
	printf("● %d", card2[board_card[4]].purple);
	//printf("● %d", card2[dev_card2[c[0]]].purple);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card2[board_card[5]].purple);
	//printf("● %d", card2[dev_card2[c[1]]].purple);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card2[board_card[6]].purple);
	//printf("● %d", card2[dev_card2[c[2]]].purple);
	color(LIGHT_GOLD);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card2[board_card[7]].purple);
	//printf("● %d", card2[dev_card2[c[3]]].purple);
	color(LIGHT_GOLD);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_GOLD);
	printf("└────────────┘       └────────────┘ └────────────┘ └────────────┘ └────────────┘ ");
	color(WHITE);
	printf("                   │\n");



	color(WHITE);
	printf("                                                            │                                                           ");
	color(LIGHT_BLUE);
	printf("-- 3단계 개발 카드--");
	color(WHITE);
	printf("                                        │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	printf("┌────────────┐       ┌────────────┐ ┌────────────┐ ┌────────────┐ ┌────────────┐ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	printf("│            │       │ ");
	color(WHITE);
	printf("%d", card3[board_card[8]].point);
	//printf("%d", card3[dev_card3[d[0]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[board_card[8]].value);
	//print_jowel(card3[dev_card3[d[0]]].value);
	color(LIGHT_BLUE);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card3[board_card[9]].point);
	//printf("%d", card3[dev_card3[d[1]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[board_card[9]].value);
	//print_jowel(card3[dev_card3[d[1]]].value);
	color(LIGHT_BLUE);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card3[board_card[10]].point);
	//printf("%d", card3[dev_card3[d[2]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[board_card[10]].value);
	//print_jowel(card3[dev_card3[d[2]]].value);
	color(LIGHT_BLUE);
	printf("│ │ ");
	color(WHITE);
	printf("%d", card3[board_card[11]].point);
	//printf("%d", card3[dev_card3[d[3]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[board_card[11]].value);
	//print_jowel(card3[dev_card3[d[3]]].value);
	color(LIGHT_BLUE);
	printf("│ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	printf("│            │       │            │ │            │ │            │ │            │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	printf("│  남은 카드 │       │ ");
	color(WHITE);
	printf("● %d", card3[board_card[8]].white);
	//printf("● %d", card3[dev_card3[d[0]]].white);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card3[board_card[9]].white);
	//printf("● %d", card3[dev_card3[d[1]]].white);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card3[board_card[10]].white);
	//printf("● %d", card3[dev_card3[d[2]]].white);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(WHITE);
	printf("● %d", card3[board_card[11]].white);
	//printf("● %d", card3[dev_card3[d[3]]].white);
	color(LIGHT_BLUE);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	printf("│            │       │ ");
	color(BLUE);
	printf("● %d", card3[board_card[8]].blue);
	//printf("● %d", card3[dev_card3[d[0]]].blue);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card3[board_card[9]].blue);
	//printf("● %d", card3[dev_card3[d[1]]].blue);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card3[board_card[10]].blue);
	//printf("● %d", card3[dev_card3[d[2]]].blue);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(BLUE);
	printf("● %d", card3[board_card[11]].blue);
	//printf("● %d", card3[dev_card3[d[3]]].blue);
	color(LIGHT_BLUE);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	if (card_size[2] >= 10)
		printf("│     %d장   │       │ ", card_size[2]);
	else
		printf("│     %d장    │       │ ", card_size[2]);
	color(RED);
	printf("● %d", card3[board_card[8]].red);
	//printf("● %d", card3[dev_card3[d[0]]].red);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card3[board_card[9]].red);
	//printf("● %d", card3[dev_card3[d[1]]].red);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card3[board_card[10]].red);
	//printf("● %d", card3[dev_card3[d[2]]].red);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(RED);
	printf("● %d", card3[board_card[11]].red);
	//printf("● %d", card3[dev_card3[d[3]]].red);
	color(LIGHT_BLUE);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	printf("│            │       │ ");
	color(GREEN);
	printf("● %d", card3[board_card[8]].green);
	//printf("● %d", card3[dev_card3[d[0]]].green);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card3[board_card[9]].green);
	//printf("● %d", card3[dev_card3[d[1]]].green);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card3[board_card[10]].green);
	//printf("● %d", card3[dev_card3[d[2]]].green);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(GREEN);
	printf("● %d", card3[board_card[11]].green);
	//printf("● %d", card3[dev_card3[d[3]]].green);
	color(LIGHT_BLUE);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	printf("│            │       │ ");
	color(PURPLE);
	printf("● %d", card3[board_card[8]].purple);
	//printf("● %d", card3[dev_card3[d[0]]].purple);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card3[board_card[9]].purple);
	//printf("● %d", card3[dev_card3[d[1]]].purple);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card3[board_card[10]].purple);
	//printf("● %d", card3[dev_card3[d[2]]].purple);
	color(LIGHT_BLUE);
	printf("       │ │ ");
	color(PURPLE);
	printf("● %d", card3[board_card[11]].purple);
	//printf("● %d", card3[dev_card3[d[3]]].purple);
	color(LIGHT_BLUE);
	printf("       │ ");
	color(WHITE);
	printf("                   │\n");

	printf("                                                            │                   ");
	color(LIGHT_BLUE);
	printf("└────────────┘       └────────────┘ └────────────┘ └────────────┘ └────────────┘ ");
	color(WHITE);
	printf("                   │\n");


	//빈칸
	print_void();

	//토큰 창고 보유 토큰 출력
	printf("                                                            │                                     ● %d    ", white);
	color(BLUE);
	printf("● %d    ", blue);
	color(RED);
	printf("● %d    ", red);
	color(GREEN);
	printf("● %d    ", green);
	color(PURPLE);
	printf("● %d    ", purple);
	color(GOLD);
	printf("● %d", gold);
	color(WHITE);
	printf("                                      │\n");

	//빈칸
	print_void();

	//일자줄 표현
	color(WHITE);
	printf("                                                            ├");
	for (int i = 0; i < 59; i++)
		printf("─");
	printf("┬");
	for (int i = 0; i < 59; i++)
		printf("─");
	printf("┤");
	printf("\n");


	if (current_player == 2) // player3 차례일때
	{
		printf("                                                            │ ");
		GROUND_color(WHITE);
		printf("player3                                                   ");
		color(WHITE);
		printf("│");
		printf(" player4                                                   ");
		printf("│");
		printf("\n");

		printf("                                                            │ ");
		GROUND_color(WHITE);
		printf("점수 : %d                                                  ", player[2].score);
		color(WHITE);
		printf("│");
		printf(" 점수 : %d                                                  ", player[3].score);
		printf("│\n");
		color(WHITE);

		//보석 토큰 출력
		printf("                                                            │ ");
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
		GROUND_color(PURPLE);
		printf("%d ", player[2].purple);
		GROUND_color(GOLD);
		printf("%d ", player[2].gold);
		GROUND_color(WHITE);
		printf("                                  ");
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
		color(PURPLE);
		printf("%d ", player[3].purple);
		color(GOLD);
		printf("%d ", player[3].gold);
		color(WHITE);
		printf("                                  │\n");

		//카드 토큰 출력
		printf("                                                            │ ");
		GROUND_color(WHITE);
		printf("카드 토큰 : ");
		printf("%d ", player[2].card_white);
		GROUND_color(BLUE);
		printf("%d ", player[2].card_blue);
		GROUND_color(RED);
		printf("%d ", player[2].card_red);
		GROUND_color(GREEN);
		printf("%d ", player[2].card_green);
		GROUND_color(PURPLE);
		printf("%d ", player[2].card_purple);
		GROUND_color(WHITE);
		printf("                                    ");
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
		color(PURPLE);
		printf("%d ", player[3].card_purple);
		color(WHITE);
		printf("                                    │");
		printf("\n");
	}
	else if (current_player == 3) // player4차례 일때
	{
		printf("                                                            │ ");
		color(WHITE);
		printf("player3                                                   ");
		printf("│ ");
		GROUND_color(WHITE);
		printf("player4                                                   ");
		color(WHITE);
		printf("│");
		printf("\n");

		printf("                                                            │ ");
		printf("점수 : %d                                                  ", player[2].score);
		printf("│ ");
		GROUND_color(WHITE);
		printf("점수 : %d                                                  ", player[3].score);
		color(WHITE);
		printf("│");
		printf("\n");

		//보석 토큰 출력
		printf("                                                            │ 보석 토큰 : ");
		color(WHITE);
		printf("%d ", player[2].white);
		color(BLUE);
		printf("%d ", player[2].blue);
		color(RED);
		printf("%d ", player[2].red);
		color(GREEN);
		printf("%d ", player[2].green);
		color(PURPLE);
		printf("%d ", player[2].purple);
		color(GOLD);
		printf("%d ", player[2].gold);
		color(WHITE);
		printf("                                  │ ");
		GROUND_color(WHITE);
		printf("보석 토큰 : ");
		printf("%d ", player[3].white);
		GROUND_color(BLUE);
		printf("%d ", player[3].blue);
		GROUND_color(RED);
		printf("%d ", player[3].red);
		GROUND_color(GREEN);
		printf("%d ", player[3].green);
		GROUND_color(PURPLE);
		printf("%d ", player[3].purple);
		GROUND_color(GOLD);
		printf("%d ", player[3].gold);
		GROUND_color(WHITE);
		printf("                                  ");
		color(WHITE);
		printf("│\n");

		//카드 토큰 출력
		printf("                                                            │ 카드 토큰 : ");
		color(WHITE);
		printf("%d ", player[2].card_white);
		color(BLUE);
		printf("%d ", player[2].card_blue);
		color(RED);
		printf("%d ", player[2].card_red);
		color(GREEN);
		printf("%d ", player[2].card_green);
		color(PURPLE);
		printf("%d ", player[2].card_purple);
		color(WHITE);
		printf("                                    │ ");
		GROUND_color(WHITE);
		printf("카드 토큰 : ");
		printf("%d ", player[3].card_white);
		GROUND_color(BLUE);
		printf("%d ", player[3].card_blue);
		GROUND_color(RED);
		printf("%d ", player[3].card_red);
		GROUND_color(GREEN);
		printf("%d ", player[3].card_green);
		GROUND_color(PURPLE);
		printf("%d ", player[3].card_purple);
		GROUND_color(WHITE);
		printf("                                    ");
		color(WHITE);
		printf("│");
		printf("\n");
	}

	else // player3, 4 중 누구의 차례도 아닐 때
	{
		printf("                                                            │");
		color(WHITE);
		printf(" player3                                                   ");
		printf("│");
		color(WHITE);
		printf(" player4                                                   ");
		color(WHITE);
		printf("│\n");

		printf("                                                            │");
		color(WHITE);
		printf(" 점수 : %d                                                  ", player[2].score);
		printf("│");
		color(WHITE);
		printf(" 점수 : %d                                                  ", player[3].score);
		printf("│\n");
		color(WHITE);

		//보석 토큰 출력
		printf("                                                            │ 보석 토큰 : ");
		color(WHITE);
		printf("%d ", player[2].white);
		color(BLUE);
		printf("%d ", player[2].blue);
		color(RED);
		printf("%d ", player[2].red);
		color(GREEN);
		printf("%d ", player[2].green);
		color(PURPLE);
		printf("%d ", player[2].purple);
		color(GOLD);
		printf("%d ", player[2].gold);
		color(WHITE);
		printf("                                  │ 보석 토큰 : ");
		printf("%d ", player[3].white);
		color(BLUE);
		printf("%d ", player[3].blue);
		color(RED);
		printf("%d ", player[3].red);
		color(GREEN);
		printf("%d ", player[3].green);
		color(PURPLE);
		printf("%d ", player[3].purple);
		color(GOLD);
		printf("%d ", player[3].gold);
		color(WHITE);
		printf("                                  │\n");

		//카드 토큰 출력
		printf("                                                            │ 카드 토큰 : ");
		color(WHITE);
		printf("%d ", player[2].card_white);
		color(BLUE);
		printf("%d ", player[2].card_blue);
		color(RED);
		printf("%d ", player[2].card_red);
		color(GREEN);
		printf("%d ", player[2].card_green);
		color(PURPLE);
		printf("%d ", player[2].card_purple);
		color(WHITE);
		printf("                                    │ 카드 토큰 : ");
		printf("%d ", player[3].card_white);
		color(BLUE);
		printf("%d ", player[3].card_blue);
		color(RED);
		printf("%d ", player[3].card_red);
		color(GREEN);
		printf("%d ", player[3].card_green);
		color(PURPLE);
		printf("%d ", player[3].card_purple);
		color(WHITE);
		printf("                                    │\n");
	}

	//일자줄 표현
	printf("                                                            └");
	for (int i = 0; i < 59; i++)
		printf("─");
	printf("┴");
	for (int i = 0; i < 59; i++)
		printf("─");
	printf("┘");
	printf("\n");
}

void print_jowel(char jowel[]) // 카드 보석 토큰 출력
{
	if (!strcmp(jowel, "white"))
	{
		color(WHITE);
		printf("■");
	}

	if (!strcmp(jowel, "blue"))
	{
		color(BLUE);
		printf("■");
	}

	if (!strcmp(jowel, "red"))
	{
		color(RED);
		printf("■");
	}

	if (!strcmp(jowel, "green"))
	{
		color(GREEN);
		printf("■");
	}

	if (!strcmp(jowel, "purple"))
	{
		color(PURPLE);
		printf("■");
	}
}