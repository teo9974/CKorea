#include <stdio.h>

void main1() {
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", i);
		sum += i;
	}

	sum = 0;
	sum += 0;		// sum = sum + 0;		// 0 + 0 �ϰ� ����
	sum += 1;		// sum = sum + 1;		// 0 + 1 �ϰ� ����
	sum += 2;		// sum = sum + 2;		// 1 + 2 �ϰ� ����
	sum += 3;		// sum = sum + 3;		// 3 + 3 �ϰ� ����
	sum += 4;		// sum = sum + 4;		// 6 + 4 �ϰ� ����		// sum = 10;

	printf("���� : %d \n", sum);

	// sum = sum + 1;
	// sum += 1;
	// sum++;

	// sum = sum + 2;
	// sum += 2;

	sum = 0;
	sum + 2;				//������ ���ؼ� sum�� ���� ����
	printf("%d \n", sum);		// sum = 0;
}