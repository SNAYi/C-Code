#include<stdio.h>
#include<stdlib.h>
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

int main() {
	int killer;
	for (killer = 'A'; killer <= 'D'; ++killer) {
		if (((killer != 'A') + (killer == 'C')
			+ (killer == 'D') + (killer != 'D')) == 3) {
			printf("killer is %c", killer);
		}
	}
	
	return 0;
}