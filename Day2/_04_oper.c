#include <stdio.h>

void main4() {
	int num = 0;

	// 대입
	num = 3;

	// 연산 후 대입
	num = 3 + 5;

	printf("%d \n", num);

	// 내가 갖고 있는 값에서 5를 더한다. (누적연산자)
	num = 3;
	num = num + 5;
	printf("%d\n", num);		// = 왼쪽 : 공간, = 오른쪽 : 값

	num = 3;		// 대입연산자는 안에있는 값을 지우고 들어감
	num += 5;		// num = num + 5;	8	// 누적연산
	num -= 5;		// num = num - 5;	3
	num /= 2;		// num = num / 2;	1
	num *= 3;		// num = num * 3;	3
	
	num++;			// 1 누적덧셈 ==> num += 1	// 증감연산자
	num--;			// 1 누적뺄셈 ==> num -= 1

	// C++ ==> C언어에서 조금만 업그레이드했다.
}
