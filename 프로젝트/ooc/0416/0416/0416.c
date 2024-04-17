// 예제 :: int 형 입력 3개 (a,b,c)
// a부터 b까지의 합 (c의 배수는 합에 포함x)
// ex) a=2, b=4, c=3 -> 결과 :: 2+4=6
// 입출력은 main에서 수행, 연산은 함수에서 수행 
//
// 반환형 함수이름(매개변수타입1 매개변수명1 등등)




#include <stdio.h>

//반환형이 int인 이유 :: 함수 결과값이 int일 예정이기 때문
int sum(int a, int b, int c) { 
	printf("덧셈 프로그램을 수행합니다.\n");
	//a랑 b,c라는 값이 sum함수에 없기때문에 이때에는 매개변수 설정을 추가로 해주면됨.


	int result = 0;
	for (int i = a; i <= b; i++) {
		if (i % c != 0) {		//3으로 나누어 떨어지지 않을 때 =3으로 나누어 떨어질때 = (i % 3 ==0) 적고 continu함수
			result += i;

		}
	}

	return result;           //리턴 꼭 추가

}



int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	//int result = 0;
	//for (int i = a; i <= b; i++) {
	//	if (i % c != 0) {		//3으로 나누어 떨어지지 않을 때 =3으로 나누어 떨어질때 = (i % 3 ==0) 적고 continu함수
	//		result += i;

	//	}
	//}

	printf("결과 :: %d\n", sum(a, b, c));

}