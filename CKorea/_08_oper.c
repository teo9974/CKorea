#include <stdio.h>

void main8() {
	int result = 3 - 5;
	printf("3 - 5 = %d\n", result);

	// 1 + 1
	int result1 = 1 + 1;
	printf("1 + 1 = %d\n", result1);
	// 2 - 1
	int result2 = 2 - 1;
	printf("2 - 1 = %d\n", result2);
	// 3 x 3
	int result3 = 3 * 3;
	printf("3 x 3 = %d\n", result3);
	// 10 / 2
	int result4 = 10 / 2;
	printf("10 ÷ 2 = %d\n", result4);
	// 10.0 / 3.0 (소수점 두번째까지)
	float result5 = 10.0 / 3.0;
	printf("10.0 ÷ 3.0 = %.2f\n", result5);
	
	// % : 나머지 구하기 (배수를 구할때, 홀짝을 구분할 때 사용...)
	int result9 = 10 % 3;		// 10 % 3 = 1
	printf("10을 3으로 나눈 후 나머지 값은 %d이다.", result9);

	// printf("1 + 1 = %d\n2 - 1 = %d\n3 x 3 = %d\n10 ÷ 2 = %d\n10.0 ÷ 3.0 = %.2f\n", result1, result2, result3, result4, result5);
}