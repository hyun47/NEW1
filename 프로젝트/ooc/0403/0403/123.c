#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

/*int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf(">");
	}
	else if (a < b) {
		printf("<");
	}
	if (a == b) {
		printf("==");
	}
}	*/		

int main() {
	int coin;
	scanf("%d", &coin);

	if (coin > 0) {
		printf("1.�ݶ�(1000��)\n2.���̴�(1100��)\n3.��ī�� ����Ʈ(1800��)\n4.������(800��)\n5.ī���(2500��)");
		int num1;
		scanf("%d",&num1);
		if (num1 > coin) {
			printf("�ݾ��� �����մϴ�.");
		}
		else if (num1 <= coin) {
			printf("�Ž������� %d �Դϴ�.", coin - num1);
		}
	}

	

}