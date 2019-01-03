#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
int main() {
	int i = 1;	//行
	int j = 1;	//列
	int n = 0;
	int sum = 0;
	printf("请输入你想要的乘法表规格：");
	scanf("%d",&n);
	for (i=1; i <= n;++i) {
		//列数要小于等于行数
		for (j=1; j <= i; ++j) {
			sum = i * j;
			printf("%d * %d = %d\t",i,j,sum);
		}
		printf("\n");
	}

	
	return 0;
}