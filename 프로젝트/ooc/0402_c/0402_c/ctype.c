// 자료형 :: "정보의 유형"
// 기본적인 자료형은 signed형 -> 음수, 양수 모두 표현할수있다.
// unsigned형-> 0과 양수만 표현할수있다.
// 
// 정수형- int	short	long
//	shor myShort; -> int보다 적다
//	int myInt; -> -21억 ~ +21억 정도 (대표적)
//	*unsigned int myUint; -> 0 ~ +42억 
//	long myLong; -> int보다 많다
// 
// 실수형- double("%lf")	float("%f")
//	double myDouble -> 정밀도[소수점 표현 범위]의 차이 (대표적) 더블이 더 정확하다.
//	float myFloat 
// 문자형은 'char'이 끝


#include <stdio.h>

int main() {
	int myInt = 151;
	double myDouble = 159.9;
	char myChar = 'a';
	printf("안녕하세용, 유지현입니다^^.\n");
	printf("나이 :: %d (세)\n", myInt);
	printf("키 :: %.1lf (cm)\n", myDouble);
	printf("혈액형 :: %c형\n", myChar);
	printf("잘 부탁드립니다.\n");
}