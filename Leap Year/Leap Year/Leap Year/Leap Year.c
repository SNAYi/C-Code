#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//ʵ��һ�������ж�year�ǲ�������,����ͨ���귵��1�����������귵��2�����Ƿ���0
int LeapYear() {
	int year = 0;
	printf("�����������жϵ���ݣ�");
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
		printf("����ͨ����\n");
	}	else if (i == 2) {
		printf("����������\n");
	}	else {
		printf("��������\n");
	}
	return 0;
}