#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int maxline;//*最多的那一行
	printf("请输入你想要的行数：");
	scanf("%d",&maxline);
	//正三角
	for (int i = 1; i <= maxline; ++i) {	
		//打印' '
		int j;
		for (j = 1; j <= maxline - i; ++j) {
			printf(" ");
		}
		//打印'*'
		for (j = 1; j <= (2 * i - 1); ++j) {
			printf("*");
		}
		printf("\n");
	}
	//倒三角
	for (int i = 1; i <= maxline;++i) {
		//打印空格
		int j;
		for (j = 1; j <= i; ++j) {
			printf(" ");
		}
		//打印'*'
		for (j = 1; j <= 2 * (maxline - i)-1; ++j) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
