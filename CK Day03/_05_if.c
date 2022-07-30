#include <stdio.h>

void main5() {
	// 학점 계산
	// 점수 : 90점이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 70점 미만이면 D
	char grade;			// 등급
	int score;			// 점수

	// 점수를 입력받고
	printf("점수를 입력하세요 : \n");
	scanf("%d", &score);
	// 점수에 따라서 등급을 알려주세요
	// 85점, B등급
	if (score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}
	printf("%d점 %c등급 입니다.\n",score,grade);
}