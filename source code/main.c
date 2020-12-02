#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
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

Develop_1 card1[40] = { {1,"purple",0,4,0,0,0}, {1,"red",4,0,0,0,0}, {1,"blue",0,0,4,0,0}, {1,"green",0,0,0,0,4}, {1,"white",0,0,0,4,0}, {0,"blue",1,0,1,1,1}, {0,"blue",1,0,2,2,0}, {0,"blue",0,1,1,3,0}, {0,"blue",1,0,2,1,1}, {0,"blue",0,0,0,0,3}, {0,"blue",0,0,0,2,2}, {0,"blue",1,0,0,0,2}, {0,"green",0,0,3,0,0}, {0,"green",0,2,2,0,0}, {0,"green",0,1,2,0,2}, {0,"green",1,1,1,0,1}, {0,"green",1,1,1,0,2}, {0,"green",2,1,0,0,0}, {0,"green",1,3,0,1,0}, {0,"purple",0,0,1,2,0}, {0,"purple",2,2,1,0,0}, {0,"purple",1,1,1,1,0}, {0,"purple",0,0,0,3,0}, {0,"purple",0,0,3,1,1}, {0,"purple",1,2,1,1,0}, {0,"purple",2,0,0,2,0}, {0,"red",2,1,0,1,1}, {0,"red",2,0,2,0,0}, {0,"red",1,1,0,1,1}, {0,"red",0,2,0,1,0}, {0,"red",3,0,0,0,0}, {0,"red",2,0,0,1,2}, {0,"red",1,0,1,0,3}, {0,"white",0,2,0,0,2}, {0,"white",0,1,1,2,1}, {0,"white",0,1,1,1,1}, {0,"white",0,3,0,0,0}, {0,"white",0,0,2,0,1}, {0,"white",0,2,0,2,1}, {0,"white",3,1,0,0,1} };
Develop_2 card2[30] = { { 2,"purple",5,0,0,0,0}, {2,"blue",5,3,0,0,0}, {1,"green",2,3,0,0,2}, {2,"white",0,0,4,1,2}, {1,"green",4,2,0,0,1}, {3,"white",6,0,0,0,0}, {2,"white",0,0,5,0,0}, {1,"green",3,0,3,2,0}, {2,"blue",2,0,1,0,4}, {1,"white",0,0,2,3,2}, {1,"red",0,3,2,0,3}, {3,"blue",0,6,0,0,0}, {1,"purple",3,2,0,2,0}, {1,"blue",0,2,0,3,3},{1,"red",2,0,2,0,3}, {2,"purple",0,0,3,5,0}, {2,"green",0,0,0,5,0}, {2,"green",0,5,0,3,0}, {1,"purple",3,0,0,3,2}, {2,"blue",0,5,0,0,0}, {2,"red",0,0,0,0,5}, {1,"blue",0,2,3,2,0}, {2,"red",1,4,0,2,0}, {3,"red",0,0,6,0,0}, {1,"white",2,3,3,0,0}, {3,"green",0,0,0,6,0}, {2,"white",0,0,5,0,3}, {3,"purple",0,0,0,0,6}, {2,"purple",0,1,2,4,0}, {2,"red",3,0,0,0,5} };
Develop_3 card3[20] = { { 4,"blue",7,0,0,0,0 }, { 4,"green",3,6,0,3,0} , {4,"red",0,0,0,7,0}, {3, "purple",3,3,3,5,0}, {4, "white",3,0,3,0,6}, {3, "green", 5,3,3,0,3}, {4,"purple",0,0,7,0,0},{3,"blue",3,0,3,3,5}, {5,"purple",0,0,7,0,3},{3,"white",0,3,5,3,3},{4,"red",0,3,3,6,0},{5,"red",0,0,3,7,0},{5,"blue",7,3,0,0,0},{4,"white",0,0,6,3,3},{5,"green",0,7,0,3,0}, {4, "purple",0,0,6,3,3}, {4,"green",0,7,0,0,0},{4,"blue",6,3,0,0,3}, {5,"white",3,0,0,0,7}, {3,"red",3,5,0,3,3} };
Nob nob[10] = { {4,4,0,0,0}, {0,0,4,0,4}, {0,0,4,4,0}, {4,0,3,0,3}, {3,3,0,0,3}, {0,4,0,4,0}, {3,3,0,3,0}, {0,3,3,3,0}, {0,0,3,3,3}, {4,0,0,0,4} };
Player player[4] = { 0 };

int main(void)
{
	int nob_card[10], i, temp, x, y, dev_card1[40], dev_card2[30], dev_card3[20];

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

	 //醞犒橈朝 偃嫦 蘋萄1
	for (i = 0; i < 40; i++) dev_card1[i] = i;
	for (i = 0; i < 100; i++)
	{
		x = rand() % 40;
		y = rand() % 40;

		if (x != y) {
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

	//醞犒橈朝 偃嫦 蘋萄2
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

	//檣お煎 轎溘
	intro(); // 纔蝶お 衛縑 剪蝸葬賊 檜 睡碟虜 輿戮籀葬п 緒艇 啪歜 纔蝶お 陛棟
	
	//爾萄っ 轎溘
	boardpan(nob_card, dev_card1, dev_card2, dev_card3);

	// 啪歜 轎溘
	game(nob_card, dev_card1, dev_card2, dev_card3);
		

	system("pause");
	return 0;
}

void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[])
{
	int key; //殮溘嫡擎 酈蒂 盪濰ж朝 酈 盪濰 滲熱


	//檜楝и 曄衝戲煎 壽曖 啪歜 詭撮雖 轎溘
	printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n",current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
	printf("                                                            弛 錳ж朝 �做螃� 摹鷗п輿撮蹂.                                                                                           弛\n");
	printf("                                                            弛 爾戮 饜贖 陛螳螃晦  :   A                                                                                             弛\n");
	printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦  :   S                                                                                             弛\n");
	printf("                                                            弛 偃嫦 蘋萄 鎗ж晦    :   D                                                                                             弛\n");
	printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	while (1)
	{
		if (kbhit())
		{
			key = getch();

			//爾戮 饜贖 陛螳螃晦
			if (key == 97 || key == 65) // 酈爾萄 a酈 殮溘
			{
				M(DO); // �膩�擠 '紫' 轎溘

				get_jowel(nob_card, dev_card1, dev_card2, dev_card3); // 爾戮 饜贖 陛螳螃晦 л熱

				current_player++;
				if (current_player == 4) current_player = 0;// и夥襪 給嬴 棻衛 1廓 離滔橾 陽 current_player蒂 0戲煎 蟾晦��

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);
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
				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);

				//偃嫦 蘋萄 掘殮ж晦 л熱 嬪纂

				current_player++;
				if (current_player == 4) current_player = 0;// и夥襪 給嬴 棻衛 1廓 離滔橾 陽 current_player蒂 0戲煎 蟾晦��

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3); 
				printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
				printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1); // current_player縑 +1擊 п撿 ⑷營曖 player陛 援掘檣雖 釭褥
				printf("                                                            弛 錳ж朝 �做螃� 摹鷗п輿撮蹂.                                                                                           弛\n");
				printf("                                                            弛 爾戮 饜贖 陛螳螃晦  :   A                                                                                             弛\n");
				printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦  :   S                                                                                             弛\n");
				printf("                                                            弛 偃嫦 蘋萄 鎗ж晦    :   D                                                                                             弛\n");
				printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

				/* 轎溘 蕨衛
				printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
				printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
				printf("                                                            弛 偃嫦 蘋萄 掘殮ж晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
				printf("                                                            弛                                                                                                                       弛\n");
				printf("                                                            弛                                                                                                                       弛\n");
				printf("                                                            弛                                                                                                                       弛\n");
				printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
				*/

			}

			//偃嫦 蘋萄 鎗ж晦
			if (key == 100 || key == 68) // 酈爾萄 d酈 殮溘
			{
				M(MI); // �膩�擠 '嘐' 轎溘
				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);

				//偃嫦 蘋萄 鎗ж晦 л熱 嬪纂

				current_player++;
				if (current_player == 4) current_player = 0;// и夥襪 給嬴 棻衛 1廓 離滔橾 陽 current_player蒂 0戲煎 蟾晦��

				system("cls");
				boardpan(nob_card, dev_card1, dev_card2, dev_card3);
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

void get_jowel(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[]) //Ы溯檜橫 饜贖 翱骯 塽 瞪羹 饜贖 翱骯
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
	w = 0;b = 0;r = 0;gr = 0;pu = 0;w2 = 0;b2 = 0;r2 = 0;gr2 = 0;pu2 = 0;token = 0;

	system("cls");
	boardpan(nob_card, dev_card1, dev_card2, dev_card3);
	printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
	printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
	printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)                       弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            弛                                                                                                                       弛\n");
	printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

	while (1)
	{
		if (kbhit())
		{
			key = getch();

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
		boardpan(nob_card, dev_card1, dev_card2, dev_card3);
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
		if (kbhit())
		{
			key = getch();

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
		boardpan(nob_card, dev_card1, dev_card2, dev_card3);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
		printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)                       弛\n");
		printf("                                                            弛  ");
		// 儀縑 蜃醮 饜贖 轎溘
		if (b == 1 && b2 !=1)
			color(BLUE);
		if (r == 1&& r2 != 1)
			color(RED);
		if (gr == 1 && gr2 !=1)
			color(GREEN);
		if (pu == 1 && pu2 !=1)
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
			if (kbhit())
			{
				key = getch();

				if (key == 113 || key == 81) // 酈爾萄 q酈 殮溘
				{
					M(DO); // �膩�擠 '紫' 轎溘
					w += 1;
					if (w == 2) // ex)�� だ �� -> 檜楛衝戲煎 饜贖嫡朝棻堅 ц擊 衛 (偽擎剪 2廓)
					{
						w -= 1;
						system("cls");
						boardpan(nob_card, dev_card1, dev_card2, dev_card3);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(3000); // 3蟾 雖翱 �� _start煎 給嬴馬
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
						boardpan(nob_card, dev_card1, dev_card2, dev_card3);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(3000); // 3蟾 雖翱 �� _start煎 給嬴馬
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
						boardpan(nob_card, dev_card1, dev_card2, dev_card3);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(3000); // 3蟾 雖翱 �� _start煎 給嬴馬
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
						boardpan(nob_card, dev_card1, dev_card2, dev_card3);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(3000); // 3蟾 雖翱 �� _start煎 給嬴馬
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
						boardpan(nob_card, dev_card1, dev_card2, dev_card3);
						printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
						printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
						printf("                                                            弛 爾戮 饜贖 陛螳螃晦蒂 摹鷗ц蝗棲棻.                                                                                    弛\n");
						printf("                                                            弛 陛螳螢 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T)                                                     弛\n");
						printf("                                                            弛  ");
						printf("     ");
						printf("                                                                                                                弛\n");
						printf("                                                            弛 憮煎 棻艇 饜贖虜 陛螳螢 熱 氈蝗棲棻. 棻衛 殮溘п輿撮蹂.                                                               弛\n");
						printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
						Sleep(3000); // 3蟾 雖翱 �� _start煎 給嬴馬
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


	if ((w == 2 && (white-w)<2)||(b==2 && (blue -b)< -2) || (r==2 && (red - r) < 2) || (gr ==2 && (green - gr) < 2) || (pu==2 && (purple - pu) < 2) ) // 2偃 偽擎 儀 陛螳螢 陽 濤榆 睡褶 ル⑷
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 陛螳螞 饜贖 濤榆檜 4偃 嘐虜檜塭 2偃 翱樓戲煎 陛螳螢 熱 橈蝗棲棻.                                                      弛\n");
		printf("                                                            弛 棻衛 饜贖擊 殮溘ж撮蹂.                                                                                               弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(3000); // 3蟾 雖翱 �� _start煎 給嬴馬
		goto _start;
	}

	if (white-w < 0 || blue-b < 0 || red-r < 0 || green-gr < 0 || purple-pu < 0) // 饜贖曖 熱陛 睡褶й 陽
	{
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", 1);
		printf("                                                            弛 摹鷗и 饜贖檜 睡褶м棲棻.                                                                                             弛\n");
		printf("                                                            弛 棻衛 饜贖擊 殮溘ж撮蹂.                                                                                               弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(3000); // 3蟾 雖翱 �� _start煎 給嬴馬
		goto _start;
	}

	int total = w + b + r + gr + pu + player[current_player].white + player[current_player].blue + player[current_player].red + player[current_player].green + player[current_player].purple;

	while (total > 10)
	{
		int tr_w=0, tr_b=0, tr_r=0, tr_gr=0, tr_pu=0;//幗萵 饜贖 嫡擊 滲熱
		system("cls");
		boardpan(nob_card, dev_card1, dev_card2, dev_card3);
		printf("                                                            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                                                            弛 player%d曖 離滔殮棲棻.                                                                                                 弛\n", current_player + 1);
		printf("                                                            弛 �羃�:%d   だ塢儀:%d  說除儀:%d  蟾煙儀:%d  爾塭儀:%d                                                                       弛\n", w, b, r, gr, pu);
		printf("                                                            弛 Ы溯檜橫 饜贖檜 %d偃蒂 蟾婁ж艘蝗棲棻.                                                                                 弛\n", total - 10);
		printf("                                                            弛 陛螳螞 饜贖 醞 幗萵 饜贖擊 殮溘ж撮蹂.(�� : Q, だ : W, 說 : E, 蟾 : R, 爾 : T, �做� 摹鷗璽戲煎 剩橫陛晦 : Z)          弛\n");
		printf("                                                            弛                                                                                                                       弛\n");
		printf("                                                            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		while (1)
		{
			if (kbhit())
			{
				key = getch();

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
		w -= tr_w;b -= tr_b;r -= tr_r;gr -= tr_gr;pu -= tr_pu;
		total -= tr_w + tr_b + tr_r + tr_gr + tr_pu;
		tr_w = 0; tr_b = 0; tr_r = 0; tr_gr = 0; tr_pu = 0;
	}


	white -= w; blue -= b; red -= r; green -= gr; purple -= pu;//璽堅縑憮 陛螳螃朝虜躑 貍晦
	player[current_player].white += w; player[current_player].blue += b; player[current_player].red += r; player[current_player].green += gr; player[current_player].purple += pu;//陛螳螞 虜躑 Ы溯檜橫 饜贖縑 渦ж晦


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

void print_void(void) // 爾萄っ 綴蘊 轎溘
{
	printf("                                                            弛                                                                                                                       弛\n");
}

void boardpan(int nob_card[], int dev_card1[],  int dev_card2[], int dev_card3[])
{
	int a[5] = { 0, 1, 2, 3, 4 };
	int b[4] = { 0, 1, 2, 3 };
	int c[4] = { 0, 1, 2, 3 };
	int d[4] = { 0, 1, 2, 3 };
	int card_size[3] = { 36, 26, 16 };

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
		printf("薄熱 : %d                                                  ", player[0].score);
		color(WHITE);
		printf("弛");
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
		printf("薄熱 : %d                                                  ", player[0].score);
		printf("弛 ");
		GROUND_color(WHITE);
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
		printf(" 薄熱 : %d                                                  ", player[0].score);
		printf("弛");
		color(WHITE);
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

	//綴蘊
	print_void();

//敝褶 蘋萄 轎溘
	printf("                                                            弛                                                               ");
	color(LIGHT_RED);
	printf("--敝褶 蘋萄--");
	color(WHITE);
	printf("                                           弛\n");

	printf("                                                            弛                                        ");
	color(LIGHT_RED);
	printf("忙式式式式式式式式式忖 忙式式式式式式式式式忖 忙式式式式式式式式式忖 忙式式式式式式式式式忖 忙式式式式式式式式式忖                    ");
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

	//綴蘊
	print_void();

	//偃嫦 蘋萄 轎溘
	color(WHITE);
	printf("                                                            弛                                                           ");
	color(LIGHT_GREEN);
	printf("-- 1欽啗 偃嫦 蘋萄--");
	color(WHITE);
	printf("                                        弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	printf("忙式式式式式式式式式式式式忖       忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	printf("弛            弛       弛 ");
	color(WHITE);
	printf("%d", card1[dev_card1[b[0]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[dev_card1[b[0]]].value);
	color(LIGHT_GREEN);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card1[dev_card1[b[1]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[dev_card1[b[1]]].value);
	color(LIGHT_GREEN);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card1[dev_card1[b[2]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[dev_card1[b[2]]].value);
	color(LIGHT_GREEN);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card1[dev_card1[b[3]]].point);
	color(LIGHT_GREEN);
	printf("        ");
	print_jowel(card1[dev_card1[b[3]]].value);
	color(LIGHT_GREEN);
	printf("弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	printf("弛            弛       弛            弛 弛            弛 弛            弛 弛            弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	printf("弛  陴擎 蘋萄 弛       弛 ");
	color(WHITE);
	printf("≒ %d", card1[dev_card1[b[0]]].white);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card1[dev_card1[b[1]]].white);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card1[dev_card1[b[2]]].white);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card1[dev_card1[b[3]]].white);
	color(LIGHT_GREEN);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	printf("弛            弛       弛 ");
	color(BLUE);
	printf("≒ %d", card1[dev_card1[b[0]]].blue);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card1[dev_card1[b[1]]].blue);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card1[dev_card1[b[2]]].blue);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card1[dev_card1[b[3]]].blue);
	color(LIGHT_GREEN);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	if (card_size[0] >= 10)
		printf("弛     %d濰   弛       弛 ", card_size[0]);
	else
		printf("弛     %d濰    弛       弛 ", card_size[0]);
	color(RED);
	printf("≒ %d", card1[dev_card1[b[0]]].red);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card1[dev_card1[b[1]]].red);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card1[dev_card1[b[2]]].red);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card1[dev_card1[b[3]]].red);
	color(LIGHT_GREEN);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	printf("弛            弛       弛 ");
	color(GREEN);
	printf("≒ %d", card1[dev_card1[b[0]]].green);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card1[dev_card1[b[1]]].green);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card1[dev_card1[b[2]]].green);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card1[dev_card1[b[3]]].green);
	color(LIGHT_GREEN);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	printf("弛            弛       弛 ");
	color(PURPLE);
	printf("≒ %d", card1[dev_card1[b[0]]].purple);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card1[dev_card1[b[1]]].purple);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card1[dev_card1[b[2]]].purple);
	color(LIGHT_GREEN);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card1[dev_card1[b[3]]].purple);
	color(LIGHT_GREEN);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GREEN);
	printf("戌式式式式式式式式式式式式戎       戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 ");
	color(WHITE);
	printf("                   弛\n");


	
	color(WHITE);
	printf("                                                            弛                                                           ");
	color(LIGHT_GOLD);
	printf("-- 2欽啗 偃嫦 蘋萄--");
	color(WHITE);
	printf("                                        弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("忙式式式式式式式式式式式式忖       忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛 ");
	color(WHITE);
	printf("%d", card2[dev_card2[c[0]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[dev_card2[c[0]]].value);
	color(LIGHT_GOLD);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card2[dev_card2[c[1]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[dev_card2[c[1]]].value);
	color(LIGHT_GOLD);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card2[dev_card2[c[2]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[dev_card2[c[2]]].value);
	color(LIGHT_GOLD);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card2[dev_card2[c[3]]].point);
	color(LIGHT_GOLD);
	printf("        ");
	print_jowel(card2[dev_card2[c[3]]].value);
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
	printf("≒ %d", card2[dev_card2[c[0]]].white);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card2[dev_card2[c[1]]].white);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card2[dev_card2[c[2]]].white);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card2[dev_card2[c[3]]].white);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛 ");
	color(BLUE);
	printf("≒ %d", card2[dev_card2[c[0]]].blue);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card2[dev_card2[c[1]]].blue);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card2[dev_card2[c[2]]].blue);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card2[dev_card2[c[3]]].blue);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	if (card_size[0] >= 10)
		printf("弛     %d濰   弛       弛 ", card_size[1]);
	else
		printf("弛     %d濰    弛       弛 ", card_size[1]);
	color(RED);
	printf("≒ %d", card2[dev_card2[c[0]]].red);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card2[dev_card2[c[1]]].red);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card2[dev_card2[c[2]]].red);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card2[dev_card2[c[3]]].red);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛 ");
	color(GREEN);
	printf("≒ %d", card2[dev_card2[c[0]]].green);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card2[dev_card2[c[1]]].green);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card2[dev_card2[c[2]]].green);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card2[dev_card2[c[3]]].green);
	color(LIGHT_GOLD);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_GOLD);
	printf("弛            弛       弛 ");
	color(PURPLE);
	printf("≒ %d", card2[dev_card2[c[0]]].purple);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card2[dev_card2[c[1]]].purple);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card2[dev_card2[c[2]]].purple);
	color(LIGHT_GOLD);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card2[dev_card2[c[3]]].purple);
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
	printf("忙式式式式式式式式式式式式忖       忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 忙式式式式式式式式式式式式忖 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛 ");
	color(WHITE);
	printf("%d", card3[dev_card3[d[0]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[dev_card3[d[0]]].value);
	color(LIGHT_BLUE);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card3[dev_card3[d[1]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[dev_card3[d[1]]].value);
	color(LIGHT_BLUE);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card3[dev_card3[d[2]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[dev_card3[d[2]]].value);
	color(LIGHT_BLUE);
	printf("弛 弛 ");
	color(WHITE);
	printf("%d", card3[dev_card3[d[3]]].point);
	color(LIGHT_BLUE);
	printf("        ");
	print_jowel(card3[dev_card3[d[3]]].value);
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
	printf("≒ %d", card3[dev_card3[d[0]]].white);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card3[dev_card3[d[1]]].white);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card3[dev_card3[d[2]]].white);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(WHITE);
	printf("≒ %d", card3[dev_card3[d[3]]].white);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛 ");
	color(BLUE);
	printf("≒ %d", card3[dev_card3[d[0]]].blue);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card3[dev_card3[d[1]]].blue);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card3[dev_card3[d[2]]].blue);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(BLUE);
	printf("≒ %d", card3[dev_card3[d[3]]].blue);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	if (card_size[0] >= 10)
		printf("弛     %d濰   弛       弛 ", card_size[2]);
	else
		printf("弛     %d濰    弛       弛 ", card_size[2]);
	color(RED);
	printf("≒ %d", card3[dev_card3[d[0]]].red);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card3[dev_card3[d[1]]].red);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card3[dev_card3[d[2]]].red);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(RED);
	printf("≒ %d", card3[dev_card3[d[3]]].red);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛 ");
	color(GREEN);
	printf("≒ %d", card3[dev_card3[d[0]]].green);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card3[dev_card3[d[1]]].green);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card3[dev_card3[d[2]]].green);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(GREEN);
	printf("≒ %d", card3[dev_card3[d[3]]].green);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("弛            弛       弛 ");
	color(PURPLE);
	printf("≒ %d", card3[dev_card3[d[0]]].purple);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card3[dev_card3[d[1]]].purple);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card3[dev_card3[d[2]]].purple);
	color(LIGHT_BLUE);
	printf("       弛 弛 ");
	color(PURPLE);
	printf("≒ %d", card3[dev_card3[d[3]]].purple);
	color(LIGHT_BLUE);
	printf("       弛 ");
	color(WHITE);
	printf("                   弛\n");

	printf("                                                            弛                   ");
	color(LIGHT_BLUE);
	printf("戌式式式式式式式式式式式式戎       戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 戌式式式式式式式式式式式式戎 ");
	color(WHITE);
	printf("                   弛\n");


	//綴蘊
	print_void();

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

	//綴蘊
	print_void();

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
		printf("薄熱 : %d                                                  ", player[2].score);
		color(WHITE);
		printf("弛");
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
		printf("薄熱 : %d                                                  ", player[2].score);
		printf("弛 ");
		GROUND_color(WHITE);
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
		printf(" 薄熱 : %d                                                  ", player[2].score);
		printf("弛");
		color(WHITE);
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

	if (!strcmp(jowel, "blue"))
	{
		color(BLUE);
		printf("﹥");
	}

	if (!strcmp(jowel, "red"))
	{
		color(RED);
		printf("﹥");
	}

	if (!strcmp(jowel, "green"))
	{
		color(GREEN);
		printf("﹥");
	}

	if (!strcmp(jowel, "purple"))
	{
		color(PURPLE);
		printf("﹥");
	}
}