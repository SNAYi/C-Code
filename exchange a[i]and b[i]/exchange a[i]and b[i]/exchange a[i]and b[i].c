#include<stdio.h>

//定义两个整型变量，两个整形数组，i用来确定循环次数，t用来做中间变量，
//完成两个数组间内容的一一交换

int main() {
	int i,t;
	int a[5] = { 0, 1, 2, 3, 4 };
	int b[5] = { 5, 6, 7, 8, 9 };//初始化两个数组
	for (i = 0; i < 5; i++) {   //通过t依次交换a[i]和b[i]的值
		t = a[i];
		a[i] = b[i];
		b[i] = t;
}
	for (i = 0; i < 5; i++) 
		printf("%d\t", a[i]);  //依次输出a[5]里面的数
	printf("\n");
	for (i = 0; i < 5; i++)    //依次输出b[5]里面的数
		printf("%d\t", b[i]);

	return 0;
}