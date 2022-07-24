#include <stdio.h>

void main2() {
	int 숫자;		// %d
	char 문자;		// %c
	char 문자열[100];		// %s
	float 실수;		// %f

	// 입력
	printf("숫자를 입력하세요 : ");
	scanf("%d", &숫자);
	printf("실수를 입력하세요 : ");
	scanf("%f", &실수);
	printf("문자열을 입력하세요 : ");
	scanf("%s", &문자열);
	// scanf("%d %f %c %s", &숫자, &실수, &문자, &문자열);
	// 출력
	printf("내가 입력한 숫자는 : %d\n", 숫자);
	printf("내가 입력한 실수는 : %.2f\n", 실수);
	// printf("내가 입력한 문자는 : %c\n", 문자);
	printf("내가 입력한 문자열은 : %s\n", 문자열);

}