#include<stdio.h>
#include<stdlib.h>

//编写一个函数实现n^k，使用递归实现
//n^k = n* n^(k-1)
int Func(int n,int k) {
	//当指数k为0时，n不管为什么结果都是1，以此作为递归出口
	if (k == 0) { 
		return 1;
	}	else {
		return n*Func(n,k-1);
	}
}
int main() {
	printf("%d\n", Func(2, 3));
	return 0;
}