#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�ݹ�ʵ�����n��쳲��������� 
//int Fib(int n) {
//	//n == 1 || n == 2 ʱ��쳲���������Ϊ1����Ϊ�ݹ����
//	if (n <= 2) {	
//		return 1;
//	}	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//�ǵݹ�ʵ�����n��쳲���������
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