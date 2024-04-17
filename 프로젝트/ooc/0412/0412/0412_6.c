// 두 숫자 a, b를 입력받고, 두 숫자의 합을 출력하라.
// 함수(function) :: "기능", 명령문의 묶음. 펀션 
// 프로그램을 실행할 떄, main 함수에 있는 내용 위주로 실행이 된다.

void print() {             // -> 실행해 보면 안보임. 편집기에서 작성하는 모든 코드가 실행되지x
	printf("덧셈 프로그램을 실행합니다.\n");
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	print();         // 이거 넣으면 위의 void가 보인다. -> 함수 불러오기

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a + b);



}

