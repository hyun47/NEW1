// 반복문 :: while문, for문, do-while문
// for (제어변수 초기화; 조건문; 제어변수 연산) {
// 조건이 충족할 때 반복 수행할 명령문;}
// 제어 변수 :: "반복할 횟수"를 결정짓는 변수 (예제의 whil문에 있어선 i가 제어 변수다) 
//				= 반복문 수행에 의해서 값이 변할 수 있는 변수. 


// 예제 :: n, m을 입력받고,		n부터 m까지의 숫자 중 짝수들 출력. (->하나의 문장이지만 나눠서 생각하기) (n<m)
// n부터 m까지 숫자들 각각 접근.(반복문) -> 짝수들 


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// * while문 기준 작성 
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	int i = n;
//	while (i <= m) {
//		if (i % 2 == 0) {                           //i를 2로 나누었을 때 나머지가 없다면 -> 짝수기준
//			printf("%d", i);
//		}
//		i++;                             
//	}
//
//}

// *for문 기준 작성

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int i = n;
	for (int i = n; i <= m; i++) {                     // 중간 조건문은 절대 생략x 
		if (i % 2 == 0) {
			printf("%d", i);
		}
	}

}