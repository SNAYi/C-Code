#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c, t;
	printf("��������������:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b) {//���a��bֵ�Ľ���,a��������ֵ
		t = a;
		a = b;
		b = t;
	}
	if (a < c) {//���a��cֵ�Ľ���,a��������ֵ

		t = a;
		a = c;
		c = t;
	}
	if (b < c) {//���b��cֵ�Ľ���,a��������ֵ
		t = b;
		b = c;
		c = t;
	}
	printf("%d\t%d\t%d\n",a,b,c);
	
		 return 0;
}
