#include<stdio.h>

//�����������ͱ����������������飬i����ȷ��ѭ��������t�������м������
//���������������ݵ�һһ����

int main() {
	int i,t;
	int a[5] = { 0, 1, 2, 3, 4 };
	int b[5] = { 5, 6, 7, 8, 9 };//��ʼ����������
	for (i = 0; i < 5; i++) {   //ͨ��t���ν���a[i]��b[i]��ֵ
		t = a[i];
		a[i] = b[i];
		b[i] = t;
}
	for (i = 0; i < 5; i++) 
		printf("%d\t", a[i]);  //�������a[5]�������
	printf("\n");
	for (i = 0; i < 5; i++)    //�������b[5]�������
		printf("%d\t", b[i]);

	return 0;
}