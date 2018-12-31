#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i = 0;
	int n;
	printf("请输入你想判断的自幂数的范围最大值：");
	scanf("%d", &n);
	printf("These are  self numbers:\n");
	//遍历
	for (i = 100; i <= n; ++i) {
		int length = 0;
		int temp = i;
		//求一个数的长度来确定幂次
		while (temp != 0) {
			++length;
			temp = temp / 10;
		}
		//判断一个数是否是自幂数
		int sum = 0;
		temp = i;	//需要对temp进行重新赋值，temp经过上面的循环已经为0
		while (temp != 0) {
			sum = sum + pow(temp % 10, length);
			temp = temp / 10;
		}
		if (i == sum) {
			printf("%d\n ", i);
		}
	}

	return 0;
}