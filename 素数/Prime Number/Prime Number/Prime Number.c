#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//实现一个函数，判断一个数是不是素数。 
//是素数返回1，不是返回0
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
	printf("请输入一个数：");
	scanf("%d", &a);
	if (IsPrimeNumber(a) == 1) {
		printf("%d is a prime number",a);
	}	else {
		printf("%d is not a prime number", a);
	}

	return 0;
}