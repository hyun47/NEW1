// 조건문 :: "조건식의 결과에 따라" 수행할 명령문. 수행할 명령문을 달리할 때 사용(조건을 따진다.)
// if문 (대표적)
//		예제 :: 시험 점수를 입력받고, pass 인지 faill인지 출력 (60점 이상이면 pass)
//				1. 시험 점수 입력  2. pass/fail 결과 출력 
//			if(조건식) {
//			조건식이 성립할 때 수행할 명령문 나열
//			}
//			else {
//			위 조건식이 성립되지 않을 떄 수행할 명령문 나열
//			} => 순서는 반드시 지켜줘야함. if문 위로 else가 올 수 없음.



#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);
	if (score >= 60) {
		printf("pass입니다.\n"); 
	}
	/*if (score < 60) {
		printf("fail입니다.\n");
		}*/
	else {
		printf("fail입니다.\n");

	}

}