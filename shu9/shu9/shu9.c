#include<stdio.h>
int main(void) {
	int k, times = 0;
	for (int i = 1; i < 101; i++) {//将循环次数限定在[1,100]
		k = i;
		while (k != 0) {
			if (k % 10 == 9) {//判断k的个位上是否有9，
				times++;
			}
			k = k / 10;//判断k的十位是否有9，若有，则重新进入while循环
		}
	}
	printf("出现%d次数字9\n", times);
}
