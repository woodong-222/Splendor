#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
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
#define DO    260 //紫
#define RE    290 //溯
#define MI    330 //嘐
#define PA    340 //だ
#define SOL   380 //樂
#define RA    430 //塭
#define SI    490 //衛
#define _DO    510 //紫

Develop card1[41] = { {1,"purple",0,4,0,0,0}, {1,"red",4,0,0,0,0}, {1,"blue",0,0,4,0,0}, {1,"green",0,0,0,0,4}, {1,"white",0,0,0,4,0}, {0,"blue",1,0,1,1,1}, {0,"blue",1,0,2,2,0}, {0,"blue",0,1,1,3,0}, {0,"blue",1,0,2,1,1}, {0,"blue",0,0,0,0,3}, {0,"blue",0,0,0,2,2}, {0,"blue",1,0,0,0,2}, {0,"green",0,0,3,0,0}, {0,"green",0,2,2,0,0}, {0,"green",0,1,2,0,2}, {0,"green",1,1,1,0,1}, {0,"green",1,1,1,0,2}, {0,"green",2,1,0,0,0}, {0,"green",1,3,0,1,0}, {0,"purple",0,0,1,2,0}, {0,"purple",1,1,1,1,0}, {0,"purple",0,0,0,3,0}, {0,"purple",0,0,3,1,1}, {0,"purple",1,2,1,1,0}, {0,"purple",2,0,0,2,0}, {0,"red",2,1,0,1,1}, {0,"red",2,0,2,0,0}, {0,"red",1,1,0,1,1}, {0,"red",0,2,0,1,0}, {0,"red",2,0,0,1,2}, {0,"red",1,0,1,0,3}, {0,"white",0,2,0,0,2}, {0,"white",0,1,1,2,1}, {0,"white",0,1,1,1,1}, {0,"white",0,3,0,0,0}, {0,"white",0,0,2,0,1}, {0,"white",0,2,0,2,1}, {0,"white",3,1,0,0,1}, {0,"red",3,0,0,0,0}, {0,"purple",2,2,1,0,0}, {0,"NULL",0,0,0,0,0} };
Develop card2[31] = { { 2,"purple",5,0,0,0,0}, {2,"blue",5,3,0,0,0}, {1,"green",2,3,0,0,2}, {2,"white",0,0,4,1,2}, {1,"green",4,2,0,0,1}, {3,"white",6,0,0,0,0}, {2,"white",0,0,5,0,0}, {1,"green",3,0,3,2,0}, {2,"blue",2,0,1,0,4}, {1,"white",0,0,2,3,2}, {1,"red",0,3,2,0,3}, {3,"blue",0,6,0,0,0}, {1,"purple",3,2,0,2,0}, {1,"blue",0,2,0,3,3},{1,"red",2,0,2,0,3}, {2,"purple",0,0,3,5,0}, {2,"green",0,0,0,5,0}, {2,"green",0,5,0,3,0}, {1,"purple",3,0,0,3,2}, {2,"blue",0,5,0,0,0}, {2,"red",0,0,0,0,5}, {1,"blue",0,2,3,2,0}, {2,"red",1,4,0,2,0}, {3,"red",0,0,6,0,0}, {1,"white",2,3,3,0,0}, {3,"green",0,0,0,6,0}, {2,"white",0,0,5,0,3}, {3,"purple",0,0,0,0,6}, {2,"purple",0,1,2,4,0}, {2,"red",3,0,0,0,5}, {0,"NULL",0,0,0,0,0} };
Develop card3[21] = { { 4,"blue",7,0,0,0,0 }, { 4,"green",3,6,0,3,0} , {4,"red",0,0,0,7,0}, {3, "purple",3,3,3,5,0}, {4, "white",3,0,3,0,6}, {3, "green", 5,3,3,0,3}, {4,"purple",0,0,7,0,0},{3,"blue",3,0,3,3,5}, {5,"purple",0,0,7,0,3},{3,"white",0,3,5,3,3},{4,"red",0,3,3,6,0},{5,"red",0,0,3,7,0},{5,"blue",7,3,0,0,0},{4,"white",0,0,6,3,3},{5,"green",0,7,0,3,0}, {4, "purple",0,0,6,3,3}, {4,"green",0,7,0,0,0},{4,"blue",6,3,0,0,3}, {5,"white",3,0,0,0,7}, {3,"red",3,5,0,3,3}, {0,"NULL",0,0,0,0,0} };
Nob nob[11] = { {4,4,0,0,0}, {0,0,4,0,4}, {0,0,4,4,0}, {4,0,3,0,3}, {3,3,0,0,3}, {0,4,0,4,0}, {3,3,0,3,0}, {0,3,3,3,0}, {0,0,3,3,3}, {4,0,0,0,4}, {0} };
Player player[4] = { 0 };
Develop keep_card[4][3] = { 0 }; // 鎗и 蘋萄 盪濰 ex) keep_card[0][1] = player1檜 籀擠 鎗и 蘋萄

int main(void)
{
	//keep_card[0][0] = card3[0];
	//keep_card[0][1] = card3[1];
	//keep_card[0][2] =card3[2];
	//鎗 л熱 纔蝶お辨

	// 蘋萄 掘衙 纔蝶お辨
	/*
	for (int mm = 0; mm < 4; mm++)
	{
		player[mm].white = 100;
		player[mm].blue = 100;
		player[mm].red = 100;
		player[mm].green = 100;
		player[mm].purple = 100;
	}
	*/

	int nob_card[11], i, temp, x, y, dev_card1[41], dev_card2[31], dev_card3[21];
	int board_card[12] = { 0 }; //爾萄縑 り藥霞 蘋萄曖 檣策蝶蒂 盪濰ж朝 寡翮
	dev_card1[40] = 40; // 蘋萄蒂 棻 鉻懊擊 陽
	dev_card2[30] = 30; // 蘋萄蒂 棻 鉻懊擊 陽
	dev_card3[20] = 20; // 蘋萄蒂 棻 鉻懊擊 陽

	srand((unsigned int)time(NULL));

	//醞犒橈朝 敝褶 蘋萄
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

	//醞犒橈朝 偃嫦 蘋萄1 敷Ы
	for (i = 0; i < 40; i++) dev_card1[i] = i;//策擊 檣策蝶縑 蜃醮 蟾晦��
	for (i = 0; i < 100; i++)
	{
		x = rand() % 40;//0~39曖 陪熱蒂 x縑 蟾晦��
		y = rand() % 40;

		if (x != y) {//x諦 y陛 棻腦賊 dev_card1[x]諦 dev_card1[y]蒂 掖��
			temp = dev_card1[x];
			dev_card1[x] = dev_card1[y];
			dev_card1[y] = temp;
		}
	}

	//醞犒橈朝 偃嫦 蘋萄2
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

	//醞犒橈朝 偃嫦 蘋萄3
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

	//爾萄っ縑 り艦 蘋萄 蟾晦��
	for (i = 0; i < 4; i++)
		board_card[i] = dev_card1[i];
	for (i = 0; i < 4; i++)
		board_card[i + 4] = dev_card2[i];
	for (i = 0; i < 4; i++)
		board_card[i + 8] = dev_card3[i];

	drawn_cards[0] += 4; // 偃嫦蘋萄1縑憮 蘋萄 4濰 撮た
	drawn_cards[1] += 4; // 偃嫦蘋萄2縑憮 蘋萄 4濰 撮た
	drawn_cards[2] += 4; // 偃嫦蘋萄3縑憮 蘋萄 4濰 撮た

	//檣お煎 轎溘
	//intro(); // 纔蝶お 衛縑 剪蝸葬賊 檜 睡碟虜 輿戮籀葬п 緒艇 啪歜 纔蝶お 陛棟

	//爾萄っ 轎溘
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);

	// 啪歜 轎溘
	game(nob_card, dev_card1, dev_card2, dev_card3, board_card);

	//啪歜 部 
	//啪歜 蝓葬 轎溘
	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
	printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            弛                                                   ");
	color(LIGHT_RED);
	printf("PLAYER %d WINNER!!", (check_winner() + 1)); // 辦蝓濠 っ欽 л熱
	color(WHITE);
	printf("                                                   弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	system("pause");
	return 0;
}

void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[])
{
	int key; //殮溘嫡擎 酈蒂 盪濰ж朝 酈 盪濰 滲熱

	//檜楝и 曄衝戲煎 壽曖 啪歜 詭撮雖 轎溘
	printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
	printf("                                                            弛 錳ж朝 �做螃� 摹鷗п輿撮蹂.                                                                                           弛\n");
	printf("                                                            弛 爾戮 饜贖 陛螳螃晦  :   A                                                                                             弛\n");
	printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦  :   S                                                                                             弛\n");
	printf("                                                            弛 偃嫦 蘋萄 鎗ж晦    :   D                                                                                             弛\n");
	printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			//爾戮 饜贖 陛螳螃晦
			if (key == 97 || key == 65) // 酈爾萄 a酈 殮溘
			{
				M(DO); // �膩�擠 '紫' 轎溘

				get_jowel(nob_card, dev_card1, dev_card2, dev_card3, board_card); // 爾戮 饜贖 陛螳螃晦 л熱

				current_player++;
				if (current_player == 4) current_player = 0;// и夥襪 給嬴 棻衛 1廓 離滔橾 陽 current_player蒂 0戲煎 蟾晦��

				if ((player[0].score >= 15 || player[1].score >= 15 || player[2].score >= 15 || player[3].score >= 15) && current_player == 0) // 啪歜 部
				{
					return;
				}

				if (player[0].score >= 15 || player[1].score >= 15 || player[2].score >= 15 || player[3].score >= 15) // 援捱陛陛 15薄擊 剩啣擊 陽 葆雖虞 欐檜塭堅 奢雖
				{

					system("cls");
					boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
					printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
					printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
					printf("                                                            弛 15薄檜 剩擎 player陛 氈蝗棲棻.                                                                                        弛\n");
					printf("                                                            弛 葆雖虞 欐檜嘎煎 褐醞�� Ы溯檜п輿撮蹂.                                                                                 弛\n");
					printf("                                                            弛                                                                                                                       弛\n");
					printf("                                                            弛                                                                                                                       弛\n");
					printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
					Sleep(4000); // 4蟾 雖翱 �� 
				}

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
				printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
				printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
				printf("                                                            弛 錳ж朝 �做螃� 摹鷗п輿撮蹂.                                                                                           弛\n");
				printf("                                                            弛 爾戮 饜贖 陛螳螃晦  :   A                                                                                             弛\n");
				printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦  :   S                                                                                             弛\n");
				printf("                                                            弛 偃嫦 蘋萄 鎗ж晦    :   D                                                                                             弛\n");
				printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");



			}

			//偃嫦 蘋萄 掘殮ж晦
			if (key == 115 || key == 83) // 酈爾萄 s酈 殮溘
			{
				M(RE); // �膩�擠 '溯' 轎溘

				get_card(nob_card, dev_card1, dev_card2, dev_card3, board_card);//偃嫦 蘋萄 掘殮ж晦 л熱

				current_player++;
				if (current_player == 4) current_player = 0;// и夥襪 給嬴 棻衛 1廓 離滔橾 陽 current_player蒂 0戲煎 蟾晦��

				if ((player[0].score >= 15 || player[1].score >= 15 || player[2].score >= 15 || player[3].score >= 15) && current_player == 0) // 啪歜部
				{
					return;
				}

				if (player[0].score >= 15 || player[1].score >= 15 || player[2].score >= 15 || player[3].score >= 15) // 援捱陛陛 15薄擊 剩啣擊 陽 葆雖虞 欐檜塭堅 奢雖
				{

					system("cls");
					boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
					printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
					printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
					printf("                                                            弛 15薄檜 剩擎 player陛 氈蝗棲棻.                                                                                        弛\n");
					printf("                                                            弛 葆雖虞 欐檜嘎煎 褐醞�� Ы溯檜п輿撮蹂.                                                                                 弛\n");
					printf("                                                            弛                                                                                                                       弛\n");
					printf("                                                            弛                                                                                                                       弛\n");
					printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
					Sleep(4000); // 4蟾 雖翱 �� 
				}

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
				printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
				printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
				printf("                                                            弛 錳ж朝 �做螃� 摹鷗п輿撮蹂.                                                                                           弛\n");
				printf("                                                            弛 爾戮 饜贖 陛螳螃晦  :   A                                                                                             弛\n");
				printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦  :   S                                                                                             弛\n");
				printf("                                                            弛 偃嫦 蘋萄 鎗ж晦    :   D                                                                                             弛\n");
				printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

			}

			//偃嫦 蘋萄 鎗ж晦
			if (key == 100 || key == 68) // 酈爾萄 d酈 殮溘
			{
				M(MI); // �膩�擠 '嘐' 轎溘

				book_card(nob_card, dev_card1, dev_card2, dev_card3, board_card); //偃嫦 蘋萄 鎗ж晦 л熱 嬪纂

				current_player++;
				if (current_player == 4) current_player = 0;// и夥襪 給嬴 棻衛 1廓 離滔橾 陽 current_player蒂 0戲煎 蟾晦��

				if ((player[0].score >= 15 || player[1].score >= 15 || player[2].score >= 15 || player[3].score >= 15) && current_player == 0) // 啪歜部
				{
					return;
				}

				if (player[0].score >= 15 || player[1].score >= 15 || player[2].score >= 15 || player[3].score >= 15) // 援捱陛陛 15薄擊 剩啣擊 陽 葆雖虞 欐檜塭堅 奢雖
				{

					system("cls");
					boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
					printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
					printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
					printf("                                                            弛 15薄檜 剩擎 player陛 氈蝗棲棻.                                                                                        弛\n");
					printf("                                                            弛 葆雖虞 欐檜嘎煎 褐醞�� Ы溯檜п輿撮蹂.                                                                                 弛\n");
					printf("                                                            弛                                                                                                                       弛\n");
					printf("                                                            弛                                                                                                                       弛\n");
					printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
					Sleep(4000); // 4蟾 雖翱 �� 
				}

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
				printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
				printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
				printf("                                                            弛 錳ж朝 �做螃� 摹鷗п輿撮蹂.                                                                                           弛\n");
				printf("                                                            弛 爾戮 饜贖 陛螳螃晦  :   A                                                                                             弛\n");
				printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦  :   S                                                                                             弛\n");
				printf("                                                            弛 偃嫦 蘋萄 鎗ж晦    :   D                                                                                             弛\n");
				printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");


				/*轎溘蕨衛
				printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
				printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
				printf("                                                            弛 偃嫦 蘋萄 鎗ж晦蒂 摹鷗ц蝗棲棻.                                                                                      弛\n");
				printf("                                                            弛                                                                                                                       弛\n");
				printf("                                                            弛                                                                                                                       弛\n");
				printf("                                                            弛                                                                                                                       弛\n");
				printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
				*/
			}
		}

	}
}

void get_jowel(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]) //Ы溯檜橫 饜贖 翱骯 塽 瞪羹 饜贖 翱骯
{
	int w = 0; // ��
	int b = 0; // だ
	int r = 0; // 說
	int gr = 0; // 蟾
	int pu = 0; // 爾
	int key; // 殮溘嫡擎 酈高 盪濰 滲熱
	int w2 = 0; // ��2
	int b2 = 0; // だ2
	int r2 = 0; // 說2
	int gr2 = 0; // 蟾2
	int pu2 = 0; // 爾2
	int token = 0; // 饜贖擊 3偃 嫡擊 陽 0 盪濰, 2偃橾 陽 1 盪濰


_start: // goto _start; 曖 紫雜雖薄
	w = 0; b = 0; r = 0; gr = 0; pu = 0; w2 = 0; b2 = 0; r2 = 0; gr2 = 0; pu2 = 0; token = 0;

	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
	printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
	printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
	printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)                       弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == 113 || key == 81) // 酈爾萄 q酈 殮溘
			{
				M(DO); // �膩�擠 '紫' 轎溘
				w += 1;
				break;
			}
			else if (key == 119 || key == 87) // 酈爾萄 w酈 殮溘
			{
				M(RE); // �膩�擠 '溯' 轎溘
				b += 1;
				break;
			}
			else if (key == 101 || key == 69) // 酈爾萄 e酈 殮溘
			{
				M(MI); // �膩�擠 '嘐' 轎溘
				r += 1;
				break;
			}
			else if (key == 114 || key == 82) // 酈爾萄 r酈 殮溘
			{
				M(PA); // �膩�擠 'だ' 轎溘
				gr += 1;
				break;
			}
			else if (key == 116 || key == 84) // 酈爾萄 t酈 殮溘
			{
				M(SOL); // �膩�擠 '樂' 轎溘
				pu += 1;
				break;
			}
			else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
			{
				M(_DO); // �膩�擠 '堪擎 紫' 轎溘
				current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
				return; //л熱 謙猿
				break;
			}
		}
	}

	if (w == 1 || b == 1 || r == 1 || gr == 1 || pu == 1) // 籀擠 殮溘 嫡擎 饜贖 轎溘
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
		printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)                       弛\n");
		printf("                                                            弛  ");
		if (b == 1)
			color(BLUE);
		if (r == 1)
			color(RED);
		if (gr == 1)
			color(GREEN);
		if (pu == 1)
			color(PURPLE);
		printf("≒");
		color(WHITE);
		printf("                                                                                                                   弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	}

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == 113 || key == 81) // 酈爾萄 q酈 殮溘
			{
				M(DO); // �膩�擠 '紫' 轎溘
				w += 1;
				w2 = 1;
				break;
			}
			else if (key == 119 || key == 87) // 酈爾萄 w酈 殮溘
			{
				M(RE); // �膩�擠 '溯' 轎溘
				b += 1;
				b2 = 1;
				break;
			}
			else if (key == 101 || key == 69) // 酈爾萄 e酈 殮溘
			{
				M(MI); // �膩�擠 '嘐' 轎溘
				r += 1;
				r2 = 1;
				break;
			}
			else if (key == 114 || key == 82) // 酈爾萄 r酈 殮溘
			{
				M(PA); // �膩�擠 'だ' 轎溘
				gr += 1;
				gr2 = 1;
				break;
			}
			else if (key == 116 || key == 84) // 酈爾萄 t酈 殮溘
			{
				M(SOL); // �膩�擠 '樂' 轎溘
				pu += 1;
				pu2 = 1;
				break;
			}
			else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
			{
				M(_DO); // �膩�擠 '紫' 轎溘
				current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
				return; // л熱 謙猿
				break;
			}
		}
	}

	if (w == 2 || b == 2 || r == 2 || gr == 2 || pu == 2) // 偽擎 囀檣擊 2廓 嫡懊擊 陽
	{
		token = 1;
	}

	if (token == 0) //偽擎 囀檣擊 嫡雖 彊懊擊 陽
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
		printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)                       弛\n");
		printf("                                                            弛  ");
		// 儀縑 蜃醮 饜贖 轎溘
		if (b == 1 && b2 != 1)
			color(BLUE);
		if (r == 1 && r2 != 1)
			color(RED);
		if (gr == 1 && gr2 != 1)
			color(GREEN);
		if (pu == 1 && pu2 != 1)
			color(PURPLE);
		printf("≒");

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
		printf(" ≒");

		color(WHITE);
		printf("                                                                                                                弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		while (1)
		{
			if (_kbhit())
			{
				key = _getch();

				if (key == 113 || key == 81) // 酈爾萄 q酈 殮溘
				{
					M(DO); // �膩�擠 '紫' 轎溘
					w += 1;
					if (w == 2) // ex)�� だ �� -> 檜楛衝戲煎 饜贖嫡朝棻堅 ц擊 衛 (偽擎剪 2廓)
					{
						w -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(4000); // 4蟾 雖翱 �� _start煎 給嬴馬
						goto _start;
					}
					break;
				}
				else if (key == 119 || key == 87) // 酈爾萄 w酈 殮溘
				{
					M(RE); // �膩�擠 '溯' 轎溘
					b += 1;
					if (b == 2)// ex)だ �� だ -> 檜楛衝戲煎 饜贖嫡朝棻堅 ц擊 衛 (偽擎剪 2廓)
					{
						b -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(4000); // 4蟾 雖翱 �� _start煎 給嬴馬
						goto _start;
					}
					break;
				}
				else if (key == 101 || key == 69) // 酈爾萄 e酈 殮溘
				{
					M(MI); // �膩�擠 '嘐' 轎溘
					r += 1;
					if (r == 2)// ex)說 だ 說 -> 檜楛衝戲煎 饜贖嫡朝棻堅 ц擊 衛 (偽擎剪 2廓)
					{
						r -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(4000); // 4蟾 雖翱 �� _start煎 給嬴馬
						goto _start;
					}
					break;
				}
				else if (key == 114 || key == 82) // 酈爾萄 r酈 殮溘
				{
					M(PA); // �膩�擠 'だ' 轎溘
					gr += 1;
					if (gr == 2)// ex)蟾 だ 蟾 -> 檜楛衝戲煎 饜贖嫡朝棻堅 ц擊 衛 (偽擎剪 2廓)
					{
						gr -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(4000); // 4蟾 雖翱 �� _start煎 給嬴馬
						goto _start;
					}
					break;
				}
				else if (key == 116 || key == 84) // 酈爾萄 t酈 殮溘
				{
					M(SOL); // �膩�擠 '樂' 轎溘
					pu += 1;
					if (pu == 2)// ex)爾 だ 爾 -> 檜楛衝戲煎 饜贖嫡朝棻堅 ц擊 衛 (偽擎剪 2廓)
					{
						pu -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(4000); // 4蟾 雖翱 �� _start煎 給嬴馬
						goto _start;
					}
					break;
				}
				else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
				{
					M(_DO); // �膩�擠 '堪擎 紫' 轎溘
					current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
					return; // л熱 謙猿
					break;
				}
			}
		}
	}


	if ((w == 2 && (white - w) < 2) || (b == 2 && (blue - b) < -2) || (r == 2 && (red - r) < 2) || (gr == 2 && (green - gr) < 2) || (pu == 2 && (purple - pu) < 2)) // 2偃 偽擎 儀 陛螳螢 陽 濤榆 睡褶 ル⑷
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 陛螳螞 饜贖 濤榆檜 4偃 嘐虜檜塭 2偃 翱樓戲煎 陛螳螢 熱 橈蝗棲棻.                                                      弛\n");
		printf("                                                            弛 棻衛 饜贖擊 殮溘ж撮蹂.                                                                                               弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(4000); // 4蟾 雖翱 �� _start煎 給嬴馬
		goto _start;
	}

	if (white - w < 0 || blue - b < 0 || red - r < 0 || green - gr < 0 || purple - pu < 0) // 饜贖曖 熱陛 睡褶й 陽
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", 1);
		printf("                                                            弛 摹鷗и 饜贖檜 睡褶м棲棻.                                                                                             弛\n");
		printf("                                                            弛 棻衛 饜贖擊 殮溘ж撮蹂.                                                                                               弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(4000); // 4蟾 雖翱 �� _start煎 給嬴馬
		goto _start;
	}

	int total = w + b + r + gr + pu + player[current_player].white + player[current_player].blue + player[current_player].red + player[current_player].green + player[current_player].purple;

	while (total > 10)
	{
		int tr_w = 0, tr_b = 0, tr_r = 0, tr_gr = 0, tr_pu = 0;//幗萵 饜贖 嫡擊 滲熱
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 �羃�:%d   だ塢儀:%d  說除儀:%d  蟾煙儀:%d  爾塭儀:%d                                                                       弛\n", w, b, r, gr, pu);
		printf("                                                            弛 Ы溯檜橫 饜贖檜 %d偃蒂 蟾婁ж艘蝗棲棻.                                                                                 弛\n", total - 10);
		printf("                                                            弛 陛螳螞 饜贖 醞 幗萵 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)          弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		while (1)
		{
			if (_kbhit())
			{
				key = _getch();

				if (key == 113 || key == 81) // 酈爾萄 q酈 殮溘
				{
					M(DO); // �膩�擠 '紫' 轎溘
					tr_w = 1;
					break;
				}
				else if (key == 119 || key == 87) // 酈爾萄 w酈 殮溘
				{
					M(RE); // �膩�擠 '溯' 轎溘
					tr_b = 1;
					break;
				}
				else if (key == 101 || key == 69) // 酈爾萄 e酈 殮溘
				{
					M(MI); // �膩�擠 '嘐' 轎溘
					tr_r = 1;
					break;
				}
				else if (key == 114 || key == 82) // 酈爾萄 r酈 殮溘
				{
					M(PA); // �膩�擠 'だ' 轎溘
					tr_gr = 1;
					break;
				}
				else if (key == 116 || key == 84) // 酈爾萄 t酈 殮溘
				{
					M(SOL); // �膩�擠 '樂' 轎溘
					tr_pu = 1;
					break;
				}
				else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
				{
					M(_DO); // �膩�擠 '堪擎 紫' 轎溘
					current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
					return; // л熱 謙猿
					break;
				}
			}
		}

		//-1檜 寰腎紫煙 寞雖
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

		//陛螳螞 饜贖縑憮 剩纂朝 虜躑 幗葬晦
		w -= tr_w; b -= tr_b; r -= tr_r; gr -= tr_gr; pu -= tr_pu;
		total -= tr_w + tr_b + tr_r + tr_gr + tr_pu;
		tr_w = 0; tr_b = 0; tr_r = 0; tr_gr = 0; tr_pu = 0;
	}


	white -= w; blue -= b; red -= r; green -= gr; purple -= pu;//璽堅縑憮 陛螳螃朝虜躑 貍晦
	player[current_player].white += w; player[current_player].blue += b; player[current_player].red += r; player[current_player].green += gr; player[current_player].purple += pu;//陛螳螞 虜躑 Ы溯檜橫 饜贖縑 渦ж晦


}

void get_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[]) {
	int step1 = 0; // 偃嫦 蘋萄 欽啗
	int step2 = 0; // 偃嫦 蘋萄 牖憮
	int cardIdx = 0; // 鉻擎 蘋萄 檣策蝶
	int key; // 殮溘嫡擎 酈高 盪濰 滲熱
	int num_gold = 0; // 鎗饜贖擊 儀饜贖戲煎 滲�納� 饜贖曖 偃熱
	int use_gold = 0; // 餌辨и 鎗饜贖曖 熱
	int change_color[2] = { 0 }; // 鎗饜贖擊 殮溘 嫡擊 陽 殮溘 嫡擎 鎗饜贖曖 儀 轎溘 0:��, 1:だ, 2:說, 3:蟾, 4:爾
	int check = 0; // 摹鷗и 蘋萄陛 氈朝雖 �挫�
	Nob change_gold = { 0 }; // 鎗饜贖 -> 儀饜贖 偎熱 盪濰

_getcard: // goto _getcard曖 紫雜嬪纂
	// goto僥 陽僥縑 賅萇 滲熱菟擊 0戲煎 蟾晦��
	step1 = 0;
	step2 = 0;
	cardIdx = 0;
	num_gold = 0;
	use_gold = 0;
	change_gold.white = 0;
	change_gold.blue = 0;
	change_gold.red = 0;
	change_gold.green = 0;
	change_gold.purple = 0;
	change_color[0] = 0;
	change_color[1] = 0;
	check = 0;

	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
	printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
	printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
	printf("                                                            弛 掘殮й 偃嫦 蘋萄曖 欽啗蒂 殮溘п輿撮蹂.                                                                               弛\n");
	printf("                                                            弛 ( 1欽啗 偃嫦 蘋萄 : 1, 2欽啗 偃嫦 蘋萄 : 2, 3欽啗 偃嫦 蘋萄 : 3, 鎗 蘋萄 : 4, �做� 摹鷗璽戲煎 剩橫陛晦 : Z )          弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == '1') // 酈爾萄 1酈 殮溘
			{
				M(DO); // �膩�擠 '紫' 轎溘
				step1 = 0;
				break;
			}
			else if (key == '2') // 酈爾萄 2酈 殮溘
			{
				M(RE); // �膩�擠 '溯' 轎溘
				step1 = 1;
				break;
			}
			else if (key == '3') // 酈爾萄 3酈 殮溘
			{
				M(MI); // �膩�擠 '嘐' 轎溘
				step1 = 2;
				break;
			}
			else if (key == '4') // 酈爾萄 4酈 殮溘
			{
				M(PA); // �膩�擠 'だ' 轎溘
				step1 = 3;
				break;
			}
			else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
			{
				M(_DO); // �膩�擠 '堪擎 紫' 轎溘
				current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
				return; //л熱 謙猿
				break;
			}
		}
	}

	if (step1 == 3) // 摹鷗и 欽啗陛 鎗 蘋萄橾 陽
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
		printf("                                                            弛 鎗 蘋萄縑憮 掘殮й 偃嫦 蘋萄曖 牖憮蒂 殮溘п輿撮蹂.                                                                    弛\n");
		printf("                                                            弛 ( 1廓簞 偃嫦 蘋萄 : 1, 2廓簞 偃嫦 蘋萄 : 2, 3廓簞 偃嫦 蘋萄 : 3, �做� 摹鷗璽戲煎 剩橫陛晦 : Z )                        弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		while (1)
		{
			if (_kbhit())
			{
				key = _getch();

				if (key == '1') // 酈爾萄 1酈 殮溘
				{
					M(DO); // �膩�擠 '紫' 轎溘
					step2 = 0;
					break;
				}
				else if (key == '2') // 酈爾萄 2酈 殮溘
				{
					M(RE); // �膩�擠 '溯' 轎溘
					step2 = 1;
					break;
				}
				else if (key == '3') // 酈爾萄 3酈 殮溘
				{
					M(MI); // �膩�擠 '嘐' 轎溘
					step2 = 2;
					break;
				}
				else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
				{
					M(_DO); // �膩�擠 '堪擎 紫' 轎溘
					current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
					return; //л熱 謙猿
					break;
				}
			}
		}
	}

	else // 鎗 蘋萄蒂 堅艇啪 嬴棲塭賊
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
		printf("                                                            弛 %d欽啗縑憮 掘殮й 偃嫦 蘋萄曖 牖憮蒂 殮溘п輿撮蹂.                                                                     弛\n", step1 + 1);
		printf("                                                            弛 ( 1廓簞 偃嫦 蘋萄 : 1, 2廓簞 偃嫦 蘋萄 : 2, 3廓簞 偃嫦 蘋萄 : 3, 4廓簞 偃嫦 蘋萄 : 4, �做� 摹鷗璽戲煎 剩橫陛晦 : Z )  弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		while (1)
		{
			if (_kbhit())
			{
				key = _getch();

				if (key == '1') // 酈爾萄 1酈 殮溘
				{
					M(DO); // �膩�擠 '紫' 轎溘
					step2 = 0;
					break;
				}
				else if (key == '2') // 酈爾萄 2酈 殮溘
				{
					M(RE); // �膩�擠 '溯' 轎溘
					step2 = 1;
					break;
				}
				else if (key == '3') // 酈爾萄 3酈 殮溘
				{
					M(MI); // �膩�擠 '嘐' 轎溘
					step2 = 2;
					break;
				}
				else if (key == '4') // 酈爾萄 4酈 殮溘
				{
					M(PA); // �膩�擠 'だ' 轎溘
					step2 = 3;
					break;
				}
				else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
				{
					M(_DO); // �膩�擠 '堪擎 紫' 轎溘
					current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
					return; //л熱 謙猿
					break;
				}
			}
		}
	}

	if (step1 != 3)	cardIdx = board_card[step1 * 4 + step2]; // 鎗 蘋萄蒂 堅艇啪 嬴棲塭賊

	switch (step1) // 摹鷗и 蘋萄陛 氈朝雖 �挫�
	{
	case 0: // 偃嫦蘋萄1
		if (!strcmp(card1[cardIdx].value, "NULL"))
		{
			check = 1;
		}
		break;
	case 1: // 偃嫦蘋萄2
		if (!strcmp(card2[cardIdx].value, "NULL"))
		{
			check = 1;
		}
		break;
	case 2: // 偃嫦蘋萄2
		if (!strcmp(card3[cardIdx].value, "NULL"))
		{
			check = 1;
		}
		break;
	case 3: //鎗 蘋萄
		if (keep_card[current_player][step2].value[0] == '\0') // 檜剪 �捐Я扆� 嬴椒
		{
			check = 1;
		}
		break;
	}

	if (check == 1) // 摹鷗и 蘋萄陛 橈棻賊
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
		printf("                                                            弛 摹鷗и 蘋萄陛 橈蝗棲棻. 棻衛 摹鷗п輿撮蹂.                                                                            弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(4000);
		goto _getcard;
	}

	if (player[current_player].gold > 0) // 鎗饜贖檜 1偃 檜鼻 氈棻賊 鎗 饜贖擊 賃偃 餌辨й 勒雖 韓僥
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
		printf("                                                            弛 鎗 饜贖檜 %d偃 氈蝗棲棻. 賃偃 餌辨ж衛啊蝗棲梱?                                                                        弛\n", player[current_player].gold);
		printf("                                                            弛 ( 1偃 : 1, 2偃 : 2, 3偃 : 3, 餌辨ж雖 彊擠 : 0, �做� 摹鷗璽戲煎 剩橫陛晦 : Z )                                        弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		while (1)
		{
			if (_kbhit())
			{
				key = _getch();

				if (key == '1') // 酈爾萄 1酈 殮溘
				{
					M(DO); // �膩�擠 '紫' 轎溘
					num_gold = 1;
					break;
				}
				else if (key == '2') // 酈爾萄 2酈 殮溘
				{
					M(RE); // �膩�擠 '溯' 轎溘
					num_gold = 2;
					break;
				}
				else if (key == '3') // 酈爾萄 3酈 殮溘
				{
					M(MI); // �膩�擠 '嘐' 轎溘
					num_gold = 3;
					break;
				}
				else if (key == 'c' || key == 'C') // 酈爾萄 c酈 殮溘
				{
					M(SI); // �膩�擠 '衛' 轎溘
					num_gold = 0;
					break;
				}
				else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
				{
					M(_DO); // �膩�擠 '堪擎 紫' 轎溘
					current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
					return; //л熱 謙猿
					break;
				}
			}
		}
		if (num_gold > 0) // 鎗饜贖擊 1偃 檜鼻 餌辨и棻堅 ц擊 陽
		{
			system("cls");
			boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
			printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
			printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
			printf("                                                            弛 %d偃曖 夥羚 爾戮 饜贖擊 殮溘п 輿撮蹂. (�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)          弛\n", num_gold);
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

			while (1)
			{
				if (_kbhit())
				{
					key = _getch();

					if (key == 113 || key == 81) // 酈爾萄 q酈 殮溘
					{
						M(DO); // �膩�擠 '紫' 轎溘
						change_gold.white += 1;
						change_color[0] = 0;
						break;
					}
					else if (key == 119 || key == 87) // 酈爾萄 w酈 殮溘
					{
						M(RE); // �膩�擠 '溯' 轎溘
						change_gold.blue += 1;
						change_color[0] = 1;
						break;
					}
					else if (key == 101 || key == 69) // 酈爾萄 e酈 殮溘
					{
						M(MI); // �膩�擠 '嘐' 轎溘
						change_gold.red += 1;
						change_color[0] = 2;
						break;
					}
					else if (key == 114 || key == 82) // 酈爾萄 r酈 殮溘
					{
						M(PA); // �膩�擠 'だ' 轎溘
						change_gold.green += 1;
						change_color[0] = 3;
						break;
					}
					else if (key == 116 || key == 84) // 酈爾萄 t酈 殮溘
					{
						M(SOL); // �膩�擠 '樂' 轎溘
						change_gold.purple += 1;
						change_color[0] = 4;
						break;
					}
					else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
					{
						M(_DO); // �膩�擠 '堪擎 紫' 轎溘
						current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
						return; //л熱 謙猿
						break;
					}
				}
			}

			if (num_gold > 1) // 鎗饜贖擊 2偃 檜鼻 噹棻堅 ц擊 陽
			{
				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
				printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
				printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
				printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
				printf("                                                            弛 %d偃曖 夥羚 爾戮 饜贖擊 殮溘п 輿撮蹂. (�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)          弛\n", num_gold);
				printf("                                                            弛 ");
				if (change_color[0] == 0)
					color(WHITE);
				if (change_color[0] == 1)
					color(BLUE);
				if (change_color[0] == 2)
					color(RED);
				if (change_color[0] == 3)
					color(GREEN);
				if (change_color[0] == 4)
					color(PURPLE);
				printf("≒ ");
				color(WHITE);
				printf("                                                                                                                  弛\n");
				printf("                                                            弛                                                                                                                       弛\n");
				printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

				while (1)
				{
					if (_kbhit())
					{
						key = _getch();

						if (key == 113 || key == 81) // 酈爾萄 q酈 殮溘
						{
							M(DO); // �膩�擠 '紫' 轎溘
							change_gold.white += 1;
							change_color[1] = 0;
							break;
						}
						else if (key == 119 || key == 87) // 酈爾萄 w酈 殮溘
						{
							M(RE); // �膩�擠 '溯' 轎溘
							change_gold.blue += 1;
							change_color[1] = 1;
							break;
						}
						else if (key == 101 || key == 69) // 酈爾萄 e酈 殮溘
						{
							M(MI); // �膩�擠 '嘐' 轎溘
							change_gold.red += 1;
							change_color[1] = 2;
							break;
						}
						else if (key == 114 || key == 82) // 酈爾萄 r酈 殮溘
						{
							M(PA); // �膩�擠 'だ' 轎溘
							change_gold.green += 1;
							change_color[1] = 3;
							break;
						}
						else if (key == 116 || key == 84) // 酈爾萄 t酈 殮溘
						{
							M(SOL); // �膩�擠 '樂' 轎溘
							change_gold.purple += 1;
							change_color[1] = 4;
							break;
						}
						else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
						{
							M(_DO); // �膩�擠 '堪擎 紫' 轎溘
							current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
							return; //л熱 謙猿
							break;
						}
					}
				}

				if (num_gold > 2) // 鎗饜贖擊 3偃 餌辨и棻堅 ц擊 陽
				{
					system("cls");
					boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
					printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
					printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
					printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
					printf("                                                            弛 %d偃曖 夥羚 爾戮 饜贖擊 殮溘п 輿撮蹂. (�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)          弛\n", num_gold);
					printf("                                                            弛 ");
					if (change_color[0] == 0)
						color(WHITE);
					if (change_color[0] == 1)
						color(BLUE);
					if (change_color[0] == 2)
						color(RED);
					if (change_color[0] == 3)
						color(GREEN);
					if (change_color[0] == 4)
						color(PURPLE);
					printf("≒ ");
					if (change_color[1] == 0)
						color(WHITE);
					if (change_color[1] == 1)
						color(BLUE);
					if (change_color[1] == 2)
						color(RED);
					if (change_color[1] == 3)
						color(GREEN);
					if (change_color[1] == 4)
						color(PURPLE);
					printf("≒ ");
					color(WHITE);
					printf("                                                                                                                弛\n");
					printf("                                                            弛                                                                                                                       弛\n");
					printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

					while (1)
					{
						if (_kbhit())
						{
							key = _getch();

							if (key == 113 || key == 81) // 酈爾萄 q酈 殮溘
							{
								M(DO); // �膩�擠 '紫' 轎溘
								change_gold.white += 1;
								break;
							}
							else if (key == 119 || key == 87) // 酈爾萄 w酈 殮溘
							{
								M(RE); // �膩�擠 '溯' 轎溘
								change_gold.blue += 1;
								break;
							}
							else if (key == 101 || key == 69) // 酈爾萄 e酈 殮溘
							{
								M(MI); // �膩�擠 '嘐' 轎溘
								change_gold.red += 1;
								break;
							}
							else if (key == 114 || key == 82) // 酈爾萄 r酈 殮溘
							{
								M(PA); // �膩�擠 'だ' 轎溘
								change_gold.green += 1;
								break;
							}
							else if (key == 116 || key == 84) // 酈爾萄 t酈 殮溘
							{
								M(SOL); // �膩�擠 '樂' 轎溘
								change_gold.purple += 1;
								break;
							}
							else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
							{
								M(_DO); // �膩�擠 '堪擎 紫' 轎溘
								current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
								return; //л熱 謙猿
								break;
							}
						}
					}
				}
			}
		}
	}


	Nob total_token = { player[current_player].white + player[current_player].card_white + change_gold.white, player[current_player].blue + player[current_player].card_blue + change_gold.blue, player[current_player].red + player[current_player].card_red + change_gold.red, player[current_player].green + player[current_player].card_green + change_gold.green, player[current_player].purple + player[current_player].card_purple + change_gold.purple }; // 爾戮饜贖 + 蘋萄饜贖 + 滲�納� 鎗饜贖

	switch (step1) // 饜贖偃熱 睡褶 轎溘
	{
	case 0:
		if (total_token.white < card1[cardIdx].white || total_token.blue < card1[cardIdx].blue || total_token.red < card1[cardIdx].red || total_token.green < card1[cardIdx].green || total_token.purple < card1[cardIdx].purple)
		{
			system("cls");
			boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
			printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
			printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
			printf("                                                            弛 摹鷗и 蘋萄蒂 掘殮ж晦 嬪и 饜贖檜 睡褶м棲棻. 棻衛 摹鷗п輿撮蹂.                                                     弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			Sleep(4000);
			goto _getcard;
		}
		break;
	case 1:
		if (total_token.white < card2[cardIdx].white || total_token.blue < card2[cardIdx].blue || total_token.red < card2[cardIdx].red || total_token.green < card2[cardIdx].green || total_token.purple < card2[cardIdx].purple)
		{
			system("cls");
			boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
			printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
			printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
			printf("                                                            弛 摹鷗и 蘋萄蒂 掘殮ж晦 嬪и 饜贖檜 睡褶м棲棻. 棻衛 摹鷗п輿撮蹂.                                                     弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			Sleep(4000);
			goto _getcard;
		}
		break;
	case 2:
		if (total_token.white < card3[cardIdx].white || total_token.blue < card3[cardIdx].blue || total_token.red < card3[cardIdx].red || total_token.green < card3[cardIdx].green || total_token.purple < card3[cardIdx].purple)
		{
			system("cls");
			boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
			printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
			printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
			printf("                                                            弛 摹鷗и 蘋萄蒂 掘殮ж晦 嬪и 饜贖檜 睡褶м棲棻. 棻衛 摹鷗п輿撮蹂.                                                     弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			Sleep(4000);
			goto _getcard;
		}
		break;
	case 3:
		if (total_token.white < keep_card[current_player][cardIdx].white || total_token.blue < keep_card[current_player][cardIdx].blue || total_token.red < keep_card[current_player][cardIdx].red || total_token.green < keep_card[current_player][cardIdx].green || total_token.purple < keep_card[current_player][cardIdx].purple)
		{
			system("cls");
			boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
			printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
			printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
			printf("                                                            弛 摹鷗и 蘋萄蒂 掘殮ж晦 嬪и 饜贖檜 睡褶м棲棻. 棻衛 摹鷗п輿撮蹂.                                                     弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            弛                                                                                                                       弛\n");
			printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			Sleep(4000);
			goto _getcard;
		}
		break;
	}




	//printf("drawn_cards[0] : %d, drawn_cards[1] : %d, drawn_cards[2] : %d", drawn_cards[0], drawn_cards[1], drawn_cards[2]);
	//getchar();
	//蕨諼籀葬 ж朝 夠




	switch (step1)
	{
	case 0:
		// 鉻擎 蘋萄曖 蝶囀橫虜躑 薄熱 隸陛
		player[current_player].score += card1[cardIdx].point;

		/*
		//陛問虜躑 爾戮 馬模 <- *******蕨諼籀葬п醜撿脾*******
		player[current_player].blue -= card1[cardIdx].blue;
		player[current_player].green -= card1[cardIdx].green;
		player[current_player].purple -= card1[cardIdx].purple;
		player[current_player].red -= card1[cardIdx].red;
		player[current_player].white -= card1[cardIdx].white;
		*/

		//饜贖 啗骯
		if (card1[cardIdx].white > player[current_player].card_white) // в蹂и 饜贖曖 偃熱陛 蘋萄 饜贖擊 剩橫撲陽
		{
			change_gold.white -= (card1[cardIdx].white - player[current_player].card_white); // 滲�納� 鎗饜贖縑 雖碳п撿ж朝 饜贖 貍晦
			if (change_gold.white < 0) // 虜擒 滲�納� 鎗饜贖虜戲煎 蘋萄蒂 掘殮 跤ц擊 陽
			{
				player[current_player].white += change_gold.white; // 爾戮饜贖擊 睡褶и虜躑 陛螳陛晦
				white -= change_gold.white; // 饜贖璽堅縑 饜贖 厥橫舒晦
			}
			else if (change_gold.white > 0) // 滲�納� 鎗饜贖虜戲煎 蘋萄蒂 掘殮ц擊 ��
				use_gold += change_gold.white; // 餌辨и 鎗饜贖曖 偃熱 �挫�
		}
		if (card1[cardIdx].blue > player[current_player].card_blue)
		{
			change_gold.blue -= (card1[cardIdx].blue - player[current_player].card_blue);
			if (change_gold.blue < 0)
			{
				player[current_player].blue += change_gold.blue;
				blue -= change_gold.blue;
			}
			else if (change_gold.blue > 0)
				use_gold += change_gold.blue;
		}
		if (card1[cardIdx].red > player[current_player].card_red)
		{
			change_gold.red -= (card1[cardIdx].red - player[current_player].card_red);
			if (change_gold.red < 0)
			{
				player[current_player].red += change_gold.red;
				red -= change_gold.red;
			}
			else if (change_gold.red > 0)
				use_gold += change_gold.red;
		}
		if (card1[cardIdx].green > player[current_player].card_green)
		{
			change_gold.green -= (card1[cardIdx].green - player[current_player].card_green);
			if (change_gold.green < 0)
			{
				player[current_player].green += change_gold.green;
				green -= change_gold.green;
			}
			else if (change_gold.green > 0)
				use_gold += change_gold.green;
		}
		if (card1[cardIdx].purple > player[current_player].card_purple)
		{
			change_gold.purple -= (card1[cardIdx].purple - player[current_player].card_purple);
			if (change_gold.purple < 0)
			{
				player[current_player].purple += change_gold.purple;
				purple -= change_gold.purple;
			}
			else if (change_gold.purple > 0)
				use_gold += change_gold.purple;
		}

		//蘋萄 ��鷗 瞳辨
		if (!strcmp("blue", card1[cardIdx].value))		player[current_player].card_blue++;
		if (!strcmp("green", card1[cardIdx].value))		player[current_player].card_green++;
		if (!strcmp("purple", card1[cardIdx].value))	player[current_player].card_purple++;
		if (!strcmp("red", card1[cardIdx].value))		player[current_player].card_red++;
		if (!strcmp("white", card1[cardIdx].value))		player[current_player].card_white++;

		//棻擠 蘋萄蒂 爾萄縑 場晦
		board_card[step1 * 4 + step2] = dev_card1[drawn_cards[step1]];

		if (!(drawn_cards[0] >= 40)) {
			//鉻擎 蘋萄 偃熱 隸陛
			drawn_cards[step1]++;
		}
		break;
	case 1:
		// 鉻擎 蘋萄曖 蝶囀橫虜躑 薄熱 隸陛
		player[current_player].score += card2[cardIdx].point;

		/*
		//陛問虜躑 爾戮 馬模 <- *******蕨諼籀葬п醜撿脾*******
		player[current_player].blue -= card2[cardIdx].blue;
		player[current_player].green -= card2[cardIdx].green;
		player[current_player].purple -= card2[cardIdx].purple;
		player[current_player].red -= card2[cardIdx].red;
		player[current_player].white -= card2[cardIdx].white;
		*/

		if (card2[cardIdx].white > player[current_player].card_white)
		{
			change_gold.white -= (card2[cardIdx].white - player[current_player].card_white);
			if (change_gold.white < 0)
			{
				player[current_player].white += change_gold.white;
				white -= change_gold.white;
			}
			else if (change_gold.white > 0)
				use_gold += change_gold.white;
		}
		if (card2[cardIdx].blue > player[current_player].card_blue)
		{
			change_gold.blue -= (card2[cardIdx].blue - player[current_player].card_blue);
			if (change_gold.blue < 0)
			{
				player[current_player].blue += change_gold.blue;
				blue -= change_gold.blue;
			}
			else if (change_gold.blue > 0)
				use_gold += change_gold.blue;
		}
		if (card2[cardIdx].red > player[current_player].card_red)
		{
			change_gold.red -= (card2[cardIdx].red - player[current_player].card_red);
			if (change_gold.red < 0)
			{
				player[current_player].red += change_gold.red;
				red -= change_gold.red;
			}
			else if (change_gold.red > 0)
				use_gold += change_gold.red;
		}
		if (card2[cardIdx].green > player[current_player].card_green)
		{
			change_gold.green -= (card2[cardIdx].green - player[current_player].card_green);
			if (change_gold.green < 0)
			{
				player[current_player].green += change_gold.green;
				green -= change_gold.green;
			}
			else if (change_gold.green > 0)
				use_gold += change_gold.green;
		}
		if (card2[cardIdx].purple > player[current_player].card_purple)
		{
			change_gold.purple -= (card2[cardIdx].purple - player[current_player].card_purple);
			if (change_gold.purple < 0)
			{
				player[current_player].purple += change_gold.purple;
				purple -= change_gold.purple;
			}
			else if (change_gold.purple > 0)
				use_gold += change_gold.purple;
		}

		//蘋萄 ��鷗 瞳辨
		if (!strcmp("blue", card2[cardIdx].value))		player[current_player].card_blue++;
		if (!strcmp("green", card2[cardIdx].value))		player[current_player].card_green++;
		if (!strcmp("purple", card2[cardIdx].value))	player[current_player].card_purple++;
		if (!strcmp("red", card2[cardIdx].value))		player[current_player].card_red++;
		if (!strcmp("white", card2[cardIdx].value))		player[current_player].card_white++;

		//棻擠 蘋萄蒂 爾萄縑 場晦
		board_card[step1 * 4 + step2] = dev_card2[drawn_cards[step1]];

		if (drawn_cards[1] < 30) {
			//鉻擎 蘋萄 偃熱 隸陛
			drawn_cards[step1]++;
		}
		break;
	case 2:
		// 鉻擎 蘋萄曖 蝶囀橫虜躑 薄熱 隸陛
		player[current_player].score += card3[cardIdx].point;

		/*
		//陛問虜躑 爾戮 馬模 <- *******蕨諼籀葬п醜撿脾*******
		player[current_player].blue -= card3[cardIdx].blue;
		player[current_player].green -= card3[cardIdx].green;
		player[current_player].purple -= card3[cardIdx].purple;
		player[current_player].red -= card3[cardIdx].red;
		player[current_player].white -= card3[cardIdx].white;
		*/


		if (card3[cardIdx].white > player[current_player].card_white)
		{
			change_gold.white -= (card3[cardIdx].white - player[current_player].card_white);
			if (change_gold.white < 0)
			{
				player[current_player].white += change_gold.white;
				white -= change_gold.white;
			}
			else if (change_gold.white > 0)
				use_gold += change_gold.white;
		}
		if (card3[cardIdx].blue > player[current_player].card_blue)
		{
			change_gold.blue -= (card3[cardIdx].blue - player[current_player].card_blue);
			if (change_gold.blue < 0)
			{
				player[current_player].blue += change_gold.blue;
				blue -= change_gold.blue;
			}
			else if (change_gold.blue > 0)
				use_gold += change_gold.blue;
		}
		if (card3[cardIdx].red > player[current_player].card_red)
		{
			change_gold.red -= (card3[cardIdx].red - player[current_player].card_red);
			if (change_gold.red < 0)
			{
				player[current_player].red += change_gold.red;
				red -= change_gold.red;
			}
			else if (change_gold.red > 0)
				use_gold += change_gold.red;
		}
		if (card3[cardIdx].green > player[current_player].card_green)
		{
			change_gold.green -= (card3[cardIdx].green - player[current_player].card_green);
			if (change_gold.green < 0)
			{
				player[current_player].green += change_gold.green;
				green -= change_gold.green;
			}
			else if (change_gold.green > 0)
				use_gold += change_gold.green;
		}
		if (card3[cardIdx].purple > player[current_player].card_purple)
		{
			change_gold.purple -= (card3[cardIdx].purple - player[current_player].card_purple);
			if (change_gold.purple < 0)
			{
				player[current_player].purple += change_gold.purple;
				purple -= change_gold.purple;
			}
			else if (change_gold.purple > 0)
				use_gold += change_gold.purple;
		}

		//蘋萄 ��鷗 瞳辨
		if (!strcmp("blue", card3[cardIdx].value))		player[current_player].card_blue++;
		if (!strcmp("green", card3[cardIdx].value))		player[current_player].card_green++;
		if (!strcmp("purple", card3[cardIdx].value))	player[current_player].card_purple++;
		if (!strcmp("red", card3[cardIdx].value))		player[current_player].card_red++;
		if (!strcmp("white", card3[cardIdx].value))		player[current_player].card_white++;

		//棻擠 蘋萄蒂 爾萄縑 場晦
		board_card[step1 * 4 + step2] = dev_card3[drawn_cards[step1]];

		if (!(drawn_cards[2] >= 20)) {
			//鉻擎 蘋萄 偃熱 隸陛
			drawn_cards[step1]++;
		}
		break;

	case 3:
		// 鉻擎 蘋萄曖 蝶囀橫虜躑 薄熱 隸陛
		player[current_player].score += keep_card[current_player][step2].point;

		/*
		//陛問虜躑 爾戮 馬模 <- *******蕨諼籀葬п醜撿脾*******
		player[current_player].blue -= keep_card[current_player][step2].blue;
		player[current_player].green -= keep_card[current_player][step2].green;
		player[current_player].purple -= keep_card[current_player][step2].purple;
		player[current_player].red -= keep_card[current_player][step2].red;
		player[current_player].white -= keep_card[current_player][step2].white;
		*/


		if (keep_card[current_player][step2].white > player[current_player].card_white)
		{
			change_gold.white -= (keep_card[current_player][step2].white - player[current_player].card_white);
			if (change_gold.white < 0)
			{
				player[current_player].white += change_gold.white;
				white -= change_gold.white;
			}
			else if (change_gold.white > 0)
				use_gold += change_gold.white;
		}
		if (keep_card[current_player][step2].blue > player[current_player].card_blue)
		{
			change_gold.blue -= (keep_card[current_player][step2].blue - player[current_player].card_blue);
			if (change_gold.blue < 0)
			{
				player[current_player].blue += change_gold.blue;
				blue -= change_gold.blue;
			}
			else if (change_gold.blue > 0)
				use_gold += change_gold.blue;
		}
		if (keep_card[current_player][step2].red > player[current_player].card_red)
		{
			change_gold.red -= (keep_card[current_player][step2].red - player[current_player].card_red);
			if (change_gold.red < 0)
			{
				player[current_player].red += change_gold.red;
				red -= change_gold.red;
			}
			else if (change_gold.red > 0)
				use_gold += change_gold.red;
		}
		if (keep_card[current_player][step2].green > player[current_player].card_green)
		{
			change_gold.green -= (keep_card[current_player][step2].green - player[current_player].card_green);
			if (change_gold.green < 0)
			{
				player[current_player].green += change_gold.green;
				green -= change_gold.green;
			}
			else if (change_gold.green > 0)
				use_gold += change_gold.green;
		}
		if (keep_card[current_player][step2].purple > player[current_player].card_purple)
		{
			change_gold.purple -= (keep_card[current_player][step2].purple - player[current_player].card_purple);
			if (change_gold.purple < 0)
			{
				player[current_player].purple += change_gold.purple;
				purple -= change_gold.purple;
			}
			else if (change_gold.purple > 0)
				use_gold += change_gold.purple;
		}

		//蘋萄 ��鷗 瞳辨
		if (!strcmp("blue", keep_card[current_player][step2].value))		player[current_player].card_blue++;
		if (!strcmp("green", keep_card[current_player][step2].value))		player[current_player].card_green++;
		if (!strcmp("purple", keep_card[current_player][step2].value))	player[current_player].card_purple++;
		if (!strcmp("red", keep_card[current_player][step2].value))		player[current_player].card_red++;
		if (!strcmp("white", keep_card[current_player][step2].value))		player[current_player].card_white++;

		// 餌辨и 鎗蘋萄 綠辦晦
		keep_card[current_player][step2].point = 0;
		strcpy(keep_card[current_player][step2].value, "");
		keep_card[current_player][step2].white = 0;
		keep_card[current_player][step2].blue = 0;
		keep_card[current_player][step2].red = 0;
		keep_card[current_player][step2].green = 0;
		keep_card[current_player][step2].purple = 0;

		//棻擠 蘋萄蒂 爾萄縑 場晦
		switch (step2)
		{
		case 0:
			if (keep_card[current_player][1].value[0] != '0')
			{
				keep_card[current_player][0] = keep_card[current_player][1];
			}
			if (keep_card[current_player][2].value[0] != '0')
			{
				keep_card[current_player][1] = keep_card[current_player][2];
				keep_card[current_player][2].point = 0;
				strcpy(keep_card[current_player][2].value, "");
				keep_card[current_player][2].white = 0;
				keep_card[current_player][2].blue = 0;
				keep_card[current_player][2].red = 0;
				keep_card[current_player][2].green = 0;
				keep_card[current_player][2].purple = 0;
			}
			break;

		case 1:
			if (keep_card[current_player][2].value[0] != '0')
			{
				keep_card[current_player][1] = keep_card[current_player][2];
				keep_card[current_player][2].point = 0;
				strcpy(keep_card[current_player][2].value, "");
				keep_card[current_player][2].white = 0;
				keep_card[current_player][2].blue = 0;
				keep_card[current_player][2].red = 0;
				keep_card[current_player][2].green = 0;
				keep_card[current_player][2].purple = 0;
			}
			break;
		}
		break;

	}

	if (use_gold <= num_gold) // 餌辨и 鎗 饜贖檜 滲�納� 鎗饜贖爾棻 濛擊 陽
	{
		player[current_player].gold -= num_gold - use_gold; // 滲�納� 鎗饜贖 醞縑 陴擎 饜贖擊 棻衛 鎗饜贖戲煎 給溥喫
		gold += num_gold - use_gold; // 餌辨и 鎗 饜贖擊 饜贖璽堅縑 厥橫喫
	}

	/* 掘⑷ 諫猿 dev_card[40],[30],[20]擊 蹺陛п 0,0,0,0,0檣 蘋萄蒂 虜菟橫憮 蘋萄蒂 棻 鉻戲賊 轎溘ж朝 衝戲煎 虜虛
	if (!(drawn_cards[0] >= 40 || drawn_cards[1] >= 30 || drawn_cards[2] >= 20)) {
		//鉻擎 蘋萄 偃熱 隸陛
		drawn_cards[step1]++;
	}
	else {
		//策縑 陴擎 蘋萄陛 0檣等 斜 塭檣縑 氈朝 蘋萄蒂 鉻懊擊 陽, 鉻擎 蘋萄曖 濠葬縑朝 0,0,0,0,0檜 諦撿л

	}
	*/

	//雖選匙
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		printf("%d ", board_card[i * 4 + j]);
	//	}
	//	printf("\n");
	//}getchar();
}

void color(int color) { // 寡唳儀檜 匐擎儀檣 旋噢儀 滲唳
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

void GROUND_color(int color) { // 寡唳檜 ground縑 評塭 夥莘, 旋噢儀 滲唳
	int ground = 9; // ⑷營 ground朝 9 -> 嫩擎 だ嫌
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

void boardpan(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[])
{
	int a[5] = { 0, 1, 2, 3, 4 };
	//int b[4] = { 0, 1, 2, 3 }; //1欽啗
	//int c[4] = { 0, 1, 2, 3 }; //2欽啗
	//int d[4] = { 0, 1, 2, 3 }; //3欽啗
	int card_size[3] = { 40 - drawn_cards[0], 30 - drawn_cards[1], 20 - drawn_cards[2] };
	//int card_size[3] = { 36, 26, 16 };

	printf("\n\n                                                             Splendor                                                                                           made by. 6ぜ <煎鰍欽>\n");

	//橾濠還 ル⑷
	color(WHITE);
	printf("                                                            忙");
	for (int i = 0; i < 59; i++)
		printf("式");
	printf("成");
	for (int i = 0; i < 59; i++)
		printf("式");
	printf("忖");
	printf("\n");

	if (current_player == 0) // player1 離滔橾陽
	{
		printf("                                                            弛 ");
		GROUND_color(WHITE);
		printf("player1                                                   ");
		color(WHITE);
		printf("弛");
		printf(" player2                                                   ");
		printf("弛\n");

		printf("                                                            弛 ");
		GROUND_color(WHITE);
		if (player[0].score >= 10)
			printf("薄熱 : %d                                                 ", player[0].score);
		else
			printf("薄熱 : %d                                                  ", player[0].score);
		color(WHITE);
		printf("弛");
		if (player[1].score >= 10)
			printf(" 薄熱 : %d                                                 ", player[1].score);
		else
			printf(" 薄熱 : %d                                                  ", player[1].score);
		printf("弛");
		color(WHITE);
		printf("\n");

		//爾戮 饜贖 轎溘
		printf("                                                            弛 ");
		GROUND_color(WHITE);
		printf("爾戮 饜贖 : ");
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
		printf("弛");
		printf(" 爾戮 饜贖 : ");
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
		printf("                                  弛\n");

		//蘋萄 饜贖 轎溘
		printf("                                                            弛 ");
		GROUND_color(WHITE);
		printf("蘋萄 饜贖 : ");
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
		printf("弛");
		printf(" 蘋萄 饜贖 : ");
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
		printf("                                    弛\n");
	}
	else if (current_player == 1) // player2離滔 橾陽
	{
		printf("                                                            弛");
		color(WHITE);
		printf(" player1                                                   ");
		printf("弛 ");
		GROUND_color(WHITE);
		printf("player2                                                   ");
		color(WHITE);
		printf("弛");
		printf("\n");

		printf("                                                            弛 ");
		if (player[0].score >= 10)
			printf("薄熱 : %d                                                 ", player[0].score);
		else
			printf("薄熱 : %d                                                  ", player[0].score);
		printf("弛 ");
		GROUND_color(WHITE);
		if (player[1].score >= 10)
			printf("薄熱 : %d                                                 ", player[1].score);
		else
			printf("薄熱 : %d                                                  ", player[1].score);
		color(WHITE);
		printf("弛");
		printf("\n");

		//爾戮 饜贖 轎溘
		printf("                                                            弛 爾戮 饜贖 : ");
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
		printf("                                  弛 ");
		GROUND_color(WHITE);
		printf("爾戮 饜贖 : ");
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
		printf("弛");
		printf("\n");

		//蘋萄 饜贖 轎溘
		printf("                                                            弛 蘋萄 饜贖 : ");
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
		printf("                                    弛 ");
		GROUND_color(WHITE);
		printf("蘋萄 饜贖 : ");
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
		printf("弛");
		printf("\n");
	}
	else // player1, 2 醞 援掘曖 離滔紫 嬴棍 陽
	{
		printf("                                                            弛");
		color(WHITE);
		printf(" player1                                                   ");
		printf("弛");
		color(WHITE);
		printf(" player2                                                   ");
		color(WHITE);
		printf("弛\n");
		printf("                                                            弛");
		color(WHITE);
		if (player[0].score >= 10)
			printf(" 薄熱 : %d                                                 ", player[0].score);
		else
			printf(" 薄熱 : %d                                                  ", player[0].score);
		printf("弛");
		color(WHITE);
		if (player[1].score >= 10)
			printf(" 薄熱 : %d                                                 ", player[1].score);
		else
			printf(" 薄熱 : %d                                                  ", player[1].score);
		printf("弛\n");
		color(WHITE);

		//爾戮 饜贖 轎溘
		printf("                                                            弛 爾戮 饜贖 : ");
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
		printf("                                  弛 爾戮 饜贖 : ");
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
		printf("                                  弛\n");

		//蘋萄 饜贖 轎溘
		printf("                                                            弛 蘋萄 饜贖 : ");
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
		printf("                                    弛 蘋萄 饜贖 : ");
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
		printf("                                    弛\n");
	}

	//橾濠還 ル⑷
	printf("                                                            戍");
	for (int i = 0; i < 59; i++)
		printf("式");
	printf("扛");
	for (int i = 0; i < 59; i++)
		printf("式");
	printf("扣");
	printf("\n");

	printf("                                                            弛                                                                                                                       弛\n");

	//敝褶 蘋萄 轎溘
	printf("                                                            弛                                                               ");
	color(LIGHT_RED);
	printf("--敝褶 蘋萄--");
	color(WHITE);
	printf("                                           弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf(" 1式式式式式式式式忖  2式式式式式式式式忖  3式式式式式式式式忖  4式式式式式式式式忖  5式式式式式式式式忖                    ");
	color(WHITE);
	printf("弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf("弛       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("弛 弛       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("弛 弛       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("弛 弛       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("弛 弛       ");
	color(WHITE);
	printf(" 3");
	color(LIGHT_RED);
	printf("弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf("弛 ");
	color(WHITE);
	printf("﹥ %d", nob[nob_card[a[0]]].white);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(WHITE);
	printf("﹥ %d", nob[nob_card[a[1]]].white);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(WHITE);
	printf("﹥ %d", nob[nob_card[a[2]]].white);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(WHITE);
	printf("﹥ %d", nob[nob_card[a[3]]].white);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(WHITE);
	printf("﹥ %d", nob[nob_card[a[4]]].white);
	color(LIGHT_RED);
	printf("    弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf("弛 ");
	color(BLUE);
	printf("﹥ %d", nob[nob_card[a[0]]].blue);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(BLUE);
	printf("﹥ %d", nob[nob_card[a[1]]].blue);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(BLUE);
	printf("﹥ %d", nob[nob_card[a[2]]].blue);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(BLUE);
	printf("﹥ %d", nob[nob_card[a[3]]].blue);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(BLUE);
	printf("﹥ %d", nob[nob_card[a[4]]].blue);
	color(LIGHT_RED);
	printf("    弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf("弛 ");
	color(RED);
	printf("﹥ %d", nob[nob_card[a[0]]].red);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(RED);
	printf("﹥ %d", nob[nob_card[a[1]]].red);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(RED);
	printf("﹥ %d", nob[nob_card[a[2]]].red);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(RED);
	printf("﹥ %d", nob[nob_card[a[3]]].red);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(RED);
	printf("﹥ %d", nob[nob_card[a[4]]].red);
	color(LIGHT_RED);
	printf("    弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf("弛 ");
	color(GREEN);
	printf("﹥ %d", nob[nob_card[a[0]]].green);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(GREEN);
	printf("﹥ %d", nob[nob_card[a[1]]].green);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(GREEN);
	printf("﹥ %d", nob[nob_card[a[2]]].green);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(GREEN);
	printf("﹥ %d", nob[nob_card[a[3]]].green);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(GREEN);
	printf("﹥ %d", nob[nob_card[a[4]]].green);
	color(LIGHT_RED);
	printf("    弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf("弛 ");
	color(PURPLE);
	printf("﹥ %d", nob[nob_card[a[0]]].purple);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(PURPLE);
	printf("﹥ %d", nob[nob_card[a[1]]].purple);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(PURPLE);
	printf("﹥ %d", nob[nob_card[a[2]]].purple);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(PURPLE);
	printf("﹥ %d", nob[nob_card[a[3]]].purple);
	color(LIGHT_RED);
	printf("    弛 弛 ");
	color(PURPLE);
	printf("﹥ %d", nob[nob_card[a[4]]].purple);
	color(LIGHT_RED);
	printf("    弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf("戌式式式式式式式式式戎 戌式式式式式式式式式戎 戌式式式式式式式式式戎 戌式式式式式式式式式戎 戌式式式式式式式式式戎 ");
	color(WHITE);
	printf("                   弛\n");

	printf("             忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣                                                                                                                       弛\n");

	//偃嫦 蘋萄1 轎溘
	//鎗и 蘋萄 跡煙 轎溘
	//鎗и 蘋萄 -> keep_card[playerx][鎗и 牖憮] -> 虜擒 player3檜 籀擠 鎗擊 ц棻堅 ж賊 current_player == 2 檜嘎煎 keep_card[2][0] 檜 脹棻. 舒廓簞 鎗擎 keep_card[2][1].... 檜楛衝戲煎 轎溘脾
	if (keep_card[current_player][0].value[0] == '\0') //鎗и 蘋萄陛 橈擊 陽
	{
		printf("             弛            player%d曖 鎗и 蘋萄 跡煙          弛                                                           ", current_player + 1);
		color(LIGHT_GREEN);
		printf("-- 1欽啗 偃嫦 蘋萄--");
		color(WHITE);
		printf("                                        弛\n");

		printf("             弛  1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖 弛                   ");
		color(LIGHT_GREEN);
		printf("忙式式式式式式式式式式式式忖        1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖  4式式式式式式式式式式式忖 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(WHITE);
		printf("%d", card1[board_card[0]].point);
		//printf("%d", card1[dev_card1[b[0]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[0]].value);
		//print_jowel(card1[dev_card1[b[0]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[1]].point);
		//printf("%d", card1[dev_card1[b[1]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[1]].value);
		//print_jowel(card1[dev_card1[b[1]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[2]].point);
		//printf("%d", card1[dev_card1[b[2]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[2]].value);
		//print_jowel(card1[dev_card1[b[2]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[3]].point);
		//printf("%d", card1[dev_card1[b[3]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[3]].value);
		//print_jowel(card1[dev_card1[b[3]]].value);
		color(LIGHT_GREEN);
		printf("弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛            弛 弛            弛 弛            弛 弛            弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛  陴擎 蘋萄 弛       弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[0]].white);
		//printf("≒ %d", card1[dev_card1[b[0]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[1]].white);
		//printf("≒ %d", card1[dev_card1[b[1]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[2]].white);
		//printf("≒ %d", card1[dev_card1[b[2]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[3]].white);
		//printf("≒ %d", card1[dev_card1[b[3]]].white);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[0]].blue);
		//printf("≒ %d", card1[dev_card1[b[0]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[1]].blue);
		//printf("≒ %d", card1[dev_card1[b[1]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[2]].blue);
		//printf("≒ %d", card1[dev_card1[b[2]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[3]].blue);
		//printf("≒ %d", card1[dev_card1[b[3]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		if (card_size[0] >= 10)
			printf("弛     %d濰   弛       弛 ", card_size[0]);
		else
			printf("弛     %d濰    弛       弛 ", card_size[0]);
		color(RED);
		printf("≒ %d", card1[board_card[0]].red);
		//printf("≒ %d", card1[dev_card1[b[0]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[1]].red);
		//printf("≒ %d", card1[dev_card1[b[1]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[2]].red);
		//printf("≒ %d", card1[dev_card1[b[2]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[3]].red);
		//printf("≒ %d", card1[dev_card1[b[3]]].red);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[0]].green);
		//printf("≒ %d", card1[dev_card1[b[0]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[1]].green);
		//printf("≒ %d", card1[dev_card1[b[1]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[2]].green);
		//printf("≒ %d", card1[dev_card1[b[2]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[3]].green);
		//printf("≒ %d", card1[dev_card1[b[3]]].green);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[0]].purple);
		//printf("≒ %d", card1[dev_card1[b[0]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[1]].purple);
		//printf("≒ %d", card1[dev_card1[b[1]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[2]].purple);
		//printf("≒ %d", card1[dev_card1[b[2]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[3]].purple);
		//printf("≒ %d", card1[dev_card1[b[3]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 弛                   ");
		color(LIGHT_GREEN);
		printf("戌式式式式式式式式式式式式戎       戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 ");
		color(WHITE);
		printf("                   弛\n");
	}
	else if (keep_card[current_player][0].value[0] != '\0' && keep_card[current_player][1].value[0] == '\0') // 鎗и 蘋萄陛 и濰橾 陽
	{
		printf("             弛            player%d曖 鎗и 蘋萄 跡煙          弛                                                           ", current_player + 1);
		color(LIGHT_GREEN);
		printf("-- 1欽啗 偃嫦 蘋萄--");
		color(WHITE);
		printf("                                        弛\n");

		printf("             弛  1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖 弛                   ");
		color(LIGHT_GREEN);
		printf("忙式式式式式式式式式式式式忖        1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖  4式式式式式式式式式式式忖 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 %d        ", keep_card[current_player][0].point);
		print_jowel(keep_card[current_player][0].value);
		printf("弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(WHITE);
		printf("%d", card1[board_card[0]].point);
		//printf("%d", card1[dev_card1[b[0]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[0]].value);
		//print_jowel(card1[dev_card1[b[0]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[1]].point);
		//printf("%d", card1[dev_card1[b[1]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[1]].value);
		//print_jowel(card1[dev_card1[b[1]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[2]].point);
		//printf("%d", card1[dev_card1[b[2]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[2]].value);
		//print_jowel(card1[dev_card1[b[2]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[3]].point);
		//printf("%d", card1[dev_card1[b[3]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[3]].value);
		//print_jowel(card1[dev_card1[b[3]]].value);
		color(LIGHT_GREEN);
		printf("弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛            弛 弛            弛 弛            弛 弛            弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ≒ %d       弛 弛            弛 弛            弛 弛                   ", keep_card[current_player][0].white);
		color(LIGHT_GREEN);
		printf("弛  陴擎 蘋萄 弛       弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[0]].white);
		//printf("≒ %d", card1[dev_card1[b[0]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[1]].white);
		//printf("≒ %d", card1[dev_card1[b[1]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[2]].white);
		//printf("≒ %d", card1[dev_card1[b[2]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[3]].white);
		//printf("≒ %d", card1[dev_card1[b[3]]].white);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(BLUE);
		printf("≒ %d", keep_card[current_player][0].blue);
		color(WHITE);
		printf("       弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[0]].blue);
		//printf("≒ %d", card1[dev_card1[b[0]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[1]].blue);
		//printf("≒ %d", card1[dev_card1[b[1]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[2]].blue);
		//printf("≒ %d", card1[dev_card1[b[2]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[3]].blue);
		//printf("≒ %d", card1[dev_card1[b[3]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(RED);
		printf("≒ %d", keep_card[current_player][0].red);
		color(WHITE);
		printf("       弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		if (card_size[0] >= 10)
			printf("弛     %d濰   弛       弛 ", card_size[0]);
		else
			printf("弛     %d濰    弛       弛 ", card_size[0]);
		color(RED);
		printf("≒ %d", card1[board_card[0]].red);
		//printf("≒ %d", card1[dev_card1[b[0]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[1]].red);
		//printf("≒ %d", card1[dev_card1[b[1]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[2]].red);
		//printf("≒ %d", card1[dev_card1[b[2]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[3]].red);
		//printf("≒ %d", card1[dev_card1[b[3]]].red);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(GREEN);
		printf("≒ %d", keep_card[current_player][0].green);
		color(WHITE);
		printf("       弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[0]].green);
		//printf("≒ %d", card1[dev_card1[b[0]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[1]].green);
		//printf("≒ %d", card1[dev_card1[b[1]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[2]].green);
		//printf("≒ %d", card1[dev_card1[b[2]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[3]].green);
		//printf("≒ %d", card1[dev_card1[b[3]]].green);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(PURPLE);
		printf("≒ %d", keep_card[current_player][0].purple);
		color(WHITE);
		printf("       弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[0]].purple);
		//printf("≒ %d", card1[dev_card1[b[0]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[1]].purple);
		//printf("≒ %d", card1[dev_card1[b[1]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[2]].purple);
		//printf("≒ %d", card1[dev_card1[b[2]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[3]].purple);
		//printf("≒ %d", card1[dev_card1[b[3]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 弛                   ");
		color(LIGHT_GREEN);
		printf("戌式式式式式式式式式式式式戎       戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 ");
		color(WHITE);
		printf("                   弛\n");
	}
	else if (keep_card[current_player][0].value[0] != '\0' && keep_card[current_player][1].value[0] != '\0' && keep_card[current_player][2].value[0] == '\0') // 鎗и 蘋萄陛 2濰橾 陽
	{
		printf("             弛            player%d曖 鎗и 蘋萄 跡煙          弛                                                           ", current_player + 1);
		color(LIGHT_GREEN);
		printf("-- 1欽啗 偃嫦 蘋萄--");
		color(WHITE);
		printf("                                        弛\n");

		printf("             弛  1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖 弛                   ");
		color(LIGHT_GREEN);
		printf("忙式式式式式式式式式式式式忖        1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖  4式式式式式式式式式式式忖 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 %d        ", keep_card[current_player][0].point);
		print_jowel(keep_card[current_player][0].value);
		printf("弛 弛 %d        ", keep_card[current_player][1].point);
		print_jowel(keep_card[current_player][1].value);
		printf("弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(WHITE);
		printf("%d", card1[board_card[0]].point);
		//printf("%d", card1[dev_card1[b[0]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[0]].value);
		//print_jowel(card1[dev_card1[b[0]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[1]].point);
		//printf("%d", card1[dev_card1[b[1]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[1]].value);
		//print_jowel(card1[dev_card1[b[1]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[2]].point);
		//printf("%d", card1[dev_card1[b[2]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[2]].value);
		//print_jowel(card1[dev_card1[b[2]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[3]].point);
		//printf("%d", card1[dev_card1[b[3]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[3]].value);
		//print_jowel(card1[dev_card1[b[3]]].value);
		color(LIGHT_GREEN);
		printf("弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛            弛 弛            弛 弛            弛 弛            弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ≒ %d       弛 弛 ≒ %d       弛 弛            弛 弛                   ", keep_card[current_player][0].white, keep_card[current_player][1].white);
		color(LIGHT_GREEN);
		printf("弛  陴擎 蘋萄 弛       弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[0]].white);
		//printf("≒ %d", card1[dev_card1[b[0]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[1]].white);
		//printf("≒ %d", card1[dev_card1[b[1]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[2]].white);
		//printf("≒ %d", card1[dev_card1[b[2]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[3]].white);
		//printf("≒ %d", card1[dev_card1[b[3]]].white);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(BLUE);
		printf("≒ %d", keep_card[current_player][0].blue);
		color(WHITE);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", keep_card[current_player][1].blue);
		color(WHITE);
		printf("       弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[0]].blue);
		//printf("≒ %d", card1[dev_card1[b[0]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[1]].blue);
		//printf("≒ %d", card1[dev_card1[b[1]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[2]].blue);
		//printf("≒ %d", card1[dev_card1[b[2]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[3]].blue);
		//printf("≒ %d", card1[dev_card1[b[3]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(RED);
		printf("≒ %d", keep_card[current_player][0].red);
		color(WHITE);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", keep_card[current_player][1].red);
		color(WHITE);
		printf("       弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		if (card_size[0] >= 10)
			printf("弛     %d濰   弛       弛 ", card_size[0]);
		else
			printf("弛     %d濰    弛       弛 ", card_size[0]);
		color(RED);
		printf("≒ %d", card1[board_card[0]].red);
		//printf("≒ %d", card1[dev_card1[b[0]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[1]].red);
		//printf("≒ %d", card1[dev_card1[b[1]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[2]].red);
		//printf("≒ %d", card1[dev_card1[b[2]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[3]].red);
		//printf("≒ %d", card1[dev_card1[b[3]]].red);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(GREEN);
		printf("≒ %d", keep_card[current_player][0].green);
		color(WHITE);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", keep_card[current_player][1].green);
		color(WHITE);
		printf("       弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[0]].green);
		//printf("≒ %d", card1[dev_card1[b[0]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[1]].green);
		//printf("≒ %d", card1[dev_card1[b[1]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[2]].green);
		//printf("≒ %d", card1[dev_card1[b[2]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[3]].green);
		//printf("≒ %d", card1[dev_card1[b[3]]].green);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(PURPLE);
		printf("≒ %d", keep_card[current_player][0].purple);
		color(WHITE);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", keep_card[current_player][1].purple);
		color(WHITE);
		printf("       弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[0]].purple);
		//printf("≒ %d", card1[dev_card1[b[0]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[1]].purple);
		//printf("≒ %d", card1[dev_card1[b[1]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[2]].purple);
		//printf("≒ %d", card1[dev_card1[b[2]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[3]].purple);
		//printf("≒ %d", card1[dev_card1[b[3]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 弛                   ");
		color(LIGHT_GREEN);
		printf("戌式式式式式式式式式式式式戎       戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 ");
		color(WHITE);
		printf("                   弛\n");
	}
	else if (keep_card[current_player][0].value[0] != '\0' && keep_card[current_player][1].value[0] != '\0' && keep_card[current_player][2].value[0] != '\0') // 鎗и 蘋萄陛 3濰橾 陽
	{
		printf("             弛            player%d曖 鎗и 蘋萄 跡煙          弛                                                           ", current_player + 1);
		color(LIGHT_GREEN);
		printf("-- 1欽啗 偃嫦 蘋萄--");
		color(WHITE);
		printf("                                        弛\n");

		printf("             弛  1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖 弛                   ");
		color(LIGHT_GREEN);
		printf("忙式式式式式式式式式式式式忖        1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖  4式式式式式式式式式式式忖 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 %d        ", keep_card[current_player][0].point);
		print_jowel(keep_card[current_player][0].value);
		printf("弛 弛 %d        ", keep_card[current_player][1].point);
		print_jowel(keep_card[current_player][1].value);
		printf("弛 弛 %d        ", keep_card[current_player][2].point);
		print_jowel(keep_card[current_player][2].value);
		color(WHITE);
		printf("弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(WHITE);
		printf("%d", card1[board_card[0]].point);
		//printf("%d", card1[dev_card1[b[0]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[0]].value);
		//print_jowel(card1[dev_card1[b[0]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[1]].point);
		//printf("%d", card1[dev_card1[b[1]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[1]].value);
		//print_jowel(card1[dev_card1[b[1]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[2]].point);
		//printf("%d", card1[dev_card1[b[2]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[2]].value);
		//print_jowel(card1[dev_card1[b[2]]].value);
		color(LIGHT_GREEN);
		printf("弛 弛 ");
		color(WHITE);
		printf("%d", card1[board_card[3]].point);
		//printf("%d", card1[dev_card1[b[3]]].point);
		color(LIGHT_GREEN);
		printf("        ");
		print_jowel(card1[board_card[3]].value);
		//print_jowel(card1[dev_card1[b[3]]].value);
		color(LIGHT_GREEN);
		printf("弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛            弛 弛            弛 弛            弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛            弛 弛            弛 弛            弛 弛            弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ≒ %d       弛 弛 ≒ %d       弛 弛 ≒ %d       弛 弛                   ", keep_card[current_player][0].white, keep_card[current_player][1].white, keep_card[current_player][2].white);
		color(LIGHT_GREEN);
		printf("弛  陴擎 蘋萄 弛       弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[0]].white);
		//printf("≒ %d", card1[dev_card1[b[0]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[1]].white);
		//printf("≒ %d", card1[dev_card1[b[1]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[2]].white);
		//printf("≒ %d", card1[dev_card1[b[2]]].white);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(WHITE);
		printf("≒ %d", card1[board_card[3]].white);
		//printf("≒ %d", card1[dev_card1[b[3]]].white);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(BLUE);
		printf("≒ %d", keep_card[current_player][0].blue);
		color(WHITE);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", keep_card[current_player][1].blue);
		color(WHITE);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", keep_card[current_player][2].blue);
		color(WHITE);
		printf("       弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[0]].blue);
		//printf("≒ %d", card1[dev_card1[b[0]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[1]].blue);
		//printf("≒ %d", card1[dev_card1[b[1]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[2]].blue);
		//printf("≒ %d", card1[dev_card1[b[2]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(BLUE);
		printf("≒ %d", card1[board_card[3]].blue);
		//printf("≒ %d", card1[dev_card1[b[3]]].blue);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(RED);
		printf("≒ %d", keep_card[current_player][0].red);
		color(WHITE);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", keep_card[current_player][1].red);
		color(WHITE);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", keep_card[current_player][2].red);
		color(WHITE);
		printf("       弛 弛                   ");
		color(LIGHT_GREEN);
		if (card_size[0] >= 10)
			printf("弛     %d濰   弛       弛 ", card_size[0]);
		else
			printf("弛     %d濰    弛       弛 ", card_size[0]);
		color(RED);
		printf("≒ %d", card1[board_card[0]].red);
		//printf("≒ %d", card1[dev_card1[b[0]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[1]].red);
		//printf("≒ %d", card1[dev_card1[b[1]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[2]].red);
		//printf("≒ %d", card1[dev_card1[b[2]]].red);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(RED);
		printf("≒ %d", card1[board_card[3]].red);
		//printf("≒ %d", card1[dev_card1[b[3]]].red);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(GREEN);
		printf("≒ %d", keep_card[current_player][0].green);
		color(WHITE);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", keep_card[current_player][1].green);
		color(WHITE);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", keep_card[current_player][2].green);
		color(WHITE);
		printf("       弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[0]].green);
		//printf("≒ %d", card1[dev_card1[b[0]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[1]].green);
		//printf("≒ %d", card1[dev_card1[b[1]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[2]].green);
		//printf("≒ %d", card1[dev_card1[b[2]]].green);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(GREEN);
		printf("≒ %d", card1[board_card[3]].green);
		//printf("≒ %d", card1[dev_card1[b[3]]].green);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 弛 ");
		color(PURPLE);
		printf("≒ %d", keep_card[current_player][0].purple);
		color(WHITE);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", keep_card[current_player][1].purple);
		color(WHITE);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", keep_card[current_player][2].purple);
		color(WHITE);
		printf("       弛 弛                   ");
		color(LIGHT_GREEN);
		printf("弛            弛       弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[0]].purple);
		//printf("≒ %d", card1[dev_card1[b[0]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[1]].purple);
		//printf("≒ %d", card1[dev_card1[b[1]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[2]].purple);
		//printf("≒ %d", card1[dev_card1[b[2]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 弛 ");
		color(PURPLE);
		printf("≒ %d", card1[board_card[3]].purple);
		//printf("≒ %d", card1[dev_card1[b[3]]].purple);
		color(LIGHT_GREEN);
		printf("       弛 ");
		color(WHITE);
		printf("                   弛\n");

		printf("             弛 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 弛                   ");
		color(LIGHT_GREEN);
		printf("戌式式式式式式式式式式式式戎       戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 ");
		color(WHITE);
		printf("                   弛\n");
	}

	color(WHITE);
	printf("             戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣                                                           ");
	color(LIGHT_GOLD);
	printf("-- 2欽啗 偃嫦 蘋萄--");
	color(WHITE);
	printf("                                        弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("忙式式式式式式式式式式式式忖        1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖  4式式式式式式式式式式式忖 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛 ");
	color(WHITE);
	printf("%d", card2[board_card[4]].point);
	//printf("%d", card2[dev_card2[c[0]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[board_card[4]].value);
	//print_jowel(card2[dev_card2[c[0]]].value);
	color(LIGHT_GOLD);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card2[board_card[5]].point);
	//printf("%d", card2[dev_card2[c[1]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[board_card[5]].value);
	//print_jowel(card2[dev_card2[c[1]]].value);
	color(LIGHT_GOLD);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card2[board_card[6]].point);
	//printf("%d", card2[dev_card2[c[2]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[board_card[6]].value);
	//print_jowel(card2[dev_card2[c[2]]].value);
	color(LIGHT_GOLD);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card2[board_card[7]].point);
	//printf("%d", card2[dev_card2[c[3]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[board_card[7]].value);
	//print_jowel(card2[dev_card2[c[3]]].value);
	color(LIGHT_GOLD);
	printf("弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛            弛 弛            弛 弛            弛 弛            弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛  陴擎 蘋萄 弛       弛 ");
	color(WHITE);
	printf("≒ %d", card2[board_card[4]].white);
	//printf("≒ %d", card2[dev_card2[c[0]]].white);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card2[board_card[5]].white);
	//printf("≒ %d", card2[dev_card2[c[1]]].white);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card2[board_card[6]].white);
	//printf("≒ %d", card2[dev_card2[c[2]]].white);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card2[board_card[7]].white);
	//printf("≒ %d", card2[dev_card2[c[3]]].white);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛 ");
	color(BLUE);
	printf("≒ %d", card2[board_card[4]].blue);
	//printf("≒ %d", card2[dev_card2[c[0]]].blue);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card2[board_card[5]].blue);
	//printf("≒ %d", card2[dev_card2[c[1]]].blue);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card2[board_card[6]].blue);
	//printf("≒ %d", card2[dev_card2[c[2]]].blue);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card2[board_card[7]].blue);
	//printf("≒ %d", card2[dev_card2[c[3]]].blue);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	if (card_size[1] >= 10)
		printf("弛     %d濰   弛       弛 ", card_size[1]);
	else
		printf("弛     %d濰    弛       弛 ", card_size[1]);
	color(RED);
	printf("≒ %d", card2[board_card[4]].red);
	//printf("≒ %d", card2[dev_card2[c[0]]].red);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card2[board_card[5]].red);
	//printf("≒ %d", card2[dev_card2[c[1]]].red);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card2[board_card[6]].red);
	//printf("≒ %d", card2[dev_card2[c[2]]].red);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card2[board_card[7]].red);
	//printf("≒ %d", card2[dev_card2[c[3]]].red);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛 ");
	color(GREEN);
	printf("≒ %d", card2[board_card[4]].green);
	//printf("≒ %d", card2[dev_card2[c[0]]].green);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card2[board_card[5]].green);
	//printf("≒ %d", card2[dev_card2[c[1]]].green);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card2[board_card[6]].green);
	//printf("≒ %d", card2[dev_card2[c[2]]].green);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card2[board_card[7]].green);
	//printf("≒ %d", card2[dev_card2[c[3]]].green);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛 ");
	color(PURPLE);
	printf("≒ %d", card2[board_card[4]].purple);
	//printf("≒ %d", card2[dev_card2[c[0]]].purple);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card2[board_card[5]].purple);
	//printf("≒ %d", card2[dev_card2[c[1]]].purple);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card2[board_card[6]].purple);
	//printf("≒ %d", card2[dev_card2[c[2]]].purple);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card2[board_card[7]].purple);
	//printf("≒ %d", card2[dev_card2[c[3]]].purple);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("戌式式式式式式式式式式式式戎       戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 ");
	color(WHITE);
	printf("                   弛\n");



	color(WHITE);
	printf("                                                            弛                                                           ");
	color(LIGHT_BLUE);
	printf("-- 3欽啗 偃嫦 蘋萄--");
	color(WHITE);
	printf("                                        弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("忙式式式式式式式式式式式式忖        1式式式式式式式式式式式忖  2式式式式式式式式式式式忖  3式式式式式式式式式式式忖  4式式式式式式式式式式式忖 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛 ");
	color(WHITE);
	printf("%d", card3[board_card[8]].point);
	//printf("%d", card3[dev_card3[d[0]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[board_card[8]].value);
	//print_jowel(card3[dev_card3[d[0]]].value);
	color(LIGHT_BLUE);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card3[board_card[9]].point);
	//printf("%d", card3[dev_card3[d[1]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[board_card[9]].value);
	//print_jowel(card3[dev_card3[d[1]]].value);
	color(LIGHT_BLUE);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card3[board_card[10]].point);
	//printf("%d", card3[dev_card3[d[2]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[board_card[10]].value);
	//print_jowel(card3[dev_card3[d[2]]].value);
	color(LIGHT_BLUE);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card3[board_card[11]].point);
	//printf("%d", card3[dev_card3[d[3]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[board_card[11]].value);
	//print_jowel(card3[dev_card3[d[3]]].value);
	color(LIGHT_BLUE);
	printf("弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛            弛 弛            弛 弛            弛 弛            弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛  陴擎 蘋萄 弛       弛 ");
	color(WHITE);
	printf("≒ %d", card3[board_card[8]].white);
	//printf("≒ %d", card3[dev_card3[d[0]]].white);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card3[board_card[9]].white);
	//printf("≒ %d", card3[dev_card3[d[1]]].white);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card3[board_card[10]].white);
	//printf("≒ %d", card3[dev_card3[d[2]]].white);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card3[board_card[11]].white);
	//printf("≒ %d", card3[dev_card3[d[3]]].white);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛 ");
	color(BLUE);
	printf("≒ %d", card3[board_card[8]].blue);
	//printf("≒ %d", card3[dev_card3[d[0]]].blue);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card3[board_card[9]].blue);
	//printf("≒ %d", card3[dev_card3[d[1]]].blue);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card3[board_card[10]].blue);
	//printf("≒ %d", card3[dev_card3[d[2]]].blue);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card3[board_card[11]].blue);
	//printf("≒ %d", card3[dev_card3[d[3]]].blue);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	if (card_size[2] >= 10)
		printf("弛     %d濰   弛       弛 ", card_size[2]);
	else
		printf("弛     %d濰    弛       弛 ", card_size[2]);
	color(RED);
	printf("≒ %d", card3[board_card[8]].red);
	//printf("≒ %d", card3[dev_card3[d[0]]].red);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card3[board_card[9]].red);
	//printf("≒ %d", card3[dev_card3[d[1]]].red);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card3[board_card[10]].red);
	//printf("≒ %d", card3[dev_card3[d[2]]].red);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card3[board_card[11]].red);
	//printf("≒ %d", card3[dev_card3[d[3]]].red);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛 ");
	color(GREEN);
	printf("≒ %d", card3[board_card[8]].green);
	//printf("≒ %d", card3[dev_card3[d[0]]].green);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card3[board_card[9]].green);
	//printf("≒ %d", card3[dev_card3[d[1]]].green);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card3[board_card[10]].green);
	//printf("≒ %d", card3[dev_card3[d[2]]].green);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card3[board_card[11]].green);
	//printf("≒ %d", card3[dev_card3[d[3]]].green);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛 ");
	color(PURPLE);
	printf("≒ %d", card3[board_card[8]].purple);
	//printf("≒ %d", card3[dev_card3[d[0]]].purple);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card3[board_card[9]].purple);
	//printf("≒ %d", card3[dev_card3[d[1]]].purple);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card3[board_card[10]].purple);
	//printf("≒ %d", card3[dev_card3[d[2]]].purple);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card3[board_card[11]].purple);
	//printf("≒ %d", card3[dev_card3[d[3]]].purple);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("戌式式式式式式式式式式式式戎       戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                                                                                                                       弛\n");

	//饜贖 璽堅 爾嶸 饜贖 轎溘
	printf("                                                            弛                                     ≒ %d    ", white);
	color(BLUE);
	printf("≒ %d    ", blue);
	color(RED);
	printf("≒ %d    ", red);
	color(GREEN);
	printf("≒ %d    ", green);
	color(PURPLE);
	printf("≒ %d    ", purple);
	color(GOLD);
	printf("≒ %d", gold);
	color(WHITE);
	printf("                                      弛\n");

	printf("                                                            弛                                                                                                                       弛\n");

	//橾濠還 ル⑷
	color(WHITE);
	printf("                                                            戍");
	for (int i = 0; i < 59; i++)
		printf("式");
	printf("成");
	for (int i = 0; i < 59; i++)
		printf("式");
	printf("扣");
	printf("\n");

	if (current_player == 2) // player3 離滔橾陽
	{
		printf("                                                            弛 ");
		GROUND_color(WHITE);
		printf("player3                                                   ");
		color(WHITE);
		printf("弛");
		printf(" player4                                                   ");
		printf("弛");
		printf("\n");

		printf("                                                            弛 ");
		GROUND_color(WHITE);
		if (player[2].score >= 10)
			printf("薄熱 : %d                                                 ", player[2].score);
		else
			printf("薄熱 : %d                                                  ", player[2].score);
		color(WHITE);
		printf("弛");
		if (player[3].score >= 10)
			printf(" 薄熱 : %d                                                 ", player[3].score);
		else
			printf(" 薄熱 : %d                                                  ", player[3].score);
		printf("弛\n");
		color(WHITE);

		//爾戮 饜贖 轎溘
		printf("                                                            弛 ");
		GROUND_color(WHITE);
		printf("爾戮 饜贖 : ");
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
		printf("弛");
		printf(" 爾戮 饜贖 : ");
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
		printf("                                  弛\n");

		//蘋萄 饜贖 轎溘
		printf("                                                            弛 ");
		GROUND_color(WHITE);
		printf("蘋萄 饜贖 : ");
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
		printf("弛");
		printf(" 蘋萄 饜贖 : ");
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
		printf("                                    弛");
		printf("\n");
	}
	else if (current_player == 3) // player4離滔 橾陽
	{
		printf("                                                            弛 ");
		color(WHITE);
		printf("player3                                                   ");
		printf("弛 ");
		GROUND_color(WHITE);
		printf("player4                                                   ");
		color(WHITE);
		printf("弛");
		printf("\n");

		printf("                                                            弛 ");
		if (player[2].score >= 10)
			printf("薄熱 : %d                                                 ", player[2].score);
		else
			printf("薄熱 : %d                                                  ", player[2].score);
		printf("弛 ");
		GROUND_color(WHITE);
		if (player[3].score >= 10)
			printf("薄熱 : %d                                                 ", player[3].score);
		else
			printf("薄熱 : %d                                                  ", player[3].score);
		color(WHITE);
		printf("弛");
		printf("\n");

		//爾戮 饜贖 轎溘
		printf("                                                            弛 爾戮 饜贖 : ");
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
		printf("                                  弛 ");
		GROUND_color(WHITE);
		printf("爾戮 饜贖 : ");
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
		printf("弛\n");

		//蘋萄 饜贖 轎溘
		printf("                                                            弛 蘋萄 饜贖 : ");
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
		printf("                                    弛 ");
		GROUND_color(WHITE);
		printf("蘋萄 饜贖 : ");
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
		printf("弛");
		printf("\n");
	}
	else // player3, 4 醞 援掘曖 離滔紫 嬴棍 陽
	{
		printf("                                                            弛");
		color(WHITE);
		printf(" player3                                                   ");
		printf("弛");
		color(WHITE);
		printf(" player4                                                   ");
		color(WHITE);
		printf("弛\n");

		printf("                                                            弛");
		color(WHITE);
		if (player[2].score >= 10)
			printf(" 薄熱 : %d                                                 ", player[2].score);
		else
			printf(" 薄熱 : %d                                                  ", player[2].score);
		printf("弛");
		color(WHITE);
		if (player[3].score >= 10)
			printf(" 薄熱 : %d                                                 ", player[3].score);
		else
			printf(" 薄熱 : %d                                                  ", player[3].score);
		printf("弛\n");
		color(WHITE);

		//爾戮 饜贖 轎溘
		printf("                                                            弛 爾戮 饜贖 : ");
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
		printf("                                  弛 爾戮 饜贖 : ");
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
		printf("                                  弛\n");

		//蘋萄 饜贖 轎溘
		printf("                                                            弛 蘋萄 饜贖 : ");
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
		printf("                                    弛 蘋萄 饜贖 : ");
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
		printf("                                    弛\n");
	}

	//橾濠還 ル⑷
	printf("                                                            戌");
	for (int i = 0; i < 59; i++)
		printf("式");
	printf("扛");
	for (int i = 0; i < 59; i++)
		printf("式");
	printf("戎");
	printf("\n");
}

void print_jowel(char jowel[]) // 蘋萄 爾戮 饜贖 轎溘
{
	if (!strcmp(jowel, "white"))
	{
		color(WHITE);
		printf("﹥");
	}

	else if (!strcmp(jowel, "blue"))
	{
		color(BLUE);
		printf("﹥");
	}

	else if (!strcmp(jowel, "red"))
	{
		color(RED);
		printf("﹥");
	}

	else if (!strcmp(jowel, "green"))
	{
		color(GREEN);
		printf("﹥");
	}

	else if (!strcmp(jowel, "purple"))
	{
		color(PURPLE);
		printf("﹥");
	}

	else
	{
		printf("  ");
	}

	color(WHITE);
}

int check_winner(void) // 辦蝓濠 っ欽 л熱
{
	int win_player[4] = { 0 }; // win_player[4] : 薄熱陛 陛濰 堪擎 Ы溯檜橫陛 援掘檣雖 盪濰, 虜擒 翕薄濠陛 氈擊 �� win_player[0]縑 摹 Ы溯檜橫, win_player[1]縑 �� Ы溯檜橫 檜楛衝戲煎 菴煎 陞熱煙 �� Ы溯檜橫
	int high_score = 0, num = 0; // high_score : 辦蝓濠曖 薄熱 (薄熱 醞 譆堅薄), num : 翕薄濠曖 熱 - 1
	int win_card = 90, win_who = 0; // win_card : 翕薄濠陛 氈擊 陽 偃嫦蘋萄曖 熱陛 瞳擎 蘋萄曖 熱, win_who : 譆謙瞳戲煎 援陛 檜啣朝雖 っ欽

	for (int x = 0; x < 4; x++) // 援陛 薄熱陛 陛濰 堪朝雖 �挫�
	{
		if (player[x].score > high_score)
		{
			num = 0;
			high_score = player[x].score;
			win_player[num] = x;
		}
		else if (player[x].score == high_score) // 翕薄濠陛 氈擊 陽 嬴楚 for僥擊 鱔п 辦蝓濠 っ欽
		{
			num++;
			win_player[num] = x;
		}
	}

	if (num > 0) // 翕薄濠陛 氈擊 陽
	{
		for (int y = 0; y < num + 1; y++) // 偃嫦蘋萄曖 熱陛 瞳擎 餌塋檜 辦蝓, 虜擒 偃嫦蘋萄曖 熱紫 偽棻賊 �饒繩嘛抩謚� 辦蝓
		{
			if ((player[win_player[y]].card_white + player[win_player[y]].card_blue + player[win_player[y]].card_red + player[win_player[y]].card_green + player[win_player[y]].card_purple) <= win_card)
			{
				win_who = win_player[y];
				win_card = (player[win_player[y]].card_white + player[win_player[y]].card_blue + player[win_player[y]].card_red + player[win_player[y]].card_green + player[win_player[y]].card_purple);
			}
		}
	}
	else if (num == 0) // 翕薄濠陛 橈擊 陽
	{
		win_who = win_player[num];
	}

	return win_who; // 辦蝓濠陛 援掘檣雖 奩��
}

void book_card(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[], int board_card[])
{
	int step1 = 0; // 偃嫦 蘋萄 欽啗
	int step2 = 0; // 偃嫦 蘋萄 牖憮
	int cardIdx = 0; // 鉻擎 蘋萄 檣策蝶
	int key = 0;

	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
	printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
	printf("                                                            弛 偃嫦 蘋萄 鎗ж晦蒂 摹鷗ц蝗棲棻.                                                                                      弛\n");
	printf("                                                            弛 鎗 й 偃嫦 蘋萄曖 欽啗蒂 殮溘п輿撮蹂.                                                                                弛\n");
	printf("                                                            弛 ( 1欽啗 偃嫦 蘋萄 : 1, 2欽啗 偃嫦 蘋萄 : 2, 3欽啗 偃嫦 蘋萄 : 3, 鎗 蘋萄 : 4, �做� 摹鷗璽戲煎 剩橫陛晦 : Z )          弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == '1') // 酈爾萄 1酈 殮溘
			{
				M(DO); // �膩�擠 '紫' 轎溘
				step1 = 0;
				break;
			}
			else if (key == '2') // 酈爾萄 2酈 殮溘
			{
				M(RE); // �膩�擠 '溯' 轎溘
				step1 = 1;
				break;
			}
			else if (key == '3') // 酈爾萄 3酈 殮溘
			{
				M(MI); // �膩�擠 '嘐' 轎溘
				step1 = 2;
				break;
			}
			else if (key == '4') // 酈爾萄 4酈 殮溘
			{
				M(PA); // �膩�擠 'だ' 轎溘
				step1 = 3;
				break;
			}
			else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
			{
				M(_DO); // �膩�擠 '堪擎 紫' 轎溘
				current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
				return; //л熱 謙猿
				break;
			}
		}
	}
	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3, board_card);
	printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
	printf("                                                            弛 偃嫦 蘋萄 鎗ж晦蒂 摹鷗ц蝗棲棻.                                                                                      弛\n");
	printf("                                                            弛 %d欽啗縑憮 鎗 й 偃嫦 蘋萄曖 牖憮蒂 殮溘п輿撮蹂.                                                                     弛\n", step1 + 1);
	printf("                                                            弛 ( 1廓簞 偃嫦 蘋萄 : 1, 2廓簞 偃嫦 蘋萄 : 2, 3廓簞 偃嫦 蘋萄 : 3, 4廓簞 偃嫦 蘋萄 : 4, �做� 摹鷗璽戲煎 剩橫陛晦 : Z )  弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == '1') // 酈爾萄 1酈 殮溘
			{
				M(DO); // �膩�擠 '紫' 轎溘
				step2 = 0;
				break;
			}
			else if (key == '2') // 酈爾萄 2酈 殮溘
			{
				M(RE); // �膩�擠 '溯' 轎溘
				step2 = 1;
				break;
			}
			else if (key == '3') // 酈爾萄 3酈 殮溘
			{
				M(MI); // �膩�擠 '嘐' 轎溘
				step2 = 2;
				break;
			}
			else if (key == '4') // 酈爾萄 4酈 殮溘
			{
				M(PA); // �膩�擠 'だ' 轎溘
				step2 = 3;
				break;
			}
			else if (key == 122 || key == 90) // 酈爾萄 z酈 殮溘
			{
				M(_DO); // �膩�擠 '堪擎 紫' 轎溘
				current_player -= 1; // 啪歜 л熱縑憮 +1擊 п輿嘎煎 棻衛 ж溥賊 -1擊 п醜撿л
				return; //л熱 謙猿
				break;
			}
		}
	}

	int turn = 0;
	cardIdx = board_card[step1 * 4 + step2];

	switch (step1)
	{
	case 0:
		if (keep_card[current_player][turn].point == '\0')
		{
			keep_card[current_player][turn].point = card2[cardIdx].point;
			strcpy(keep_card[current_player][turn].value, card2[cardIdx].value);
			keep_card[current_player][turn].blue = card2[cardIdx].blue;
			keep_card[current_player][turn].green = card2[cardIdx].green;
			keep_card[current_player][turn].purple = card2[cardIdx].purple;
			keep_card[current_player][turn].red = card2[cardIdx].red;
			keep_card[current_player][turn].white = card2[cardIdx].white;

		}
		
		else if (keep_card[current_player][turn].point != '\0' && keep_card[current_player][turn + 1].point == '\0')
		{
			keep_card[current_player][turn+1].point = card2[cardIdx].point;
			strcpy(keep_card[current_player][turn+1].value, card2[cardIdx].value);
			keep_card[current_player][turn+1].blue = card2[cardIdx].blue;
			keep_card[current_player][turn+1].green = card2[cardIdx].green;
			keep_card[current_player][turn+1].purple = card2[cardIdx].purple;
			keep_card[current_player][turn+1].red = card2[cardIdx].red;
			keep_card[current_player][turn+1].white = card2[cardIdx].white;
		}

		else if (keep_card[current_player][turn].point != '\0' && keep_card[current_player][turn + 1].point != '\0')
		{
			keep_card[current_player][turn + 2].point = card2[cardIdx].point;
			strcpy(keep_card[current_player][turn + 2].value, card2[cardIdx].value);
			keep_card[current_player][turn + 2].blue = card2[cardIdx].blue;
			keep_card[current_player][turn + 2].green = card2[cardIdx].green;
			keep_card[current_player][turn + 2].purple = card2[cardIdx].purple;
			keep_card[current_player][turn + 2].red = card2[cardIdx].red;
			keep_card[current_player][turn + 2].white = card2[cardIdx].white;
		}

		//棻擠 蘋萄蒂 爾萄縑 場晦
		board_card[step1 * 4 + step2] = dev_card2[drawn_cards[step1]];
		break;
	case 1:
		if (keep_card[current_player][turn].point == '\0')
		{
			keep_card[current_player][turn].point = card2[cardIdx].point;
			strcpy(keep_card[current_player][turn].value, card2[cardIdx].value);
			keep_card[current_player][turn].blue = card2[cardIdx].blue;
			keep_card[current_player][turn].green = card2[cardIdx].green;
			keep_card[current_player][turn].purple = card2[cardIdx].purple;
			keep_card[current_player][turn].red = card2[cardIdx].red;
			keep_card[current_player][turn].white = card2[cardIdx].white;

		}

		else if (keep_card[current_player][turn].point != '\0' && keep_card[current_player][turn + 1].point == '\0')
		{
			keep_card[current_player][turn + 1].point = card2[cardIdx].point;
			strcpy(keep_card[current_player][turn + 1].value, card2[cardIdx].value);
			keep_card[current_player][turn + 1].blue = card2[cardIdx].blue;
			keep_card[current_player][turn + 1].green = card2[cardIdx].green;
			keep_card[current_player][turn + 1].purple = card2[cardIdx].purple;
			keep_card[current_player][turn + 1].red = card2[cardIdx].red;
			keep_card[current_player][turn + 1].white = card2[cardIdx].white;
		}

		else if (keep_card[current_player][turn].point != '\0' && keep_card[current_player][turn + 1].point != '\0')
		{
			keep_card[current_player][turn + 2].point = card2[cardIdx].point;
			strcpy(keep_card[current_player][turn + 2].value, card2[cardIdx].value);
			keep_card[current_player][turn + 2].blue = card2[cardIdx].blue;
			keep_card[current_player][turn + 2].green = card2[cardIdx].green;
			keep_card[current_player][turn + 2].purple = card2[cardIdx].purple;
			keep_card[current_player][turn + 2].red = card2[cardIdx].red;
			keep_card[current_player][turn + 2].white = card2[cardIdx].white;
		}

		//棻擠 蘋萄蒂 爾萄縑 場晦
		board_card[step1 * 4 + step2] = dev_card2[drawn_cards[step1]];
		break;
	case 2:
		if (keep_card[current_player][turn].point == '\0')
		{
			keep_card[current_player][turn].point = card3[cardIdx].point;
			strcpy(keep_card[current_player][turn].value, card3[cardIdx].value);
			keep_card[current_player][turn].blue = card3[cardIdx].blue;
			keep_card[current_player][turn].green = card3[cardIdx].green;
			keep_card[current_player][turn].purple = card3[cardIdx].purple;
			keep_card[current_player][turn].red = card3[cardIdx].red;
			keep_card[current_player][turn].white = card3[cardIdx].white;

		}

		else if (keep_card[current_player][turn].point != '\0' && keep_card[current_player][turn + 1].point == '\0')
		{
			keep_card[current_player][turn + 1].point = card3[cardIdx].point;
			strcpy(keep_card[current_player][turn + 1].value, card3[cardIdx].value);
			keep_card[current_player][turn + 1].blue = card3[cardIdx].blue;
			keep_card[current_player][turn + 1].green = card3[cardIdx].green;
			keep_card[current_player][turn + 1].purple = card3[cardIdx].purple;
			keep_card[current_player][turn + 1].red = card3[cardIdx].red;
			keep_card[current_player][turn + 1].white = card3[cardIdx].white;
		}

		else if (keep_card[current_player][turn].point != '\0' && keep_card[current_player][turn + 1].point != '\0')
		{
			keep_card[current_player][turn + 2].point = card3[cardIdx].point;
			strcpy(keep_card[current_player][turn + 2].value, card3[cardIdx].value);
			keep_card[current_player][turn + 2].blue = card3[cardIdx].blue;
			keep_card[current_player][turn + 2].green = card3[cardIdx].green;
			keep_card[current_player][turn + 2].purple = card3[cardIdx].purple;
			keep_card[current_player][turn + 2].red = card3[cardIdx].red;
			keep_card[current_player][turn + 2].white = card3[cardIdx].white;
		}

		//棻擠 蘋萄蒂 爾萄縑 場晦
		board_card[step1 * 4 + step2] = dev_card3[drawn_cards[step1]];
		break;
	}
}