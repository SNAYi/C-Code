#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int maxline;//*������һ��
	printf("����������Ҫ��������");
	scanf("%d",&maxline);
	//������
	for (int i = 1; i <= maxline; ++i) {	
		//��ӡ' '
		int j;
		for (j = 1; j <= maxline - i; ++j) {
			printf(" ");
		}
		//��ӡ'*'
		for (j = 1; j <= (2 * i - 1); ++j) {
			printf("*");
		}
		printf("\n");
	}
	//������
	for (int i = 1; i <= maxline;++i) {
		//��ӡ�ո�
		int j;
		for (j = 1; j <= i; ++j) {
			printf(" ");
		}
		//��ӡ'*'
		for (j = 1; j <= 2 * (maxline - i)-1; ++j) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
