#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//ʹ�ú���ʵ���������Ľ���

int Exchange(int* x, int* y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int main() {
	int a = 0;
	int b = 0;
	printf("����������Ҫ��������������:");
	scanf("%d %d",&a,&b);
	Exchange(&a,&b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	return 0;
}