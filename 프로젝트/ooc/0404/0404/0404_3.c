//	논리연산자 :: &, &&,/ |, || / !
//	   &, && :: "그리고"= 2개의 조건식 중 하나라도 틀리면 false!!!!!!
//				&는 2개의 조건식을 모두 판별
//				&&는 첫번째 식의 결과값에 따라 두번째 식을 볼수도 있고, 안 볼 수도있다.(이게 더 똑똑함)
// 예제 :: 점수를 입력받고, 이에 알맞는 학점을 구하여라.
// (90~100 -> A   / 80~89 -> B  / 70~79 -> C   / 60~69 -> D   / 0~59-> F)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 1. 점수를 입력하기
	int score;
	printf("점수를 입력하세요.(0~100점 범위)");
	scanf("%d", &score);

	// 2. 입력값이 속하는 범위의 결과값 출력
	if (90 <= score && score <= 100) {
		printf("a입니다.");           // score값이 90이상"이고" 100이하일 때를 의미한다.
	}
	if (80 <= score && score < 90) {
		printf("b입니다.");
	}
	if (70 <= score && score < 80) {
		printf("c입니다.");
	}
	if (60 <= score && score < 70) {
		printf("d입니다.");
	}
	if (0 <= score && score < 60) {
		printf("f입니다.");
	}






}