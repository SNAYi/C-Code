#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#
#include<time.h>

//1.定义并初始化一个字符型的棋盘，尺寸为3*3，设定玩家落子为 "x",电脑落子为"o"
//2.玩家落子。提示玩家落子
//4.判断游戏是否结束
//	a)玩家胜利			
//	b)电脑胜利
//	c)和棋
//	d)游戏没有结束
//3.电脑落子
//4.判断游戏是否结束
//	a)玩家胜利
//	b)电脑胜利
//	c)和棋
//	d)游戏没有结束

#define ROW 3
#define COL 3 

char g_board[ROW][COL];
//初始化棋盘
void Init() {
	//把二维数组中的每个数都初始化为' '
	int row = 0;
	int col = 0;
	for (row = 0; row < ROW; ++row) {
		for (col = 0; col < COL; ++col) {
			g_board[row][col] = ' ';
		}
	}
}
//打印棋盘
void Print() {
	for (int row = 0; row < ROW; ++row) {
		printf("| %c | %c | %c |\n",g_board[row][0],
			g_board[row][1],g_board[row][2]);
		if (row != ROW-1) {
			printf("|---|---|---|\n");
		}
	}
}
//玩家落子
void PlayerMove() {
	//首先提示玩家落子,并取得玩家所落位置
	int row = 0;
	int col = 0;
	Print();
	printf("玩家落子!\n");
	while(1) {
		printf("请输入一组坐标(row,col):");
		scanf("%d %d",&row,&col);
		//然后检查玩家落子的位置是否合法
		//(分两种情况：a)输入坐标不在范围内
		//			   b)输入位置已经被落子过了)
		if (row < 0 || row >= ROW || col < 0 || col >= COL) {
			printf("输入非法！请重新输入!\n");
			continue;
		}
		if (g_board[row][col]!=' ') {
			//表示当前位置已有子
			printf("输入非法！请重新输入!\n");
			continue;
		}
		//如果落子位置合法则在该位置上放'x'
		g_board[row][col] = 'x';
		//Print();
		break;
	}
}

//电脑落子
void ComputerMove() {
	//电脑采用随机种子随便落子,这是需要在主函数刚启动时设置一次随机种子
	printf("电脑落子！\n");
	while(1){
		int row = rand() % ROW;
		int col = rand() % COL;
		//判断电脑落子位置是否已经有子
		if (g_board[row][col] != ' ') {
			continue;
		}
		g_board[row][col] = 'o';
		break;
	}
}

//判定棋盘是否满了，若满了，返回1；若没满，返回0。
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

//设定玩家胜利返回'x'
//设定电脑胜利返回'o'
//设定和棋返回'h'
//设定游戏没有结束返回' '
char CheckWinner() {	//返回当前棋盘的胜负情况
	//检查每一行
	for (int row = 0; row < ROW; ++row) {
		if (g_board[row][0] == g_board[row][1] &&
			g_board[row][0] == g_board[row][2] && g_board[row][0] != ' ') {
			return g_board[row][0];
		}
	}
	//检查每一列
	for (int col = 0; col < COL;++col) {
		if (g_board[0][col] == g_board[1][col] &&
			g_board[0][col] == g_board[2][col] && g_board[0][col] != ' ') {
			return g_board[0][col];
		}
	}
	//检查线对角
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
	Init();	//初始化棋盘
	//Print();	//打印棋盘
	char winner = '\0';	//初始化胜者为0
	while(1) {
		PlayerMove();	//玩家落子
		winner=CheckWinner();
		if (winner != ' ') {	//结束则跳出
			break;
		}
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' ') {	//结束则跳出
			break;
		}
		system("cls");
	}
	Print();
	if (winner == 'x') {
		printf("你胜利了!\n");
	}
	else if (winner == 'o') {
		printf("电脑胜利！\n");
	}
	else if (winner == 'h') {
		printf("和棋！你和电脑打平!\n");
	}
	system("pause");
	return 0;
}