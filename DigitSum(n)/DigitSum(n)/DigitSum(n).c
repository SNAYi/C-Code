#include<stdio.h>
#include<stdlib.h>

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
int DigitSum(int n) {
	int sum = 0;
	//只要这个整数不为0，递归就一直进行，设置n = 0为出口
	if (n != 0) {
		sum = (n % 10) + DigitSum(n / 10);
	}
	return sum;
}

int main() {
	printf("%d", DigitSum(1729));

	return 0;
}