#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int mine[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int com[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int win = 0, lose = 0, mycard, comcard;
	srand((unsigned int)time(NULL)); // ���� ����
	comcard = rand() % 10; // ��ǻ���� ī�� ���� ���� ���� 0~9
	

	for (int o = 0; o < 10; o++) // ī�� ������ �� 10�� ����ǹǷ� 10�� �ݺ�
	{
		while (com[comcard] == 10) // �ؿ��� �� ī�尡 ���Ǿ����� �� ī���� ���ڸ� 10���� �ٲپ��� ������ ������ ������ ��ǻ���� ī�� ���ڰ� 10�̸� �ٽ� ���� ����
		{
			comcard = rand() % 10;
		}
		
		printf("���� ���� ī�� : ");
		for (int i = 0; i <= 9; i++) //for���� Ȱ���Ͽ� ���� ī�� ���
		{
			if (mine[i] != 10)
			{
				printf("%d ", mine[i]);
			}
		}
		
		while(1) // ������ ī�尡 0~9�� �ƴϸ� ���� ī���Դϴ� ��� ǥ�� �� �ٽ� ī�� ����
		{
		printf("\n�� ī�� : ");
		scanf_s("%d", &mycard);
		if (mine[mycard] >=0 && mine[mycard] <= 9)
			break;
		printf("���� ī���Դϴ�.");
		}

		if (mine[mycard] > com[comcard]) // �÷��̾ �̱�� win ������ 1�߰� �ݴ��� ��� lose ������ 1�߰�
			win++;
		else if (com[comcard] > mine[mycard])
			lose++;

		printf("���� ���� = �� : %d ��ǻ�� : %d\n", win, lose);
		mine[mycard] = 10; // ����� ī��� 10���� �ٲ�
		com[comcard] = 10; // ���� ����

	}

	system("pause");
	return 0;
}