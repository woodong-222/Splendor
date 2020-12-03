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
#define BROWN 5
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

void intro(void) // 인트로 출력
{
	int key, co = RED; // key : 키를 입력받을 함수, co : 인트로의 color변수
	while (1)
	{
		switch (co)
		{
		case RED: // co변수에 색바꿈을 해줌 그전에 빨강이였으면 초록으로 초록이였으면 보라색으로 ... 
			co = GREEN;
			break;
		case GREEN:
			co = BROWN;
			break;
		case BROWN:
			co = BLUE;
			break;
		case BLUE:
			co = RED;
			break;
		}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		color(co); //위의 switch문에서 바꾼 색 적용
		printf("\t\t\t\t\t\t---------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\t\t\t\t      ::::::::       :::::::::       :::            ::::::::::      ::::    :::       :::::::::       ::::::::       ::::::::: \n");
		printf("\t\t\t\t\t\t\t    :+:    :+:      :+:    :+:      :+:            :+:             :+:+:   :+:       :+:    :+:     :+:    :+:      :+:    :+:\n");
		printf("\t\t\t\t\t\t\t  +:+              +:+    +:+      +:+            +:+             :+:+:+  +:+       +:+    +:+     +:+    +:+      +:+    +:+  \n");
		printf("\t\t\t\t\t\t\t  +#++:++#++      +#++:++#+       +#+            +#++:++#        +#+ +:+ +#+       +#+    +:+     +#+    +:+      +#++:++#:    \n");
		printf("\t\t\t\t\t\t\t        +#+      +#+             +#+            +#+             +#+  +#+#+#       +#+    +#+     +#+    +#+      +#+    +#+    \n");
		printf("\t\t\t\t\t\t\t#+#    #+#      #+#             #+#            #+#             #+#   #+#+#       #+#    #+#     #+#    #+#      #+#    #+#     \n");
		printf("\t\t\t\t\t\t\t########       ###             ##########     ##########      ###    ####       #########       ########       ###    ###      \n\n");
		printf("\t\t\t\t\t\t---------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		color(WHITE);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t ");
		if (co == RED || co == BROWN) // 인트로 색이 빨강, 보라색일때만 출력(글씨가 깜박이는것을 표현)
			printf("Enter키를 누르면 게임시작");
		color(RED);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*이 게임을 플레이하기 전에 f11을 눌러 전체화면으로 바꿔주세요.*");
		color(WHITE);
		Sleep(1000); // 색의 깜박임의 주기를 늘려줌
		if (_kbhit()) // 엔터키를 입력받았을 때 무한루프 탈출
		{
			key = _getch();
			if (key == 13)
			{
				M(DO); // 엔터키 눌렀을 때 효과음
				system("cls");
				break;
			}
		}
	}
}

void M(int scale) // 효과음 표현 함수 M() 괄호안에 원하는 계이름 입력시 그 음 0.5초 동안 출력
{
	switch (scale)
	{
	case DO: //도
		Beep(DO, 500);
		break;
	case RE: //레
		Beep(RE, 500);
		break;
	case MI: //미
		Beep(MI, 500);
		break;
	case PA: //파
		Beep(PA, 500);
		break;
	case SOL: //솔
		Beep(SOL, 500);
		break;
	case RA: //라
		Beep(RA, 500);
		break;
	case SI: //시
		Beep(SI, 500);
		break;
	case _DO: //높은 도
		Beep(_DO, 500);
		break;
	}
}