//배열 :: 변수는 하나의 이름으로 하나의 값을 저장하는 값이었지만 배열은 하나의 값으로 여러가지를 저장할 수 있는 공간.
//백준 :: 10871번 문제 (x보다 작은 수)
//입력 :: 숫자의 개수 n, 임의의 수x, n개의 숫자들
//			->n개의 숫자들 중 x보다 작은 수를 순차적으로 출력하라.    x와n의 값은 10000이 넘지 않는다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	// 1. 입력받기
	int n, x;
	scanf("%d %d", &n, &x);

	// 2. 배열 선언
	int number[10001] = { 0 };
	for (int i = 0; i < n; i++) {   //i :: 0~ n-1
		scanf("%d", &number[i]);    //배열값 호출 :: (배열이름)[배열번호]; 배열 번호 :: "배열의 몇번째 공간에 있는 값을 불러오는가"
	}
	
	// 3. x와 배열값을 하나씩 비교하며 출력하기
	for (int i = 0; i < n; i++) {
		if (number[i] < x) {
			printf("%d ", number[i]);
		}
	}


}