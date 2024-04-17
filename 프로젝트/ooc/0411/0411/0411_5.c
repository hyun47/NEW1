////* 1차원 배열을 활용하여 아래의 프로그램을 만들어라.
//정보처리기사 필기 응시자의 1~5과목 점수를 "입력받은 뒤"
//합격 / 불합격 여부를 출력하여라.
//(합격 / 불합격 여부만 출력하여도 되고,
//	과락 여부 및 평균 충족 / 미달 여부를 함께 출력하여도 상관없다.)
//
//	이때, 정보처리기사 필기 합격 조건은 아래와 같다.
//	- 각 과목의 점수는 모두 40점 이상이어야 하고
//	- 5과목 점수의 평균은 60점 이상이어야 한다.



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int score[5] = { 0 };
	printf("정보처리기사 1~5과목 점수를 순차적으로 입력하시오.\n");

	for (int i = 0; i < 5; i++) {        //i :: 0~4
		scanf("%d", &score[i]);
	}
	bool pass = true;            //bool타입 만들기 과락/합격 




	// 2. 합격, 불합격 여부 출력 (+ 과락 여부, 총점 통과 여부)
	for (int i = 0; i < 5; i++) {
		printf("%d과목 ::", i + 1);       // i + 1 => 1~5
		if (score[i] >= 40) {       //40점 이상 통과
			printf("통과\n");
		}
		else {
			printf("과락\n");
			pass = false;            //하나라도 과락이 일어나면 안되기 때문에 pass = false;로 바꿈.
		}
	}

	// 3. 총점 통과 여부 (평균이 60점 이상 or 미만인지 파악)
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}
	int average = (double)sum / 5;
	if (average >= 60) {                 //평균값이 60점이상일때 통과인 경우
		printf("평균 %d점으로 통과", average);
	}
	else {								//평균값이 60점  미만일 때 불합격
		printf("평균 %d점으로 불합격", average);
		pass = false;                  // 총점 평균에 대해서도 60점이상이어야 하기 때문에 pass = false;로 바꿈.
	}
	// 4. 합격/불합격 여부 출력하기
	if (pass == true) {                //true값을 유지하고 있다면, 불합격 요소가 없음!!
		printf("\n축하합니다. 정보처리기사필기 시험에 합격하셨습니다.\n");
	}
	else {
		printf("\n정보처리기사필기 시험에 불합격하셨습니다.\n");
	}
}


