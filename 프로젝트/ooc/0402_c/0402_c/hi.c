// ���� :: "���� �� �ִ�" ����
// �޸� ���� �� �� ������ ���Ƿ� ��� "Ư�� ������ ���� �� �ִ�" ����.
// ���� ��������-> ���� ����(����) :: [�ڷ���] [�����̸�];
// �ڷ��� :: ����. ������ (int) int myint; "������ ������ ���� �� �ִ� myint ���� ����"
//����� ��忡�� ���پ� �̵� :: f11
// �� ���� :: [�����̸�] = [��];
// int myInt;	double myReal;	char myChar;
// printf() �� ������ ����ϱ�
// printf("myInt �� :: %d", myInt); = %d = myInt�� ������
// printf("myReal �� ::");
// printf("myChar �� ::");
// �̽������� ���� :: "������ �浹�� �Ͼ ���� ���"�� ���




#include <stdio.h>

int main() {
	int myint = 4;
	double myReal;
	myReal = 2.5;
	char myChar = 'a';
	printf("myInt �� :: \"%d\"\n", myint);
	printf("myReal �� ::'%.1f'\n", myReal);
	printf("myChar �� ::%c\n", myChar);
}

/*#include <stdio.h>

int main() {
	double myReal;
	myReal = 2.5;
}
*/