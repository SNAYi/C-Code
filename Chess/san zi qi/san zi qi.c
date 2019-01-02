#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#
#include<time.h>

//1.���岢��ʼ��һ���ַ��͵����̣��ߴ�Ϊ3*3���趨�������Ϊ "x",��������Ϊ"o"
//2.������ӡ���ʾ�������
//4.�ж���Ϸ�Ƿ����
//	a)���ʤ��			
//	b)����ʤ��
//	c)����
//	d)��Ϸû�н���
//3.��������
//4.�ж���Ϸ�Ƿ����
//	a)���ʤ��
//	b)����ʤ��
//	c)����
//	d)��Ϸû�н���

#define ROW 3
#define COL 3 

char g_board[ROW][COL];
//��ʼ������
void Init() {
	//�Ѷ�ά�����е�ÿ��������ʼ��Ϊ' '
	int row = 0;
	int col = 0;
	for (row = 0; row < ROW; ++row) {
		for (col = 0; col < COL; ++col) {
			g_board[row][col] = ' ';
		}
	}
}
//��ӡ����
void Print() {
	for (int row = 0; row < ROW; ++row) {
		printf("| %c | %c | %c |\n",g_board[row][0],
			g_board[row][1],g_board[row][2]);
		if (row != ROW-1) {
			printf("|---|---|---|\n");
		}
	}
}
//�������
void PlayerMove() {
	//������ʾ�������,��ȡ���������λ��
	int row = 0;
	int col = 0;
	Print();
	printf("�������!\n");
	while(1) {
		printf("������һ������(row,col):");
		scanf("%d %d",&row,&col);
		//Ȼ����������ӵ�λ���Ƿ�Ϸ�
		//(�����������a)�������겻�ڷ�Χ��
		//			   b)����λ���Ѿ������ӹ���)
		if (row < 0 || row >= ROW || col < 0 || col >= COL) {
			printf("����Ƿ�������������!\n");
			continue;
		}
		if (g_board[row][col]!=' ') {
			//��ʾ��ǰλ��������
			printf("����Ƿ�������������!\n");
			continue;
		}
		//�������λ�úϷ����ڸ�λ���Ϸ�'x'
		g_board[row][col] = 'x';
		//Print();
		break;
	}
}

//��������
void ComputerMove() {
	//���Բ�����������������,������Ҫ��������������ʱ����һ���������
	printf("�������ӣ�\n");
	while(1){
		int row = rand() % ROW;
		int col = rand() % COL;
		//�жϵ�������λ���Ƿ��Ѿ�����
		if (g_board[row][col] != ' ') {
			continue;
		}
		g_board[row][col] = 'o';
		break;
	}
}

//�ж������Ƿ����ˣ������ˣ�����1����û��������0��
int IsFull() {
	for (int row = 0; row < ROW; ++row) {
		for (int col = 0; col < COL; ++col) {
			if (g_board[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

//�趨���ʤ������'x'
//�趨����ʤ������'o'
//�趨���巵��'h'
//�趨��Ϸû�н�������' '
char CheckWinner() {	//���ص�ǰ���̵�ʤ�����
	//���ÿһ��
	for (int row = 0; row < ROW; ++row) {
		if (g_board[row][0] == g_board[row][1] &&
			g_board[row][0] == g_board[row][2] && g_board[row][0] != ' ') {
			return g_board[row][0];
		}
	}
	//���ÿһ��
	for (int col = 0; col < COL;++col) {
		if (g_board[0][col] == g_board[1][col] &&
			g_board[0][col] == g_board[2][col] && g_board[0][col] != ' ') {
			return g_board[0][col];
		}
	}
	//����߶Խ�
	if (g_board[0][0] == g_board[1][1] &&
		g_board[0][0] == g_board[2][2] && g_board[0][0] != ' ') {
		return g_board[0][0];
	}
	if (g_board[2][0] == g_board[1][1] &&
		g_board[2][0] == g_board[0][2] && g_board[2][0] != ' ') {
		return g_board[2][0];
	}
	if (IsFull()) {
		return 'h';
	}
	else {
		return ' ';
	}

}

int main() {
	srand((unsigned int)time(0));
	Init();	//��ʼ������
	//Print();	//��ӡ����
	char winner = '\0';	//��ʼ��ʤ��Ϊ0
	while(1) {
		PlayerMove();	//�������
		winner=CheckWinner();
		if (winner != ' ') {	//����������
			break;
		}
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' ') {	//����������
			break;
		}
		system("cls");
	}
	Print();
	if (winner == 'x') {
		printf("��ʤ����!\n");
	}
	else if (winner == 'o') {
		printf("����ʤ����\n");
	}
	else if (winner == 'h') {
		printf("���壡��͵��Դ�ƽ!\n");
	}
	system("pause");
	return 0;
}