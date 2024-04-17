//*** 예제문 카톡 참조 ***

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


int main() {
	//1.동전입력받기 (반복 수행x -> 반복문 바깥에 두기)
	int coin;
	printf("동전을 넣어주세요.");
	scanf("%d", &coin);

	//2. 자판기 프로그램 수행
	//무한 반복문 :: 무한으로 반복되는 구문, "어느 시점에서는 반드시 종료되게끔 설정하라->어긋남." 
	//				= 중괄호 안의 내용을 수행하는 중에서 중단점을 설정할 수 있다. (break)
	
	while (true) {
		if (coin < 800) {                 //3.현재의 돈으로 살수 있는 음료수가 없을때 -> 실행종료
			printf("%d원으로 잔액이 부족합니다.\n", coin);
			printf("실행을 종료합니다.\n");
			break;
		}
						
						// 3-2 현재의 돈으로 살 수 있는 음료수가 있을 때 -> 선택지 제시
		printf("<아래 숫자 중 하나를 입력해주세요.>\n");
		printf("1. 콜라 (1000원)\n");
		printf("2. 사이다 (1100원)\n");
		printf("3. 포카리 (1800원)\n");
		printf("4. 레쓰비 (800원)\n");
		printf("5. 카페라떼 (2500원)\n");
		printf("0. 실행종료\n");
						//사용자의 선택 입력받기.
		int menu;
		printf("메뉴 선택 ::\n");
		scanf("%d", &menu);
						// 사용자의 입력에 따라, 동작 수행 
						// 조건문 :: 사용자가 어떤 메뉴를 선택했는가, 돈이 충분한가를 같이 따짐.
		if (menu == 0) {
			printf("이용해 주셔서 감사합니다. 거스름돈은 %d입니다.\n", coin);
			break;
		}
		
		
		else if (menu == 1 && coin >= 1000) {
			coin -= 1000;
			printf("콜라가 제공되었습니다.\n 남은 금액은 %d 원입니다.\n", coin);
		}
		else if (menu == 2 && coin >= 1100) {
			coin -= 1100;
			printf("사이다가 제공되었습니다.\n 남은 금액은 %d 원입니다.\n", coin);
		}
		else if (menu == 3 && coin >= 1800) {
			coin -= 1800;
			printf("포카리가 제공되었습니다.\n 남은 금액은 %d 원입니다.\n", coin);
		}
		else if (menu == 4 && coin >= 800) {
			coin -= 800;
			printf("레쓰비가 제공되었습니다.\n 남은 금액은 %d 원입니다.\n", coin);
		}
		else if (menu == 5 && coin >= 2500) {
			coin -= 2500;
			printf("카페라떼가 제공되었습니다.\n 남은 금액은 %d 원입니다.\n", coin);
		}
		else {                    //예외적인 경우에 대한 처리 (메뉴를 잘못골랐거나, 구매하고자하는 음료를 사지 못하거나=금액이 부족)
			printf("메뉴를 잘못골랐거나, 해당 음료를 구매하기에 금액이 부족합니다.\n");
			printf("다시 선택해주세요\n");
		}
		// break를 만나면 여기로 이동 (중괄호 한쌍을 나옴) if문에서는 break가 적용되지 않음.
	}
	


}