#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ƽ�Ű�ڵ� :: ��ǻ�Ͱ� ���� ������ �ľ��� �� �ֵ���
	//				���� ����-Ư�� ���ڸ� 1:1�� ������Ų ǥ.
	//	'A' :: 65,  'a' :: 97,  '0' :: 48 = �������� �ڵ�� �ܿ��θ� �������� +1�� ������.
	char alpha;
	scanf("%c", &alpha);
	printf("���ڷ� ǥ�� :: %c\n", alpha);
	printf("���ڷ� ǥ�� :: %d\n", alpha);

}