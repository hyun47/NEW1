// �ڷ��� :: "������ ����"
// �⺻���� �ڷ����� signed�� -> ����, ��� ��� ǥ���Ҽ��ִ�.
// unsigned��-> 0�� ����� ǥ���Ҽ��ִ�.
// 
// ������- int	short	long
//	shor myShort; -> int���� ����
//	int myInt; -> -21�� ~ +21�� ���� (��ǥ��)
//	*unsigned int myUint; -> 0 ~ +42�� 
//	long myLong; -> int���� ����
// 
// �Ǽ���- double("%lf")	float("%f")
//	double myDouble -> ���е�[�Ҽ��� ǥ�� ����]�� ���� (��ǥ��) ������ �� ��Ȯ�ϴ�.
//	float myFloat 
// �������� 'char'�� ��


#include <stdio.h>

int main() {
	int myInt = 151;
	double myDouble = 159.9;
	char myChar = 'a';
	printf("�ȳ��ϼ���, �������Դϴ�^^.\n");
	printf("���� :: %d (��)\n", myInt);
	printf("Ű :: %.1lf (cm)\n", myDouble);
	printf("������ :: %c��\n", myChar);
	printf("�� ��Ź�帳�ϴ�.\n");
}