//��ĿҪ�󣺱�д���뽫�������ͱ�����������ݽ���,����������ʱ����
#include<stdio.h>

int main(void) {
	int a = 10;
	int	b = 3;
	a = a + b;         //����a��������ݱ��13
	b = a - b;         //����b��������ݱ��10
	a = a - b;         //����a��������ݱ��3
	printf("a=%d\n", a);  //��ӡa,b ��ֵ
	printf("b=%d\n", b);

	return 0;
}