전역변수 : int white, blue, red, green, brown, gold, current_player;
구조체 : struct Develop_1, 2, 3, Nob, Player;

int main(void)

{

지역변수 : int nob_card[10], i, temp, x, y, dev_card1[40], dev_card2[30], dev_card3[20], who;

nob_card[10], dev_card1[40], dev_card2[30], dev_card3[20]에 중복없는 난수값 부여(0~배열의크기)

current_player = 0;

while(1)
{

system("cls");

보드판 출력 함수 void boardpan(nob_card, dev_card1, dev_card2, dev_card3);

게임 함수 void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[]);

if( player'who'가 15점을 넘었다면) break;

current_player += 1; // current_player가 3을 넘으면 그 다음에는 0이 되도록

}

printf("player%d의 승리", current+1");

}

보드판 출력 함수 void boardpan(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[]);

// 아직 미구현인 사항 : 한 플레이어가 개발카드를 가져갔을 때 다른 개발 카드로 바꾸기, 남은 개발카드가 없을 때

빈칸 출력 함수 void print_void(void);

글씨색 바꾸기 함수 void color(int color);

배경색이 groudn인 글씨색 바꾸기 함수void GROUND_color(int color);

보석 출력 함수 void print_jowel(char jowel[]);

//위의 함수 5개 다 출력하는데 사용




/* 미완성 함수들

게임 함수 void game(int nob_card[], int dev_card1[], int dev_card2[], int dev_card3[])

{

// 보석 토큰 가져오기, 개발 카드 구입하기, 개발 카드 찜하기 3개의 선택지 중 하나를 골라 실행하도록 설정 ( 보석 토큰 가져오기 : A, 개발 카드 구입하기 : S, 개발 카드 찜하기 : D )

}

보석 토큰 가져오기 함수

{

}

개발 카드 구입하기 함수

{

}

개발 카드 찜하기 함수

{

}
*/

// 인트로?
