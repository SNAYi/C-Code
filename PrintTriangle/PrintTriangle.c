#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//��ӡ�������
int main() {
	int n = 0;
	int arr[100][100];
	scanf("%d",&n);
	//��ֵ��β,�ӵ�0�п�ʼ
	for (int i = 0; i <= n; ++i) {
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	//��ֵ�м��arr[2][1]
	for (int i = 2; i <= n; ++i) {
		for (int j = 1; j < i;++j) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	//���д�ӡ
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= i; ++j) {
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}