// n을 입력 받고 / 1부터 n까지 하여 짝수들의 / 총합을 출력하는 프로그램
// 1. n 입력 받기 int scanf
// 2. 1부터 시작하여 n을 끝으로하면서, 숫자 탐색 (반복문)
// 3. 짝수들의 총합 - 총합을 저장할 변수부터 정하기.  


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
		int n;
		printf("숫자를 입력하시오");
		scanf("%d", &n);
		int num = 1;                 //임의의 변수 num을 통해서 탐색 진행 예정 
		int sum = 0;                 // 0을 지정한 이유 :: 쓰레기값이 들어가는 걸 방지.
		while (num <= n) {            // n 이하일 때 아래 구문 반복 수행 
			if ( num % 2 == 0) {
				sum += num;
				printf("%d", num);
				                    //반복문 1회 수행할 때마다 1씩 증가
			}
			num++;
		}
		printf("=>%d", sum);
	}
