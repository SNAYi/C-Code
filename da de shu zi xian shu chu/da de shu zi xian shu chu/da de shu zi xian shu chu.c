#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c, t;
	printf("请输入三个整数:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b) {//完成a和b值的交换,a里面放最大值
		t = a;
		a = b;
		b = t;
	}
	if (a < c) {//完成a和c值的交换,a里面放最大值

		t = a;
		a = c;
		c = t;
	}
	if (b < c) {//完成b和c值的交换,a里面放最大值
		t = b;
		b = c;
		c = t;
	}
	printf("%d\t%d\t%d\n",a,b,c);
	
		 return 0;
}
