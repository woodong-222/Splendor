#include <stdio.h>

typedef struct{
   int point;
   const char value[10];
   int white;
   int blue;
   int red;
   int green;
   int brown;
}Develop_1;

typedef struct{
   int point;
   const char value[10];
   int white;
   int blue;
   int red;
   int green;
   int brown;
}Develop_2;

typedef struct{
   int point;
   const char value[10];
   int white;
   int blue;
   int red;
   int green;
   int brown;
}Develop_3;

typedef struct{
   int white;
   int blue;
   int red;
   int green;
   int brown;
}Nob;

typedef struct{
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



int main(void)
{
   Develop_1 card1[40] = { {1,"brown",0,4,0,0,0}, {1,"red",4,0,0,0,0}, {1,"blue",0,0,4,0,0}, {1,"green",0,0,0,0,4}, {1,"white",0,0,0,4,0}, {0,"blue",1,0,1,1,1}, {0,"blue",1,0,2,2,0}, {0,"blue",0,1,1,3,0}, {0,"blue",1,0,2,1,1}, {0,"blue",0,0,0,0,3}, {0,"blue",0,0,0,2,2}, {0,"blue",1,0,0,0,2}, {0,"green",0,0,3,0,0}, {0,"green",0,2,2,0,0}, {0,"green",0,1,2,0,2}, {0,"green",1,1,1,0,1}, {0,"green",1,1,1,0,2}, {0,"green",2,1,0,0,0}, {0,"green",1,3,0,1,0}, {0,"brown",0,0,1,2,0}, {0,"brown",2,2,1,0,0}, {0,"brown",1,1,1,1,0}, {0,"brown",0,0,0,3,0}, {0,"brown",0,0,3,1,1}, {0,"brown",1,2,1,1,0}, {0,"brown",2,0,0,2,0}, {0,"red",2,1,0,1,1}, {0,"red",2,0,2,0,0}, {0,"red",1,1,0,1,1}, {0,"red",0,2,0,1,0}, {0,"red",3,0,0,0,0}, {0,"red",2,0,0,1,2}, {0,"red",1,0,1,0,3}, {0,"white",0,2,0,0,2}, {0,"white",0,1,1,2,1}, {0,"white",0,1,1,1,1}, {0,"white",0,3,0,0,0}, {0,"white",0,0,2,0,1}, {0,"white",0,2,0,2,1}, {0,"white",3,1,0,0,1} };
   Develop_2 card2[30] = { { 2,"brown",5,0,0,0,0}, {2,"blue",5,3,0,0,0}, {1,"green",2,3,0,0,2}, {2,"white",0,0,4,1,2}, {1,"green",4,2,0,0,1}, {3,"white",6,0,0,0,0}, {2,"white",0,0,5,0,0}, {1,"green",3,0,3,2,0}, {2,"blue",2,0,1,0,4}, {1,"white",0,0,2,3,2}, {1,"red",0,3,2,0,3}, {3,"blue",0,6,0,0,0}, {1,"brown",3,2,0,2,0}, {1,"blue",0,2,0,3,3},{1,"red",2,0,2,0,3}, {2,"brown",0,0,3,5,0}, {2,"green",0,0,0,5,0}, {2,"green",0,5,0,3,0}, {1,"brown",3,0,0,3,2}, {2,"blue",0,5,0,0,0}, {2,"red",0,0,0,0,5}, {1,"blue",0,2,3,2,0}, {2,"red",1,4,0,2,0}, {3,"red",0,0,6,0,0}, {1,"white",2,3,3,0,0}, {3,"green",0,0,0,6,0}, {2,"white",0,0,5,0,3}, {3,"brown",0,0,0,0,6}, {2,"brown",0,1,2,4,0}, {2,"red",3,0,0,0,5} };
   Develop_3 card3[20] = { { 4,"blue",7,0,0,0,0 }, { 4,"green",3,6,0,3,0} , {4,"red",0,0,0,7,0}, {3, "brown",3,3,3,5,0}, {4, "white",3,0,3,0,6}, {3, "green", 5,3,3,0,3}, {4,"brown",0,0,7,0,0},{3,"blue",3,0,3,3,5}, {5,"brown",0,0,7,0,3},{3,"white",0,3,5,3,3},{4,"red",0,3,3,6,0},{5,"red",0,0,3,7,0},{5,"blue",7,3,0,0,0},{4,"white",0,0,6,3,3},{5,"green",0,7,0,3,0}, {4, "brown",0,0,6,3,3}, {4,"green",0,7,0,0,0},{4,"blue",6,3,0,0,3}, {5,"white",3,0,0,0,7}, {3,"red",3,5,0,3,3} };
   Nob nob[10] = { {4,4,0,0,0}, {0,0,4,0,4}, {0,0,4,4,0}, {4,0,3,0,3}, {3,3,0,0,3}, {0,4,0,4,0}, {3,3,0,3,0}, {0,3,3,3,0}, {0,0,3,3,3}, {4,0,0,0,4} };
   Player player[4] = { 0 };

   return 0;
}