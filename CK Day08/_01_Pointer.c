#include <stdio.h>

int myFunc(int* address)
{
	int num = 50;				// ���� ����
	*address = num;				// �޾ƿ� �ּҰ��� �������Ͽ� num�� ����

}



int main1()
{
	int num = 30;				// ���� ����
	int* p_num = &num;				// ������ ������ �ּҰ� ����
	myFunc(p_num);				// �Լ��� �ּҰ��� ����
		
	printf("%d \n", num);				// �ּҰ��� �������ؼ� ���� ���������� ������ ���� �ٲ�

	return 0;
}