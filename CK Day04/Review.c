#include <stdio.h>

void main0() {
	// 조건문 : if ~ else if ~ else, switch ~ case ~ break
	// if(조건){조건이 맞으면 수행할 문장}
	// switch(){}
	
	int num = 10;

	// ==, >, <, >=, <= : 맞으면 1, 틀리면 0
	if (num == 0) {		// if : (조건)가 맞으면 {조건이 맞으면 수행할 문장} 실행
		printf("숫자는 0과 같다.\n");
	}
	else if (num == 10) {				// else if : if의 (조건)가 틀리면 {조건이 맞으면 수행할 문장} 실행
		printf("숫자는 10과 같다.\n");
	}
	else if (num == 20) {			// else if : if와 위쪽 else if가 틀리면 실행
		printf("숫자는 20과 같다.\n");
	}
	else {				// else : if와 else if의 (조건)가 틀리면 {조건이 맞으면 수행할 문장} 실행
		printf("숫자는 0이 아니다.\n");
	}

	switch (num){
	case 0:
		printf("숫자는 0과 같다.\n");
		break;
	case 10:
		printf("숫자는 10과 같다\n");
		break;
	case 20:
		printf("숫자는 20과 같다\n");
		break;
	default:
		printf("일치하는 숫자가 없다.\n");
		break;
	}
}