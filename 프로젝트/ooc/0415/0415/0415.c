// ��°� �Է� :: printf(), scanf()
// ����, ���ڿ� �Է� :: getchar(char), gets(char[]) ->������ ���� x
// %c, %s �ʿ� ���鰪 ('\0')�̳� �ٹٲް�(\n)�� ���� ��� �߻� -> rewind(stdin);��� :: ���۸� ����ִ� ����


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int num;
	char ch, c;
	scanf("%d %c", &num, &ch);     //->ex) %c  %c� �浹�� ������ ���   scanf("%d %c %c", &num, &ch, &c);
	rewind(stdin);
	scanf("%c", &c);
	printf("%d %c %c", num, ch, c);


}