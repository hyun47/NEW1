// 반복문 :: "지정된 횟수만큼" 동일한 명령문을 "반복"하는 구문.   * "어느 순간에는 반드시 종료되게끔 설정해야한다."*
//			=>"지정된 횟수만큼" 특정 조건식에 대한 참/거짓으로 책정
// 
//			for,	 while(=if랑유사),		do-while 
//  
//	* while (조건식) {조건식을 충전할 때마다 수행할 명령문}
// 
// 
// 예제 :: 1부터 10까지 출력하는 프로그램 


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//	int num = 1;      //num변수 값을 "변화"시키면서 출력에 활용할 예정 
//	while (num <= 10) {
//		printf("%d\n", num);     // 현재 num값 출력 
//		num++;                    //num++ < num에 1을 추가 
//								// num이 증가를 연이어 하다가, 6이 되는 순간 빠져나올 것.
//	}


//}


int main() {
	char alpha = 'A';
	while (alpha <= 'Z') {
		printf("%c\n", alpha);
		alpha++;
	}


}