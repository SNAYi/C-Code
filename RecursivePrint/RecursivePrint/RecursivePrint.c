#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
void Print(int n) {
	if (n > 9) {
		Print(n / 10);
	}
	printf("%d\t",n % 10);
}

int main() {
	int n = 0;
	printf("������һ����:");
	scanf("%d",&n);
	Print(n);
	return 0;
}