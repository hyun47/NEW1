// 백준 예제 문제 2243
// 알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.
// 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.
// 첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char ch[101];
	scanf("%s", &ch);
	int length = strlen(ch);   //길이를 저장하는 변수 필요/ 문자열의 길이를 구하는 식
	printf("%d",length);
}