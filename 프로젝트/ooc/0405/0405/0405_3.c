// 백준 예제들

//윤년
// 윤년 조건 :: 4의 배수이면서 100의 배수가 아닌경우 or 400의 배수인경우
// 1. 년도 입력받기
// 2. 윤년인지 아닌지 파악하기 
// 4의 배수 -> n인 숫자가 4로 나누어 떨어진다!! = n의 값이 4로 나누었을 때 나머지가 0이다.
// 100의 배수가 아니다 -> n인 숫자가 100으로 나누어 떨어지지 않는다. = 나누었을 때 나머지가 "0이 아니다"  

// tip.  &&연산자가 ||연산자보다 더 먼저 연산의 수행됨!!! 굳이 소괄호는 쓰지 않아도 됨. 


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int y;
	scanf("%d", &y);

	if ((y % 4 == 0 && y % 100 != 0)||y % 400 ==0) {
			printf("1");
	}
	else {
		printf("0");
	}



}