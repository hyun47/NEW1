#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int coin;
//	scanf("%d", &coin);
//
//	printf("1.�ݶ�(1000��)\n2.���̴�(1100��)\n3.��ī�� ����Ʈ(1800��)\n4.������(800��)\n5.ī���(2500��)");
//	int drink;
//	scanf("%d", &drink);
//
//	if (drink == 1) {
//		coin -= 1000;
//	}
//
//	if (coin >= 0) {
//		printf("�ݶ� �帮�ڽ��ϴ�");
//	}
//	if (coin > (coin - 1000)){
//		printf("�Ž������� %d �Դϴ�.", coin - 1000);
//	}
//	else {
//		printf("�ݾ��� �����մϴ�.");
//	}
//}
int main() {
	int coin;              //1.���� �Է�
	printf("���� �־��ּ���.");
	scanf("%d", &coin);
	
	printf("1.�ݶ� (1000��)\n");     //2.�޴�����
	printf("2. ���̴�(1100��)\n");
	printf("3.��ī��(1800��)\n");
	printf("4.������(800��)\n");
	printf("5.ī�����(2000��)\n");

	int drink;
	printf("������� �������ּ���.\n");
	scanf("%d", &drink);

	if (drink == 1) {
		coin -= 1000;
	}
	else if (drink == 2) {
		coin -= 1100;
	}
	else if (drink == 3){
		coin -= 1800;
	}
	else if (drink == 4) {
		coin -= 800;
	}
	else if (drink == 5) {
		coin -= 2000;
	}
	if (coin < 0) {
		printf("���� �����մϴ�.");
	}
	else {
		printf("�ش� ���ᰡ �����Ǿ����ϴ�.\n");
		if (coin > 0) {                                  //if ��ø�� ���
			printf("�Ž������� %d�Դϴ�.\n", coin);
		}
									//(��� ���� ����->else�� ���� �ۼ� ���ص� ��)
	}


}