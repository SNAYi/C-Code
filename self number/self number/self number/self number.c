#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i = 0;
	int n;
	printf("�����������жϵ��������ķ�Χ���ֵ��");
	scanf("%d", &n);
	printf("These are  self numbers:\n");
	//����
	for (i = 100; i <= n; ++i) {
		int length = 0;
		int temp = i;
		//��һ�����ĳ�����ȷ���ݴ�
		while (temp != 0) {
			++length;
			temp = temp / 10;
		}
		//�ж�һ�����Ƿ���������
		int sum = 0;
		temp = i;	//��Ҫ��temp�������¸�ֵ��temp���������ѭ���Ѿ�Ϊ0
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