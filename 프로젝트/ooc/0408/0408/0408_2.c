// switch ���� : 
// 1. ���� ������ �Է¹ް�. �հ�/���հ� ���� ����� ����϶�
// ������ 60�� �̻��� ��� �հݿ� �ش�



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &num);

	switch (num >= 60) {
	case 1:
			printf("�հ�");
			break;
	default : 
		printf("���հ�");
		break;
	}

}