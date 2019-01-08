#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//打印杨辉三角
int main() {
	int n = 0;
	int arr[100][100];
	scanf("%d",&n);
	//赋值首尾,从第0行开始
	for (int i = 0; i <= n; ++i) {
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	//赋值中间从arr[2][1]
	for (int i = 2; i <= n; ++i) {
		for (int j = 1; j < i;++j) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	//逐行打印
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= i; ++j) {
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
