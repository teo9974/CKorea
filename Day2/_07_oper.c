#include <stdio.h>

void main() {
	// �н��� ��Ģ����
	int num1 = 0, num2 = 0;
	char name[50];
	// �̸��� �Է��ϼ��� (���)
	// �̸� (�Է�)
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name);
	printf("�̸� : %s\n", name);

	// 1+1
	printf("1. 1 + 1 = ");
	scanf("%d", &num1);
	(2 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");

	// 23-12
	printf("2. 23 - 12 = ");
	scanf("%d", &num1);
	(11 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");

	// 14��3
	printf("3. 14 �� 3 = ");
	scanf("%d", &num1);
	(42 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");

	// 25��5
	printf("4. 25 �� 5 = ");
	scanf("%d", &num1);
	(5 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");

	printf("----------------------\n");
	printf("1���� : 2 \n");
	printf("2���� : 11 \n");
	printf("3���� : 42 \n");
	printf("4���� : 5 \n");
}