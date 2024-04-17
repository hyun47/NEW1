//2.
//Sec(초) 값을 입력받아서 시간이 h분 m초라는 걸 출력하고 m을 반환하는 함수 구현 
//3600이상의 값을 받으면
//오류 메시지를 출력한다.


#include <stdio.h>

int time(int sec) {
	if (sec >= 3600) {          //에러 메세지 출력
		printf("3600 이상의 값을 입력하였습니다. 다시 실행해주세요\n");
		return 0;
	}
	else {
		//1분 = 60초, 2분 = 120초, ... 1분*60, 2분*60, 3분*60...
		int h = sec / 60;    //분 저장        
		int m = sec % 60;	 //나머지 초 저장
		printf("%d분 %d초\n", h, m);
		return m;
	}


}




int main() {
	int sec;
	scanf("%d", &sec);

	time(sec);	
	
	// 반환값은 main에서 활용x (변수에 저장을 따로 안했기 때문)


}