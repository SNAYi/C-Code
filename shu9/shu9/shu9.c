#include<stdio.h>
int main(void) {
	int k, times = 0;
	for (int i = 1; i < 101; i++) {//��ѭ�������޶���[1,100]
		k = i;
		while (k != 0) {
			if (k % 10 == 9) {//�ж�k�ĸ�λ���Ƿ���9��
				times++;
			}
			k = k / 10;//�ж�k��ʮλ�Ƿ���9�����У������½���whileѭ��
		}
	}
	printf("����%d������9\n", times);
}
