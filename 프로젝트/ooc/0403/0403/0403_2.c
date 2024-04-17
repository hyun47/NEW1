// 산술연산자 + 대입연산자
// 1. 2개 숫자 입력받기


#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	num1 = num1 + num2;  // 2. 두 숫자의 합을 num1에 새로 저장 = num1 +=num2;
	printf("현재 num1 + num2 결과 :: %d\n", num1);
	num1 -= num2;
	printf("현재 num1 - num2 결과 :: %d\n", num1);
	num1 = num1 * num2;
	printf("현재 num1 * num2 결과 :: %d\n", num1);
	num1 /= num2;
	printf("현재 num1 / num2 결과 :: %d\n", num1);
	num1 %= num2;
	printf("현재 num1 %% num2 결과 :: %d\n", num1);
}