// 예제 :: 영문자를 입력받고, 대소문자 반전해서 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	char alphabet;
//	printf("영문자를 입력해주세요.");
//	scanf("%c", &alphabet);
//
//	// 대소문자 반전 -> 경우의 수 세가지
//	// 대문자 입력받는 경우 ->소문자 /	소문자 입력받는 경우 ->대문자  /	영문자가 아닌 문자를 받는 경우->에러
//	if ('A' <= alphabet && alphabet <= 'Z') { // 65 <= alphabet <=90 이랑 의미가 똑같다
//		printf("대문자 ->소문자 변환결과 :: %c", alphabet + 32);
//
//	}
//	else if ('a' <= alphabet && alphabet <= 'z') {
//		printf("소문자 ->대문자 변환결과 :: %c", alphabet - 32);
//	}
//	else {
//		printf("영문자를 입력해주세요");
//	}
//}

//예제 :: 값(1~3)을 입력받고, 각 경우에 따라 특정 값을 출력하라.
//	1. 값 입력받기
//	2. 각 경우에 따라 특정 값 출력하기. (1은 가위 2는 보 3은 주먹)
//		1)입력값이 1인 경우
//		2)입력값이 2인 경우
//		3)입력값이 3인 경우
//		4)1~3 이외의 입력값인 경우 (else)

int main() {
	int num;
	printf("1부터 3까지의 숫자 중 값을 입력하시오.\n");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("가위 ㅎㅅㅎ\n");
		break;
	case 2:
		printf("바위 ㅎㅅㅎ\n");
		break;
	case 3:
		printf("보 ㅎㅅㅎ\n");
		break;

	default:
		printf("다시 입력하시오\n");
		break;
	}
	// break문 만나면 이쪽으로 이동
}
		
	//switch (변수) {
	//case 값1 :  -> 변수의 값이 값1일 "경우"
	//	변수 == 값1일 때, 수행할 명령문;
	//}
	//default : 위 경우가 모두 아닌 경우 수행할 명령문 (=else)
	// break :: "강제 중단" -> 현재 속해있는 {} 쌍을 탈출함.