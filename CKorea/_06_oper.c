#include <stdio.h>

void main6() {
	// operation : ����
	// ���ڳ����� ����� �����մϴ�.

	// ��Ģ����
	int result1 = 1 + 1;		// ���ϱ�
	int result2 = 1 - 1;		// ����
	int result3 = 2 * 1;		// ���ϱ�
	int result4 = 2 / 1;		// ������
	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d\n", result4);

	int result5 = result1 + result4;
	printf("%d\n", result5);

	// = : ����x, ���α׷��ֿ����� ����
	// �����ʿ� �ִ� ���� ���ʿ� �ִ� ��������� ��´�.

	result1 = result5;
	printf("result1�� ���� %d\n", result1);
	printf("�ٲٱ� �� result5�� �� %d\n", result5);
	result5 = 10;
	printf("�ٲ� �� result5�� �� %d\n", result5);

	// Ctrl + z : �ǵ�����
	// Ctrl + y : �ǵ����� ���
	// Ctrl + d : ���� �ٿ��ֱ�
	// Ctrl + x : �� ����
	// Ctrl + c : �� ����
	// Ctrl + v : �� �ٿ��ֱ�
	// Alt + ��or�Ʒ� : �� ��or�Ʒ��� �̵�
	
}