// ���� :: ���� �Է� �ް�, Ŀ�� �Ǵ� ���� ���ſ��θ� �Է� �ް�
//			����� ����ϱ�


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int coin;
	printf("���� �־��ּ���.\n");
	scanf("%d", &coin);

	// Ŀ��(2500��) ���� ���� �Է¹ޱ� (0 �Ǵ� 1 �Է�)
	int coffee;
	printf("Ŀ�Ǹ� �����Ͻðڽ��ϱ�? (0 �Ǵ� 1 �Է�)\n");
	scanf("%d", &coffee);

	// ��(1000��) ���� ���� �Է¹ޱ� (Ŀ�Ǹ�, ����, Ŀ�Ƕ� �� �Ѵ�)
	int bread;
	printf("���� �����Ͻðڽ��ϱ�? (0 �Ǵ� 1 �Է�)\n");
	scanf("%d", &bread);
	
	
	//if-else if-else // if�� ���
	if (coffee == 1 && coin >= 2500) {
		if (coin >= 2500) {
			printf("Ŀ�ǰ� ���Խ��ϴ�.\n");
			coin -= 2500;
		}
		else {
			printf("Ŀ�Ǹ� �����ϱ⿡ ���� �����մϴ�.\n");
		}
	
	
		if (coin >= 1000) {
			printf("���� ���Խ��ϴ�.\n");
			coin -= 1000;
		}
		else {
			printf("���� �����ϱ⿡ ���� �����մϴ�.\n");
		}

	}
	printf("���α׷��� �����մϴ�.\n");
}