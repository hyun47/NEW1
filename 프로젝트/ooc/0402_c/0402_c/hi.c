// 변수 :: "변할 수 있는" 숫자
// 메모리 공간 중 한 군데를 임의로 잡아 "특정 정보를 담을 수 있는" 공간.
// 상자 가져오기-> 변수 선언(생성) :: [자료형] [변수이름];
// 자료형 :: 많음. 정수형 (int) int myint; "정수형 정보를 담을 수 있는 myint 변수 생성"
//디버깅 모드에서 한줄씩 이동 :: f11
// 값 설정 :: [변수이름] = [값];
// int myInt;	double myReal;	char myChar;
// printf() 로 변수값 출력하기
// printf("myInt 값 :: %d", myInt); = %d = myInt값 나열함
// printf("myReal 값 ::");
// printf("myChar 값 ::");
// 이스케이프 문자 :: "문법상 충돌이 일어날 문자 출력"시 사용




#include <stdio.h>

int main() {
	int myint = 4;
	double myReal;
	myReal = 2.5;
	char myChar = 'a';
	printf("myInt 값 :: \"%d\"\n", myint);
	printf("myReal 값 ::'%.1f'\n", myReal);
	printf("myChar 값 ::%c\n", myChar);
}

/*#include <stdio.h>

int main() {
	double myReal;
	myReal = 2.5;
}
*/