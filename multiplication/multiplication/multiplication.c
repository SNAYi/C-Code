#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
int main() {
	int i = 1;	//��
	int j = 1;	//��
	int n = 0;
	int sum = 0;
	printf("����������Ҫ�ĳ˷�����");
	scanf("%d",&n);
	for (i=1; i <= n;++i) {
		//����ҪС�ڵ�������
		for (j=1; j <= i; ++j) {
			sum = i * j;
			printf("%d * %d = %d\t",i,j,sum);
		}
		printf("\n");
	}

	
	return 0;
}