// 포인터(point) :: "가리키는 것"
// *, &


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	// 포이너 변수 선언, 초기화
	int n = 10;
	int* num = &n;
	// *num 변수를 통해서, n의 주소값과 실질적인 값을 불러옴
	printf("n의 주소값 ::%d\n", num);
	printf("n의 실제값 ::%d\n", *num);

	//문자열을 가리키는 포인터 변수(+char) 사용
	char name[] = "Yu_jihyun";
	printf("첫번째 글자 :: %c\n", name[0]);
	printf("이름 :: %s\n", name);

	char* ptname = name;
	printf("변수사용 첫번째 글자 :: %c\n", *(ptname + 0));
	printf("변수사용 이름 :: %s\n", ptname);






}