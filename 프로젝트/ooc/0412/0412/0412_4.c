// 포인터 :: "point"+"er" = pointer (가리키는 것)
// &, * 기호를 주로 사용
// 포인터 변수 안에는 ""가리키고자 하는 것의 주소""를 자신의 값으로 가진다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	// 일반적인 변수 사용 -> 변수 선언, 값 설정, 변수 초기화
	int num = 5;
	printf("변수 num의 주소 :: %d\n", &num);
	printf("변수 num의 값 :: %d\n", num);

	// 포인터 변수 사용 -> 변수 선언, 값 설정, 변수 초기화
	int* ptnum;					  //변수 선언 :: (자료형)* (변수이름); = *이 포인터를 의미 -> 인트형의 무언가를 가리킨다.
	ptnum = &num;                 //값 설정 :: (변수이름) = &(가리킬 변수이름)
	printf("ptnum의 값 :: %d\n", ptnum);							    //num의 주소값과 동일
	printf("ptnum 값을 통해 가리킨 변수의 값 :: %d\n", *ptnum);        //num의 값과 동일
}