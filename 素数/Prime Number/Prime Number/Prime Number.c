#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//ʵ��һ���������ж�һ�����ǲ��������� 
//����������1�����Ƿ���0
int IsPrimeNumber(int n) {
	for (int i = 2; i <= sqrt(n);++i) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() { 
	int a;
	printf("������һ������");
	scanf("%d", &a);
	if (IsPrimeNumber(a) == 1) {
		printf("%d is a prime number",a);
	}	else {
		printf("%d is not a prime number", a);
	}

	return 0;
}