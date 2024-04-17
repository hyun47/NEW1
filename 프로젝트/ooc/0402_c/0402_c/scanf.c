//입력 :: "콘솔 상에서" 값을 넣을 수 있게끔 하는 명령!!
//			-> scanf() 사용
// 예제 :: 2개의 숫자를 입력받고, 이들의 합을 출력하는 프로그램 만들기
//		1. 입력값을 저장할 변수 생성(정보를 담을 공간).
//			int a, b;
//		2. 콘솔상에서 2개 값 입력받기 (a, b에 저장)
//			scanf("[서식지정자]", &[값을 저장할 변수]);  
//			scanf_s 를 쓰거나 #define _CRT_SECURE_NO_WARNINGS을 쓰기. 


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