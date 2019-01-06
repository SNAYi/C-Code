#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a = 10;
	int b = 3;
	a = a + b;//a里面的内容为13
	b = a - b;//b里面的内容为10
	a = a - b;//a里面的内容为3
	printf("%d/n", a);
	printf("%d/n", b);
	return 0;
}