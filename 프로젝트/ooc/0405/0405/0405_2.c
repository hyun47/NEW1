// ���� ������


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	printf("x�� y�� ���� �Է��Ͻÿ�.");
	scanf("%d %d", &x, &y);

	if (x >= 0 && y >= 0) {
		printf("1��и�\n");
	}
	if (x < 0 && y >= 0) {
		printf("2��и�\n");
	}
	if (x < 0 && y < 0) {
		printf("3��и�\n");
	}
	if (x >= 0 && y < 0) {
		printf("4��и�\n");
	}
}