#include<stdio.h>

int main() {//因为要计算的是浮点数，为了避免出错，统一将变量定义为double型
	double i = 1, t = 1;//i作分母，一直自增1，直到100，t作分子，只改变正负号。
	double a = 1, sum = 0;
	
	for (i = 1; i < 100; ) {//循环到100次停止
		sum = sum + a;     
		t = -t;
		++i;
		a = t / i;
}
	printf("sum=%f\n", sum);

    return 0;
}