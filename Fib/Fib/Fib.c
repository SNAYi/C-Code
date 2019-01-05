#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//递归实现求第n个斐波那契数。 
//int Fib(int n) {
//	//n == 1 || n == 2 时，斐波那契数都为1。作为递归出口
//	if (n <= 2) {	
//		return 1;
//	}	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//非递归实现求第n个斐波那契数。
int Fib(int n) {
	int a = 1;
	int b = 1;
	int res = 0;
	if (n <= 2) {
		return 1;
	}
	else{
		for (int i = 3; i <= n; ++i) {
			res = a + b;
			a = b;
			b = res;
		}
		return res;
	}

}
int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d", Fib(num));

	return 0;
}