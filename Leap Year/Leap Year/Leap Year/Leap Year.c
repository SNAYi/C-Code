#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//实现一个函数判断year是不是闰年,是普通闰年返回1，是世纪闰年返回2，不是返回0
int LeapYear() {
	int year = 0;
	printf("请输入你想判断的年份：");
	scanf("%d", &year);
	if ((year % 4 == 0) && (year % 100 != 0)) {
		return 1;
	}	else if (year % 400 == 0) {
		return 2;
	}	else {
		return 0;
	}
}

int main() {
	int i = 0;
	i = LeapYear();
	if (i == 1){
		printf("是普通闰年\n");
	}	else if (i == 2) {
		printf("是世纪闰年\n");
	}	else {
		printf("不是闰年\n");
	}
	return 0;
}