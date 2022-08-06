#include <stdio.h>

// Sum
void Sum(int n, int m) {
	int result = n + m;
	printf("%d \n", result);
}
// Sub
void Sub(int n, int m) {
	int result = n - m;
	printf("%d \n", result);
}
// Mul
void Mul(int n, int m) {
	int result = n * m;
	printf("%d \n", result);
}
// Div
void Div(int n, int m) {
	int result = n / m;
	printf("%d \n", result);
}

// 숫자 2개를 받아서 각각 절댓값으로 만들어 더하기 (절대값 : 마이너스면 플러스로 바꿈)
void a(int n, int m) {
	if (n < 0) {
		n = n * -1;
	}
	if (m < 0) {
		m = m * -1;
	}
	int result = n + m;
	printf("%d \n", result);
}
// 숫자 2개를 받아서 각각 절대값으로 만들어 빼기 (절대값 : 마이너스면 플러스로 바꿈)
void b(int n, int m) {
	if (n < 0) {
		n = n * -1;
	}
	if (m < 0) {
		m = m * -1;
	}
	int result = n - m;
	printf("%d \n", result);
}

// C언어의 시작점은 main() 함수이다.
int main6() {
	Sum(2, 2);

	Sub(2, 2);

	Mul(2, 2);

	Div(2, 2);

	a(-3, 2);		//5

	b(-5, -1);		// 4

	return 0;

}