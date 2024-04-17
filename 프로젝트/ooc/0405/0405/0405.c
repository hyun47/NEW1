// 예제 :: 돈을 입력 받고, 커피 또는 빵을 구매여부를 입력 받고
//			결과를 출력하기


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int coin;
	printf("돈을 넣어주세요.\n");
	scanf("%d", &coin);

	// 커피(2500원) 구매 여부 입력받기 (0 또는 1 입력)
	int coffee;
	printf("커피를 구매하시겠습니까? (0 또는 1 입력)\n");
	scanf("%d", &coffee);

	// 빵(1000원) 구매 여부 입력받기 (커피만, 빵만, 커피랑 빵 둘다)
	int bread;
	printf("빵을 구매하시겠습니까? (0 또는 1 입력)\n");
	scanf("%d", &bread);
	
	
	//if-else if-else // if만 사용
	if (coffee == 1 && coin >= 2500) {
		if (coin >= 2500) {
			printf("커피가 나왔습니다.\n");
			coin -= 2500;
		}
		else {
			printf("커피를 구매하기에 돈이 부족합니다.\n");
		}
	
	
		if (coin >= 1000) {
			printf("빵이 나왔습니다.\n");
			coin -= 1000;
		}
		else {
			printf("빵을 구매하기에 돈이 부족합니다.\n");
		}

	}
	printf("프로그램을 종료합니다.\n");
}