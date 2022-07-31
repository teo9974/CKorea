#include <stdio.h>

void main4() {

	int flag = 0;
	while(flag < 5) {
		// 횟수를 위해 만든 flag도 다른곳에 사용 가능 (flag도 변수)
		printf("지금은 %d번째 수행중\n", flag+1);

		// while 안에서 if사용 가능
		if (flag > 2) {
			printf("2를 초과했습니다. \n");
		}
		flag++;
	}
}