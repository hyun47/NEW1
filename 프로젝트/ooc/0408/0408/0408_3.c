// switch 예제 : 
// 성적을 입력받고, 이성적이 어느 학점에 해당되는지를 출력하라
// A (100~90)    -> 힌트 : 십의 자리수를 봐라. (10. 9. 8. 7. 6.)
// B(80~89)
// C(70~79)
// D(60~69)
// F


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("성적을 입력하시오\n");
	scanf("%d", &num);

	switch (num / 10) {            // 0~ 100 -> 0 ~10으로 줄어든다.
	case 10:
		printf("A");
		break;
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("C");
		break;
	default:printf("F");
	}


}
