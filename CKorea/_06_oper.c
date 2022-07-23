#include <stdio.h>

void main6() {
	// operation : 연산
	// 숫자끼리는 계산이 가능합니다.

	// 사칙연산
	int result1 = 1 + 1;		// 더하기
	int result2 = 1 - 1;		// 빼기
	int result3 = 2 * 1;		// 곱하기
	int result4 = 2 / 1;		// 나누기
	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d\n", result4);

	int result5 = result1 + result4;
	printf("%d\n", result5);

	// = : 수학x, 프로그래밍에서의 대입
	// 오른쪽에 있는 값을 왼쪽에 있는 저장공간에 담는다.

	result1 = result5;
	printf("result1의 값은 %d\n", result1);
	printf("바꾸기 전 result5의 값 %d\n", result5);
	result5 = 10;
	printf("바꾼 후 result5의 값 %d\n", result5);

	// Ctrl + z : 되돌리기
	// Ctrl + y : 되돌리기 취소
	// Ctrl + d : 복사 붙여넣기
	// Ctrl + x : 줄 제거
	// Ctrl + c : 줄 복사
	// Ctrl + v : 줄 붙여넣기
	// Alt + 위or아래 : 줄 위or아래로 이동
	
}