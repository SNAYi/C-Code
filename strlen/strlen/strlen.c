#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�ݹ�ʵ��strlen 
int strlen1(char* string) {
	if (*string) {
		return strlen1(++string) + 1;
	}	else { 
		return 0;
	}
}

//�ǵݹ�ʵ��strlen 
//int strlen2(char* string) {
//	int count = 0;
//	while (*string) {
//		++count;
//		++string;
//	}
//	return count;
//}

int main() {
	char string[100];
	printf("������һ���ַ���:");
	scanf("%s",string);
	printf("%d\n",strlen1(string));
	//printf("%d\n",strlen2(string));

	return 0;
}