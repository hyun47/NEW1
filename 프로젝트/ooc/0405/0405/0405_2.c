// 백준 예제들


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	printf("x와 y의 값을 입력하시오.");
	scanf("%d %d", &x, &y);

	if (x >= 0 && y >= 0) {
		printf("1사분면\n");
	}
	if (x < 0 && y >= 0) {
		printf("2사분면\n");
	}
	if (x < 0 && y < 0) {
		printf("3사분면\n");
	}
	if (x >= 0 && y < 0) {
		printf("4사분면\n");
	}
}