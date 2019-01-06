//题目要求：编写代码将两个整型变量里面的内容交换,不允许创建临时变量
#include<stdio.h>

int main(void) {
	int a = 10;
	int	b = 3;
	a = a + b;         //变量a里面的内容变成13
	b = a - b;         //变量b里面的内容变成10
	a = a - b;         //变量a里面的内容变成3
	printf("a=%d\n", a);  //打印a,b 的值
	printf("b=%d\n", b);

	return 0;
}