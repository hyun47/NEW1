//1.  int �� �迭 arr[5]�� �����صΰ�
//		5���� ���ڸ� �Է¹޴´�.
// 2. ������ ���� ptArr�� �����Ѵ�.
//3. ptArr�� ���Ͽ� arr�� ������ ����ϴ� ��� 2������ ã�ƺ��ÿ�.



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {      //for���� ������ 5�� �������ؼ� (5�� �Է��ϱ� ���� ����)
		scanf("%d", &arr[i]);
	}
	
	int* ptArr;
	ptArr = arr;                 // ptArr = &arr; ->�̷��� �� �ʿ䰡 ����. arr:: �ܵ����ξ���, �迭�� �����ּҸ� ��ȯ.
	for (int i = 0; i < 5; i++) {
			//* ����ϴ� ���
		printf("%d ", *(ptArr+i));     //printf("%d ", *ptArr); =>���� "ptArr=arr�� ù��° ���� ����� ����"�� 5�� ��µȴ�. +i�� �迭��ȣ�� �ǹ� []���� 

			//* ������� �ʴ� ���
		printf("%d\n", ptArr[i]);    //ptArr �ܵ������ = arr�ܵ���� ����� ���� 


	}

}