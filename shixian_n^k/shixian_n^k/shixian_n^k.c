#include<stdio.h>
#include<stdlib.h>

//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//n^k = n* n^(k-1)
int Func(int n,int k) {
	//��ָ��kΪ0ʱ��n����Ϊʲô�������1���Դ���Ϊ�ݹ����
	if (k == 0) { 
		return 1;
	}	else {
		return n*Func(n,k-1);
	}
}
int main() {
	printf("%d\n", Func(2, 3));
	return 0;
}