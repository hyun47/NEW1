// switch ���� : 
// ������ �Է¹ް�, �̼����� ��� ������ �ش�Ǵ����� ����϶�
// A (100~90)    -> ��Ʈ : ���� �ڸ����� ����. (10. 9. 8. 7. 6.)
// B(80~89)
// C(70~79)
// D(60~69)
// F


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("������ �Է��Ͻÿ�\n");
	scanf("%d", &num);

	switch (num / 10) {            // 0~ 100 -> 0 ~10���� �پ���.
	case 10:
		printf("A");
		break;
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("C");
		break;
	default:printf("F");
	}


}
