//��ĿҪ�󣺱�д���뽫�������ͱ�����������ݽ���
#include<stdio.h>

int main(void) {
	int a = 1, b = 3, t; //����һ����ʱ����t��
	t = a;               //�Ƚ�����a�����1��������t,����t��������ݱ��1
	a = b;               //Ȼ���ٽ�����b�����3��������a,����a��������ݱ��3
	b = t;               //��󽫱���t�����1��������b,����b��������ݱ��1
	printf("a=%d\n",a);  //��ӡa,b ��ֵ
	printf("b=%d\n", b);

return 0;
}