#include<stdio.h>

int main() {//��ΪҪ������Ǹ�������Ϊ�˱������ͳһ����������Ϊdouble��
	double i = 1, t = 1;//i����ĸ��һֱ����1��ֱ��100��t�����ӣ�ֻ�ı������š�
	double a = 1, sum = 0;
	
	for (i = 1; i < 100; ) {//ѭ����100��ֹͣ
		sum = sum + a;     
		t = -t;
		++i;
		a = t / i;
}
	printf("sum=%f\n", sum);

    return 0;
}