#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int coin;
//	scanf("%d", &coin);
//
//	printf("1.콜라(1000원)\n2.사이다(1100원)\n3.포카리 스웨트(1800원)\n4.레쓰비(800원)\n5.카페라떼(2500원)");
//	int drink;
//	scanf("%d", &drink);
//
//	if (drink == 1) {
//		coin -= 1000;
//	}
//
//	if (coin >= 0) {
//		printf("콜라를 드리겠습니다");
//	}
//	if (coin > (coin - 1000)){
//		printf("거스름돈은 %d 입니다.", coin - 1000);
//	}
//	else {
//		printf("금액이 부족합니다.");
//	}
//}
int main() {
	int coin;              //1.동전 입력
	printf("돈을 넣어주세요.");
	scanf("%d", &coin);
	
	printf("1.콜라 (1000원)\n");     //2.메뉴나열
	printf("2. 사이다(1100원)\n");
	printf("3.포카리(1800원)\n");
	printf("4.레쓰비(800원)\n");
	printf("5.카페라테(2000원)\n");

	int drink;
	printf("음료수를 선택해주세요.\n");
	scanf("%d", &drink);

	if (drink == 1) {
		coin -= 1000;
	}
	else if (drink == 2) {
		coin -= 1100;
	}
	else if (drink == 3){
		coin -= 1800;
	}
	else if (drink == 4) {
		coin -= 800;
	}
	else if (drink == 5) {
		coin -= 2000;
	}
	if (coin < 0) {
		printf("돈이 부족합니다.");
	}
	else {
		printf("해당 음료가 제공되었습니다.\n");
		if (coin > 0) {                                  //if 중첩문 사용
			printf("거스름돈은 %d입니다.\n", coin);
		}
									//(즉시 실행 종료->else문 굳이 작성 안해도 됨)
	}


}