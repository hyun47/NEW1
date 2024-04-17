// 함수 :: "기능" 여러 명령문을 하나로 묶어둔 것
// 함수 선언 구문
// 반환형(=자료형) 함수이름(){
//		함수 호출시, 수행할 명령문;
//
// }
// 반환형이란?? return구문을 통해서 반환할(뱉어낼 값의) 타입.
//				반환하다 =/= 출력하다 
// void :: "아무것도 없다"
// NULL :: "없는", "값이 존재하지 않는" =/=0, =/= false
//			int num  =NULL; -> 값을 지정하지 않았다는 뜻.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void print() {
	// print() 라는 함수를 main에서 호출하지 않으면, 실행이 안됨
	printf("프로그램을 실행합니다.\n");
}

int return_One() {	
	return 1;         //return ::"반환하다" -> 1을 반환하다(뱉어낸다). (int형=1은 정수니까 1.6소수점일경우 1만 반환함)
}


int main() {
	//함수 호출하는 법 :: 함수 이름();
	print();       //print함수 호출


	printf("return_One()함수 반환값 :: %d", return_One());

	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d", a + b);

	
}