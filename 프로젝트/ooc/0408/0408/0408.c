// 森薦 :: 慎庚切研 脊径閤壱, 企社庚切 鋼穿背辞 窒径馬奄

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	char alphabet;
//	printf("慎庚切研 脊径背爽室推.");
//	scanf("%c", &alphabet);
//
//	// 企社庚切 鋼穿 -> 井酔税 呪 室亜走
//	// 企庚切 脊径閤澗 井酔 ->社庚切 /	社庚切 脊径閤澗 井酔 ->企庚切  /	慎庚切亜 焼観 庚切研 閤澗 井酔->拭君
//	if ('A' <= alphabet && alphabet <= 'Z') { // 65 <= alphabet <=90 戚櫛 税耕亜 業旭陥
//		printf("企庚切 ->社庚切 痕発衣引 :: %c", alphabet + 32);
//
//	}
//	else if ('a' <= alphabet && alphabet <= 'z') {
//		printf("社庚切 ->企庚切 痕発衣引 :: %c", alphabet - 32);
//	}
//	else {
//		printf("慎庚切研 脊径背爽室推");
//	}
//}

//森薦 :: 葵(1~3)聖 脊径閤壱, 唖 井酔拭 魚虞 働舛 葵聖 窒径馬虞.
//	1. 葵 脊径閤奄
//	2. 唖 井酔拭 魚虞 働舛 葵 窒径馬奄. (1精 亜是 2澗 左 3精 爽股)
//		1)脊径葵戚 1昔 井酔
//		2)脊径葵戚 2昔 井酔
//		3)脊径葵戚 3昔 井酔
//		4)1~3 戚須税 脊径葵昔 井酔 (else)

int main() {
	int num;
	printf("1採斗 3猿走税 収切 掻 葵聖 脊径馬獣神.\n");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("亜是 ぞさぞ\n");
		break;
	case 2:
		printf("郊是 ぞさぞ\n");
		break;
	case 3:
		printf("左 ぞさぞ\n");
		break;

	default:
		printf("陥獣 脊径馬獣神\n");
		break;
	}
	// break庚 幻蟹檎 戚楕生稽 戚疑
}
		
	//switch (痕呪) {
	//case 葵1 :  -> 痕呪税 葵戚 葵1析 "井酔"
	//	痕呪 == 葵1析 凶, 呪楳拝 誤敬庚;
	//}
	//default : 是 井酔亜 乞砧 焼観 井酔 呪楳拝 誤敬庚 (=else)
	// break :: "悪薦 掻舘" -> 薄仙 紗背赤澗 {} 瞬聖 纏窒敗.