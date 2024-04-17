// 백준 예저 2741 n찍기 
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int N;
	scanf("%d", &N);
	
	if (1 <= N && N <= 100000) {
		int i = 1;
		while (i <= N) {
			printf("%d\n", i);
			i++;
		}

	}
	

}