#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i = 0, max = 0; 
	int num[10] = {0,1,2,3,4,5,6,7,8,9};
	for (i = 0; i < 10; i++) //通过for循环，将数组内10个数大小全部比较一遍
		if (num[i] >= max)//通过if语句，选出最大的那一个
			max = num[i];
	printf("MAX num is :%d\n",max);
	return 0;
}