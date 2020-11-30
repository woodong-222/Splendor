#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int mine[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int com[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int win = 0, lose = 0, mycard, comcard;
	srand((unsigned int)time(NULL)); // 난수 설정
	comcard = rand() % 10; // 컴퓨터의 카드 숫자 난수 설정 0~9
	

	for (int o = 0; o < 10; o++) // 카드 게임이 총 10번 진행되므로 10번 반복
	{
		while (com[comcard] == 10) // 밑에서 이 카드가 사용되었으면 그 카드의 숫자를 10으로 바꾸었기 때문에 난수로 설정한 컴퓨터의 카드 숫자가 10이면 다시 난수 설정
		{
			comcard = rand() % 10;
		}
		
		printf("내게 남은 카드 : ");
		for (int i = 0; i <= 9; i++) //for문을 활용하여 남은 카드 출력
		{
			if (mine[i] != 10)
			{
				printf("%d ", mine[i]);
			}
		}
		
		while(1) // 제출한 카드가 0~9가 아니면 없는 카드입니다 라고 표시 후 다시 카드 제출
		{
		printf("\n낼 카드 : ");
		scanf_s("%d", &mycard);
		if (mine[mycard] >=0 && mine[mycard] <= 9)
			break;
		printf("없는 카드입니다.");
		}

		if (mine[mycard] > com[comcard]) // 플레이어가 이기면 win 변수에 1추가 반대일 경우 lose 변수에 1추가
			win++;
		else if (com[comcard] > mine[mycard])
			lose++;

		printf("현재 점수 = 나 : %d 컴퓨터 : %d\n", win, lose);
		mine[mycard] = 10; // 사용한 카드는 10으로 바꿈
		com[comcard] = 10; // 위와 동일

	}

	system("pause");
	return 0;
}