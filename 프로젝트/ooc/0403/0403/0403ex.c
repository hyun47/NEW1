// 1. bool 타입 변수로 참/거짓 여부 판별 방법.
		// bool t = (num1 == num2);
		// (t == true)? printf("2개의 숫자는 같습니다.") : printf("2개의 숫자는 다릅니다.");
// 2. 즉시 조건식을 대입하여 참/거짓 여부 판별 방법.
		// (num1 == num2) ? printf("2개의 숫자는 같습니다.") : printf("2개의 숫자는 다릅니다.");


#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdbool.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	// bool t = (num1 == num2) ? true : false;
	(num1 == num2) ? printf("2개의 숫자는 같습니다.") : printf("2개의 숫자는 다릅니다.");

}