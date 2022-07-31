#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main6() {
	// for를 사용해서 1 ~ 10까지 출력
	// 1부터 10까지의 합
	int 합계 = 0;
	for (int i = 0; i < 10; i++) {
		합계 += (i + 1);
		printf("%d\n", i + 1);
	}
	printf("%d\n", 합계);
	
	// 값을 입력받고 합계를 구하세요
	int b = 0;
	int sum = 0;
	printf("숫자 몇까지 다 더할까요? ");
	scanf("%d", &b);
	for (int a = 0; a < b; a++) {
		sum += (a + 1);
	}
	printf("숫자를 다 더한 값은 %d입니다.\n",sum);
}