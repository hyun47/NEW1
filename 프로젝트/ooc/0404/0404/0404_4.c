// ���� :: ������ �Է¹ް�, �̿� �˸´� ������ ���Ͽ���.
// (90~100 -> A   / 80~89 -> B  / 70~79 -> C   / 60~69 -> D   / 0~59-> F)
// �����ϸ鼭 �������� ���x
// if-else if- else ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score;
	printf("������ �Է��Ͻʽÿ�.");
	scanf("%d", &score);

	if (score >= 90) {
		printf("a�Դϴ�.");
	}
	else if (score >= 80) {
		printf("b�Դϴ�.");
	}
	else if (score >= 70) {
		printf("c�Դϴ�.");
	}
	else if (score >= 60) {
		printf("d�Դϴ�.");
	}
	else {
		printf("f�Դϴ�.");
	}
}
