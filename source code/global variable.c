#include <stdio.h>
#include "Header.h"

int white = 7; // 토큰 창고에 있는 하얀색 토큰
int blue = 7; // 토큰 창고에 있는 파란색 토큰
int red = 7; // 토큰 창고에 있는 빨간색 토큰
int green = 7; // 토큰 창고에 있는 초록색 토큰
int purple = 7; // 토큰 창고에 있는 보라색 토큰
int gold = 5; // 토큰 창고에 있는 황금색 찜 토큰
int current_player = 0; // 현재 플레이어를 나타내는 변수 ( 이 변수값이 0이면 player1 , 1이면 player2, .... -> player (current_player + 1) )
int drawn_cards[3] = { 0 }; // 단계별로 뽑은 카드 수를 저장하는 변수