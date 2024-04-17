// 지역 변수 (local) :: "특정 지역에서만" 사용할 수 있는 변수
//				"특정 지역" ::{}쌍 안
// 지역 변수는 "선언문 이후"부터 "선언된 공간이 끝나는 구간({})"까지 살아있다 = } 만남과 동시에 변수 소멸.

// 전역 변수 (global) :: 프로그램이 시작할 때 생성, 프로그램이 종료할 때 소멸
//						-> 어떤 함수에서든 값을 공유해서 사용할 수 있는 변수





#include <stdio.h>	

int global = 3;
int var;			//쓰레기 값이 아닌-> 자동으로 0이 들어간다
int array[10];      //10개의 배열을 만들었음 -> 초기값으로 쓰레기값이 들어갔다? (x)

void plus_global() {
	global++;
}

//	전역변수는 별도의 값 설정이 없다면 자동으로 0 값을 가진다.
void print() {
	printf("var 값 :: %d\n", var);
	for (int i = 0; i < 10; i++) {
		printf("\n array %d 값 :: %d", i, array[i]);
	}
}


int main() {
	int loca = 0;			//메인 안에 선언됐기 때문에 -> 메인 안에서만 사용o
	if (loca == 0) {
		int num = 5;		//num 변수 생성
		num++;
	}		//num 변수 소멸


	// 전역 변수 사용 예제
	printf("전역변수의 현재 값 ::%d\n", global);
	printf("++global의 현재 값 ::%d\n", ++global);
	plus_global();
	printf("void global의 현재 값 ::%d\n", global);

	print();

}//loca 변수 소멸