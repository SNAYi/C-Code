#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
void reverse_string1(char* string) {
	//如果首点一直不为0，就继续递推
	if (*string != '\0') {
		char* start = string;
		char* end = string + strlen_w(string) - 1;
		//保存首点值
		char temp = *start;
		//首点变换
		*start = *end;
		//尾点赋0
		*end = '\0';
		//进入递推，首点右移一位
		reverse_string1(start + 1);
		//恢复尾点
		*end = temp;
	}
}
//求字符串长度函数
int strlen_w(char* string) {
	int count = 0;
	while (*string != '\0'){
		count++;
		string++;
	}
	return count;
}

//非递归实现字符串交换
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