#include <stdio.h>

void main5() {
	// ���� ���
	// ���� : 90���̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 70�� �̸��̸� D
	char grade;			// ���
	int score;			// ����

	// ������ �Է¹ް�
	printf("������ �Է��ϼ��� : \n");
	scanf("%d", &score);
	// ������ ���� ����� �˷��ּ���
	// 85��, B���
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
	printf("%d�� %c��� �Դϴ�.\n",score,grade);
}