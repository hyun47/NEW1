// continue :: "계속", 실행하던 반복문 수행을 중단하고,(반복문 탈출은 아님=break와 다른점.) 반복문의 처음으로 돌아간다. 
// 예제 :: n부터 m까지의 숫자들 중 짝수만 출력 (n<m)


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	//1. n , m입력받기
	int n, m;
	scanf("%d %d", &n, &m);
	
	// 2. n~m 탐색하기
	for (int i = n; i <= m; i++) {
		//if (i % 2 == 0) {
		//	//	//짝수만 출력
		//	//	printf("%d", i);
			//}
			
			// 홀수인 경우에는, 반복문의 처음으로 돌아가게끔 함.
		if (i % 2 != 0) {
			printf("continue를 수행합니다.\n");
			continue;
		}
		printf("continue를 수행하지 않았습니다.");
		printf("%d\n", i);
		


	}


}