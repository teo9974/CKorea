#include <stdio.h>


int main3()
{
	int ����[5] = { 1000, 2000, 4000, 8000 ,10000 };

	// for������ ���� ���
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� �Դϴ�.\n",����[i]);
	}

	printf("%d\n", ����[1]);			// 2��°���� ��

	return 0;
}