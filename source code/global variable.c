#include <stdio.h>
#include "Header.h"

int white = 7; // ��ū â�� �ִ� �Ͼ�� ��ū
int blue = 7; // ��ū â�� �ִ� �Ķ��� ��ū
int red = 7; // ��ū â�� �ִ� ������ ��ū
int green = 7; // ��ū â�� �ִ� �ʷϻ� ��ū
int purple = 7; // ��ū â�� �ִ� ����� ��ū
int gold = 5; // ��ū â�� �ִ� Ȳ�ݻ� �� ��ū
int current_player = 0; // ���� �÷��̾ ��Ÿ���� ���� ( �� �������� 0�̸� player1 , 1�̸� player2, .... -> player (current_player + 1) )
int drawn_cards[3] = { 0 }; // �ܰ躰�� ���� ī�� ���� �����ϴ� ����