// 단어 s와 정수i가 주어졌을 때, (입력)
// s의 i번째 글자를 출력하는 프로그램
// 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어. 단어의 길이는 최대 1000이다.
// 문자열 :: 여러 개의 문자-< 배열 학습이 필요
// "프로그램이 자체적으로 삽입하는 문자열의 끝인 (\0)과 단어의 끝부분 (ex. sport< t)과 충돌이 일어나지 않게 공간을 넉넉히 설정하기.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {       
	
	//1. 문자열(char형 배열), 출력할 문자 위치 입력
	char ch[1001];
	int index;
	scanf("%s %d", &ch, &index);
	//printf("%s %d", ch, index);
	// 2. 정답 출력 (문자열의 문자들 중 "특정 위치의 문자를 출력")
	printf("%c", ch[index - 1]);
}


