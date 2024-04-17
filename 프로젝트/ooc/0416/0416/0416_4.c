//3.
//a부터 b까지 곱하는 함수를 만들고
//1x2x......xb = 결과 출력하고 반환값 주는 함수 만들기
//예시
//1x2x3x4x5
//total = 120




#include <stdio.h>


int multiply(int a, int b) {
	int result = 1;
	for (int i = a; i <= b; i++) {
		result *= i;
		printf("%d", i);
		if (i != b) {
			printf("x");
		}

	}
	return result;
}


int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	//리턴 구문을 함수에 명시하지 않으면 -> 함수 호출한 공간에 대체할 값이 없다.
	printf("\ntotal :: %d\n", multiply(a, b));

}