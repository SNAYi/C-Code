#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#define m 5
int main() {
	int Sn = 0;
	int a =0;
	printf("����������Ҫ��͵�����");
	scanf("%d",&a);
	int temp = a;
	for (int i = 1; i <= m; ++i) {
		Sn = Sn + a;
		a = temp + a * 10;
	}
	printf("Sn = %d",Sn);
	return 0;
}