// 반환형(=자료형) 함수이름(매개변수타입1 매개변수명1, ... ...){
//		함수 호출시, 수행할 명령문;
//
// }

// 매개변수 :: 함수를 실행하기 전에 "미리" 전달받는 값
// 예) 자기소개를 출력하는 함수 구현 :: 이름, 나이, 혈액형 
//


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void introduce(char name[], int age, char blood) {
	printf("이름 :: %s\n 나이 ::%d\n 혈액형 ::%c\n", name, age, blood);
}




int main() {
	introduce("yujihyun", 26, 'A');


}

