//�Է� :: "�ܼ� �󿡼�" ���� ���� �� �ְԲ� �ϴ� ���!!
//			-> scanf() ���
// ���� :: 2���� ���ڸ� �Է¹ް�, �̵��� ���� ����ϴ� ���α׷� �����
//		1. �Է°��� ������ ���� ����(������ ���� ����).
//			int a, b;
//		2. �ֻܼ󿡼� 2�� �� �Է¹ޱ� (a, b�� ����)
//			scanf("[����������]", &[���� ������ ����]);  
//			scanf_s �� ���ų� #define _CRT_SECURE_NO_WARNINGS�� ����. 


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
}