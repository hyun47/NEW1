// ������(point) :: "����Ű�� ��"
// *, &


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	// ���̳� ���� ����, �ʱ�ȭ
	int n = 10;
	int* num = &n;
	// *num ������ ���ؼ�, n�� �ּҰ��� �������� ���� �ҷ���
	printf("n�� �ּҰ� ::%d\n", num);
	printf("n�� ������ ::%d\n", *num);

	//���ڿ��� ����Ű�� ������ ����(+char) ���
	char name[] = "Yu_jihyun";
	printf("ù��° ���� :: %c\n", name[0]);
	printf("�̸� :: %s\n", name);

	char* ptname = name;
	printf("������� ù��° ���� :: %c\n", *(ptname + 0));
	printf("������� �̸� :: %s\n", ptname);






}