#include <stdio.h>

void main2() {
	// ���� ����� �� ���� �����ʹ� �����س���. : ����
	char name = 'E';		// ���� char : ����
	int number = 123;		// ���� int : ����(����)
	float number2 = 3.14f;		// ���� float : ����(�Ǽ�)

	// ���� : �������
	// ������������� ��������̸� = �����Ұ�;

	printf("Hello %c \n", name);		// ���� ���
	printf("Hello %c \n", name);
	printf("Hello %d \n", number);		// ���� ���
	printf("Hello %f \n", number2);		// �Ҽ����ִ� ���� ���

	// %c : �ѱ���
	// %d : ����
	// %f : �Ҽ��� �ִ� ����
	// %s : ��������
}