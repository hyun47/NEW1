// ���� ���� 2741 n��� 
// �ڿ��� N�� �־����� ��, 1���� N���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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