#include<stdio.h>
#include<stdlib.h>

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
int DigitSum(int n) {
	int sum = 0;
	//ֻҪ���������Ϊ0���ݹ��һֱ���У�����n = 0Ϊ����
	if (n != 0) {
		sum = (n % 10) + DigitSum(n / 10);
	}
	return sum;
}

int main() {
	printf("%d", DigitSum(1729));

	return 0;
}