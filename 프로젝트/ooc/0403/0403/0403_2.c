// ��������� + ���Կ�����
// 1. 2�� ���� �Է¹ޱ�


#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	num1 = num1 + num2;  // 2. �� ������ ���� num1�� ���� ���� = num1 +=num2;
	printf("���� num1 + num2 ��� :: %d\n", num1);
	num1 -= num2;
	printf("���� num1 - num2 ��� :: %d\n", num1);
	num1 = num1 * num2;
	printf("���� num1 * num2 ��� :: %d\n", num1);
	num1 /= num2;
	printf("���� num1 / num2 ��� :: %d\n", num1);
	num1 %= num2;
	printf("���� num1 %% num2 ��� :: %d\n", num1);
}