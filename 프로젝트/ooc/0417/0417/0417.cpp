// 오버로딩 :: "함수 중복 선언"



//2개의 변수가 있는데, 2개 변수의 이름을 동일하게 설정할 수 있다.(o/x) => x

// 함수 선언 :; 덧셈 수행 결과값을 return하는 함수를 3개 선언해라.

int plus() {// 1. 매개변수가 없는 걸로
	return 1 + 1;       // 2 return해줌
}
int plus(int n1) {// 2. 매개변수가 1개 있음			(1개의 정보 요청)
	return n1 + 1;		//n1+1 return해줌
}
int plus(int n1, int n2) {// 2. 매개변수가 2개 있음 (2개의 정보 요청)
	return n1 + n2;		//n1+n2 return해줌
}

#include <stdio.h>

int main() {
	/*int a = 5;
	int a = 10;
	printf("%d", &a);*/ 
	printf("%d\n", plus());					// 첫번째 함수를 사용하고 있음
	printf("%d\n", plus(10));				// 결과 :: 11, 두번째 함수 사용
	printf("%d", plus(10, 5));				// 결과 : 15, 세번째 함수 사용 
}