#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

/*int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf(">");
	}
	else if (a < b) {
		printf("<");
	}
	if (a == b) {
		printf("==");
	}
}	*/		

int main() {
	int coin;
	scanf("%d", &coin);

	if (coin > 0) {
		printf("1.콜라(1000원)\n2.사이다(1100원)\n3.포카리 스웨트(1800원)\n4.레쓰비(800원)\n5.카페라떼(2500원)");
		int num1;
		scanf("%d",&num1);
		if (num1 > coin) {
			printf("금액이 부족합니다.");
		}
		else if (num1 <= coin) {
			printf("거스름돈은 %d 입니다.", coin - num1);
		}
	}

	

}