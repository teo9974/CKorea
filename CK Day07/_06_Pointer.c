#include <stdio.h>

void Add(int num)			// ���� ���� 
{
	num += 3;
}

void Add2(int* num)			// �ּ�(��ġ)�� ���޹���
{
	*num += 3;				// num�� �ּҸ� �������Ͽ� ���� ����
	// &num : num�� �ּ�
	// num�� ��
	// *&num == num
}


int main6()
{
	// �����ʹ� ��ġ�� �̿��ϴ� ���
	int num1 = 0;
	Add2(&num1);			// num1�� �ּҰ��� ����

	printf("%d \n", num1);

	// & : �ּ�
	// * : ������ (��, �ڷ��� �տ� ���� *�� �ڷ����� �ǹ�)
	// ���� �����Ҷ��� * : ����Ʈ ���� ����
	int* num2;			// ������ ���� ����
	num2 = &num1;			// num2�� num1�� �ּ�
	*num2;			// num2�� ��� ������ �ּ�

	num1 = 88;
	printf("%d \n", *num2);			// num1 ���



	return 0;
}