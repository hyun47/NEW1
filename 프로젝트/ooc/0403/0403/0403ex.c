// 1. bool Ÿ�� ������ ��/���� ���� �Ǻ� ���.
		// bool t = (num1 == num2);
		// (t == true)? printf("2���� ���ڴ� �����ϴ�.") : printf("2���� ���ڴ� �ٸ��ϴ�.");
// 2. ��� ���ǽ��� �����Ͽ� ��/���� ���� �Ǻ� ���.
		// (num1 == num2) ? printf("2���� ���ڴ� �����ϴ�.") : printf("2���� ���ڴ� �ٸ��ϴ�.");


#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdbool.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	// bool t = (num1 == num2) ? true : false;
	(num1 == num2) ? printf("2���� ���ڴ� �����ϴ�.") : printf("2���� ���ڴ� �ٸ��ϴ�.");

}