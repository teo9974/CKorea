#include <stdio.h>

// �Լ� : �����ڰ� ���� ����� ���
// ������ : ���α׷��� �� �������ִ� ��� (+,-,,==,>=)

// �Ѽ�
// �ڷ��� �Լ���(){}

// ���޹��� ���� ���� ���밪���� ���� ���ϴ� ���
void AbsPlus(int num1, int num2) {			// ����  2���� ���޹޴� �Լ�
	int num3 = 0, num4 = 0, result = 0;			// AbsPlus���� ���� ������ AbsPlus�� ������ ������(��������)
	if (num1 < 0) {
		num3 = num1 * (-1);			// num1�� ������ ����� �ٲ� num3�� �ִ´�.
	}
	else {
		num3 = num1;			// num1�� ����� �״�� num3�� �ִ´�.
	}
	if (num2 < 0) {
		num4 = num2 * (-1);			// ������ -1 ���ؼ�
	}
	else
		num4 = num2;			// ����� �״��
	result = num3 + num4;
	printf("%d \n", result);			// ���ϱ� ��ɰ��� ��������� ����� ���ؼ� �ӽ÷� ����

}

// ���޹��� ���� ���� ���밪���� ���� ���ϴ� ���
void AbsMinus(int num1, int num2) {			// ����  2���� ���޹޴� �Լ�
	int num3 = num1;			// �������� : 
	int num4 = num2;
	int result = 0;

	if (num1 < 0) {
		  num3 = num3 * (-1);
	}
	if (num2 < 0) {
		num4 = num4 * (-1);
	}
	result = num3 - num4;
	printf("%d \n", result);			// ���ϱ� ��ɰ��� ��������� ����� ���ؼ� �ӽ÷� ����

}

// ���� 3���� ���ϴ� �Լ�
void Plus3(num1, num2, num3) {
	int result = num1 + num2 + num3;
	printf("%d \n", result);
}

int main0() {
	// ������Ʈ�� �����ϸ� main()�Լ��� �����Ѵ�.
	AbsPlus(3, 4);			// 3 + 4 == 7

	AbsPlus(-3, 4);			// |(-3)| + 4 == 7

	AbsPlus(3, -4);			// 3 + |(-4)| == 7

	AbsPlus(-3, -4);			// |(-3)| + |(-4)| == 7
	
	AbsMinus(3, 4);			// 3 - 4 == -1

	AbsMinus(-3, 4);			// |(-3)| - 4 == -1

	AbsMinus(3, -4);			// 3 - |(-4)| == -1

	AbsMinus(-3, -4);			// |(-3)| - |(-4)| == -1
	
	Plus3(1, 2, 3);

	return 0; 
}