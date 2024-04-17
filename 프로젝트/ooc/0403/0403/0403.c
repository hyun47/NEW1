// 출력문(printf()), 입력문(scanf())
// 백분 11382번 :: 꼬마 정민
// A, B, C에 대해 입력받고, 합을 출력하라.
// 
// 자료형 :: 정수(int, short, long), 실수(double), 문자(char)
// & :: 주소연산자 (&a->"변수 a의 주소/위치")

/*#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);      //3개의 숫자 입력
	printf("%lld", a + b + c);            // 3개의 합 출력

}*/


// 연산자 :: 연산을 수행하는 기호. 
// 대입연산자 :: = -> 오른쪽 값을 왼족으로 대입한다.
// 산술연산자 :: +, - ,* , 
//				 /(나누기 :: 몫 결과값.) , 
//				 %(나누기 :: 나머지 결과값.) << % 연산자는 양 옆의 2개 숫자가 정수여야함 >>
//				(int) / (int) -> 나누기 몫이 결과로 나옴.
//					숫자 2개 중 하나라도 실수형이면 소수점 나누기 결과를 준다.


#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	// int형으로 입력받기.
	int a, b;
	scanf("%d %d", &a, &b);

	// 소수점이 있는 나누기 결과 출력.
	// 변수 a의 타입 자체에는 변경하지 않고
	// a가 가진 값에 대해서만 타입을 변경 => 명시적 형변환
	printf("%.1lf", (double) a / b);




}
