#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a = 10;
	int b = 3;
	a = a + b;//a���������Ϊ13
	b = a - b;//b���������Ϊ10
	a = a - b;//a���������Ϊ3
	printf("%d/n", a);
	printf("%d/n", b);
	return 0;
}