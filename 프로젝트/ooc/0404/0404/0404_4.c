// 예제 :: 점수를 입력받고, 이에 알맞는 학점을 구하여라.
// (90~100 -> A   / 80~89 -> B  / 70~79 -> C   / 60~69 -> D   / 0~59-> F)
// 변형하면서 논리연산자 사용x
// if-else if- else 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score;
	printf("점수를 입력하십시오.");
	scanf("%d", &score);

	if (score >= 90) {
		printf("a입니다.");
	}
	else if (score >= 80) {
		printf("b입니다.");
	}
	else if (score >= 70) {
		printf("c입니다.");
	}
	else if (score >= 60) {
		printf("d입니다.");
	}
	else {
		printf("f입니다.");
	}
}
