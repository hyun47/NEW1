#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//아스키코드 :: 컴퓨터가 문자 정보를 파악할 수 있도록
	//				문자 정보-특정 숫자를 1:1로 대응시킨 표.
	//	'A' :: 65,  'a' :: 97,  '0' :: 48 = 시작점인 코드는 외워두면 나머지는 +1씩 증가함.
	char alpha;
	scanf("%c", &alpha);
	printf("문자로 표현 :: %c\n", alpha);
	printf("숫자로 표현 :: %d\n", alpha);

}