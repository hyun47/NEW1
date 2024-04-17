// switch 예제 : 
// 1. 시험 점수를 입력받고. 합격/불합격 여부 결과를 출력하라
// 점수가 60점 이상일 경우 합격에 해당



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("점수를 입력하시오.");
	scanf("%d", &num);

	switch (num >= 60) {
	case 1:
			printf("합격");
			break;
	default : 
		printf("불합격");
		break;
	}

}