#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�ݹ�ʵ����n�Ľ׳� 
int r_Factorial(int n) {
	if (n <= 1) {
		return 1;
	}	else {
		return  n*r_Factorial(n - 1);
	}
}
//�ǵݹ�ʵ����n�Ľ׳�
int Factorial(int n) {
	int ret = 1;
	for (int i = 2; i <= n;++i) {
		ret = ret * i;
	}
	return ret;
}

int main() {
	int  n = 0;
	scanf("%d",&n);
	//�ݹ�ʵ��
	printf("%d\n", Factorial(n));
	//�ǵݹ�ʵ��
	printf("%d\n", r_Factorial(n));
	return 0;
}