#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#define m 3
#define n 999

int main() {
	int i = 0;
	printf("These are  Narcissistic numbers:\n");
	//遍历
	for (i = 0; i <= n; ++i) {
		//求一个数是否是水仙花数
		int sum = 0;
		int temp = i;
		while (temp != 0) {
			sum = sum + pow(temp % 10, m);
			temp = temp / 10;
		}
		if (i == sum && sum != 0 && sum != 1) {
			printf("%d\n ", i);
		}
	}

	return 0;
}


