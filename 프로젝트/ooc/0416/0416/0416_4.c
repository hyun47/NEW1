//3.
//a���� b���� ���ϴ� �Լ��� �����
//1x2x......xb = ��� ����ϰ� ��ȯ�� �ִ� �Լ� �����
//����
//1x2x3x4x5
//total = 120




#include <stdio.h>


int multiply(int a, int b) {
	int result = 1;
	for (int i = a; i <= b; i++) {
		result *= i;
		printf("%d", i);
		if (i != b) {
			printf("x");
		}

	}
	return result;
}


int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	//���� ������ �Լ��� ������� ������ -> �Լ� ȣ���� ������ ��ü�� ���� ����.
	printf("\ntotal :: %d\n", multiply(a, b));

}