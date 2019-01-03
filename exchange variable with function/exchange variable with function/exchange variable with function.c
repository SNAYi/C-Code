#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//使用函数实现两个数的交换

int Exchange(int* x, int* y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int main() {
	int a = 0;
	int b = 0;
	printf("请输入你想要交换的两个变量:");
	scanf("%d %d",&a,&b);
	Exchange(&a,&b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	return 0;
}