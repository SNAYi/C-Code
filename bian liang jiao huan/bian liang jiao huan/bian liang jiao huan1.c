//题目要求：编写代码将两个整型变量里面的内容交换
#include<stdio.h>

int main(void) {
	int a = 1, b = 3, t; //创建一个临时变量t，
	t = a;               //先将变量a里面的1赋给变量t,变量t里面的内容变成1
	a = b;               //然后再将变量b里面的3赋给变量a,变量a里面的内容变成3
	b = t;               //最后将变量t里面的1赋给变量b,变量b里面的内容变成1
	printf("a=%d\n",a);  //打印a,b 的值
	printf("b=%d\n", b);

return 0;
}