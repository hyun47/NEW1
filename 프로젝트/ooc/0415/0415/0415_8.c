//* 아래 프로그램을 작성하여라.
//- main에서 2개 숫자를 입력받기
//- 하나의 연산자(+, -, *, / , %) 중 하나 입력받기
//
//각 사칙연산에 대한 함수 5개를 구현하기
//반환형은 모두 int형으로 설정해두기
//- 위 함수를 활용하여, 입력된 연산자의 결과를 main에서 출력하기
//이때 / , % 함수의 반환값이 - 1일 때에는, 에러 메시지를 출력
//나눗셈 연산에서는 어떤 숫자든 0으로 나눌 수 없다.


#include <stdio.h>

//각 사칙연산에 대한 함수 5개를 구현하기
//반환형은 모두 int형으로 설정해두기
int plus(int n1, int n2) {				// main의 입력값(a,b)을 받을 매개변수 설정
		// 정수형 값을 리턴해줘야 함
	return n1 + n2;
}
int minus(int n1, int n2) {
	return n1 - n2;
}
int multi(int n1, int n2) {
	return n1 * n2;
}
// 나누기 -> n1을 n2로 나눌때, n2가 0이면 안된다.

int divide(int n1, int n2) {
	if (n2 == 0) {
		return -1;						  // 밑에 리턴함수는 출력되지 않는 이유 : return을 만나면 즉시 종료기 때문에 (여기서 -1을 반환하면, 실행종료)
	}
	return n1 / n2;
}
int rest(int n1, int n2) {
	if (n2 == 0) {
		return -1;						  // 밑에 리턴함수는 출력되지 않는 이유 : return을 만나면 즉시 종료기 때문에 (여기서 -1을 반환하면, 실행종료)
	}
	return n1 % n2;
}


int main() {
	int a, b;                //main에서 2개의 숫자 입력받기
	scanf("%d %d", &a, &b);

							// 하나의 연산자 중 하나 입력받기
	char oper;
	scanf(" %c", &oper);

							// 결과값 출력하기
	switch (oper) {
	case '+':
		printf("덧셈 결과 :: %d\n", plus(a , b));
		break;
	case '-':
		printf("뺄셈 결과 :: %d\n", minus(a, b));
		break;
	case '*':
		printf("곱셈 결과 :: %d\n", multi(a, b));
		break;
	case '/':
		if (divide(a, b) == -1) {             //return -1; 로 인해서 -1과 값이 동일한경우
			printf("/연산 에러 :: 0으로 나눌 수 없습니다.\n");
		}
		else {
			printf("나눗셈 결과 :: %d\n", divide(a, b));
		}
		break;
	case '%':
		if (divide(a, b) == -1) {             //return -1; 로 인해서 -1과 값이 동일한경우
			printf("% 연산 에러 :: 0으로 나눌 수 없습니다.\n");
		}
		else {
			printf("나눗셈 나머지 결과 :: %d\n", rest(a, b));
		}
	default:
		printf("연산자를 잘못 입력하였습니다.\n");
	}
}