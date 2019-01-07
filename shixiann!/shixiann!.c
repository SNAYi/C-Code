#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//递归实现求n的阶乘 
int r_Factorial(int n) {
	if (n <= 1) {
		return 1;
	}	else {
		return  n*r_Factorial(n - 1);
	}
}
//非递归实现求n的阶乘
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
	//递归实现
	printf("%d\n", Factorial(n));
	//非递归实现
	printf("%d\n", r_Factorial(n));
	return 0;
}