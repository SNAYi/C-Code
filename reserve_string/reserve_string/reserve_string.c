#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
void reverse_string1(char* string) {
	//����׵�һֱ��Ϊ0���ͼ�������
	if (*string != '\0') {
		char* start = string;
		char* end = string + strlen_w(string) - 1;
		//�����׵�ֵ
		char temp = *start;
		//�׵�任
		*start = *end;
		//β�㸳0
		*end = '\0';
		//������ƣ��׵�����һλ
		reverse_string1(start + 1);
		//�ָ�β��
		*end = temp;
	}
}
//���ַ������Ⱥ���
int strlen_w(char* string) {
	int count = 0;
	while (*string != '\0'){
		count++;
		string++;
	}
	return count;
}

//�ǵݹ�ʵ���ַ�������
//reverse_string2(char * string) {
//	char* start = string;
//	char* end = string + strlen(string) - 1;
//	while (start < end){
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}

int main() {
	char string[100];
	scanf("%s", string);
	reverse_string1(string);
	printf("%s", string);
	/*reverse_string2(string);
	printf("%s", string);*/

	return 0;
}