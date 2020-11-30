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
#define DO    260 //도
#define RE    290 //레
#define MI    330 //미
#define PA    340 //파
#define SOL   380 //솔
#define RA    430 //라
#define SI    490 //시
#define _DO    510 //도

void intro(void)
{
	int key, co = RED;
	while(1)
	{
		switch (co)
		{
		case RED:
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
		color(co); 
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
		if (co == RED || co == BROWN)
			printf("Enter키를 누르면 게임시작");
		color(RED);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*이 게임을 플레이하기 전에 f11을 눌러 전체화면으로 바꿔주세요.*");
		color(WHITE);
		switch (co)
		{
		case RED:
			break;
		case GREEN:
			break;
		case BROWN:
			break;
		case BLUE:
			break;
		}
		Sleep(1000);
			if (kbhit())
			{
				key = getch();
				if (key == 13)
				{
					system("cls");
					M(DO);
					break;
				}
			}
	}
}

void M(int scale)
{
	switch (scale)
	{
	case DO:
		Beep(DO, 500);
		break;
	case RE:
		Beep(RE, 500);
		break;
	case MI:
		Beep(MI, 500);
		break;
	case PA:
		Beep(PA, 500);
		break;
	case SOL:
		Beep(SOL, 500);
		break;
	case RA:
		Beep(RA, 500);
		break;
	case SI:
		Beep(SI, 500);
		break;
	case _DO:
		Beep(_DO, 500);
		break;
	}
}
