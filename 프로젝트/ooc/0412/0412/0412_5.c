//1.  int 형 배열 arr[5]를 선언해두고
//		5개의 숫자를 입력받는다.
// 2. 포인터 변수 ptArr를 선언한다.
//3. ptArr를 통하여 arr의 값들을 출력하는 방법 2가지를 찾아보시오.



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {      //for쓰는 이유는 5번 돌려야해서 (5번 입력하기 위한 공식)
		scanf("%d", &arr[i]);
	}
	
	int* ptArr;
	ptArr = arr;                 // ptArr = &arr; ->이렇게 할 필요가 없음. arr:: 단독으로쓰면, 배열의 시작주소를 반환.
	for (int i = 0; i < 5; i++) {
			//* 사용하는 경우
		printf("%d ", *(ptArr+i));     //printf("%d ", *ptArr); =>쓰면 "ptArr=arr의 첫번째 값이 저장된 공간"만 5번 출력된다. +i는 배열번호를 의미 []역할 

			//* 사용하지 않는 경우
		printf("%d\n", ptArr[i]);    //ptArr 단독사용결과 = arr단독사용 결과와 동일 


	}

}