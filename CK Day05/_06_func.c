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

// ���� 2���� �޾Ƽ� ���� �������� ����� ���ϱ� (���밪 : ���̳ʽ��� �÷����� �ٲ�)
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
// ���� 2���� �޾Ƽ� ���� ���밪���� ����� ���� (���밪 : ���̳ʽ��� �÷����� �ٲ�)
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

// C����� �������� main() �Լ��̴�.
int main6() {
	Sum(2, 2);

	Sub(2, 2);

	Mul(2, 2);

	Div(2, 2);

	a(-3, 2);		//5

	b(-5, -1);		// 4

	return 0;

}