#include<stdio.h>
#include<stdlib.h>

//����һ������
//ʵ�ֺ���init������ʼ�����顢
void Init(int* arr ,int value) {
	for (int i = 0; i < 10; ++i) {
		arr[i] = value;
	}
}
//ʵ��empty����������顢
void Empty(int* arr) {
	for (int i = 0; i < 10; ++i) {
		arr[i] = 0;
	}
}

//ʵ��reverse���������������Ԫ�ص����á�
void Reserve(int* arr) {
	int left = 0;
	int right = 9;
	int temp = 0;
	while (left < right) {
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		++left;
		--right;
	}
}

void Print(int* arr ) {
	for (int i = 0; i < 10; ++i) {
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("primal:");
	Print(arr);

	printf("Reserve:");
	Reserve(arr);
	Print(arr);

	printf("Empty:");
	Empty(arr);
	Print(arr);

	printf("Init:");
	Init( arr , 10);
	Print(arr);

	system("pause");
	return 0;
}