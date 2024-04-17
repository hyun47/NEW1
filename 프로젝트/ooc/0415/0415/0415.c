// 출력과 입력 :: printf(), scanf()
// 문자, 문자열 입력 :: getchar(char), gets(char[]) ->설명은 따로 x
// %c, %s 쪽에 공백값 ('\0')이나 줄바꿈값(\n)이 들어가는 경우 발생 -> rewind(stdin);사용 :: 버퍼를 비워주는 역할


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int num;
	char ch, c;
	scanf("%d %c", &num, &ch);     //->ex) %c  %c까리 충돌이 생겼을 경우   scanf("%d %c %c", &num, &ch, &c);
	rewind(stdin);
	scanf("%c", &c);
	printf("%d %c %c", num, ch, c);


}