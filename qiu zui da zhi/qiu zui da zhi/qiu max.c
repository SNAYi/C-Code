#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i = 0, max = 0; 
	int num[10] = {0,1,2,3,4,5,6,7,8,9};
	for (i = 0; i < 10; i++) //ͨ��forѭ������������10������Сȫ���Ƚ�һ��
		if (num[i] >= max)//ͨ��if��䣬ѡ��������һ��
			max = num[i];
	printf("MAX num is :%d\n",max);
	return 0;
}