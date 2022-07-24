#include <stdio.h>

void main() {
	// 학습지 사칙연산
	int num1 = 0, num2 = 0;
	char name[50];
	// 이름을 입력하세요 (출력)
	// 이름 (입력)
	printf("이름을 입력하세요 : ");
	scanf("%s", &name);
	printf("이름 : %s\n", name);

	// 1+1
	printf("1. 1 + 1 = ");
	scanf("%d", &num1);
	(2 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");

	// 23-12
	printf("2. 23 - 12 = ");
	scanf("%d", &num1);
	(11 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");

	// 14×3
	printf("3. 14 × 3 = ");
	scanf("%d", &num1);
	(42 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");

	// 25÷5
	printf("4. 25 ÷ 5 = ");
	scanf("%d", &num1);
	(5 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");

	printf("----------------------\n");
	printf("1번답 : 2 \n");
	printf("2번답 : 11 \n");
	printf("3번답 : 42 \n");
	printf("4번답 : 5 \n");
}