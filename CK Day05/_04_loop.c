#include <stdio.h>

void main4() {
	//break �� continue�� Ȱ��
	for (int i = 0; i < 100; i++)
	{
		// 1~50 �� ¦���� ������
		if (i > 50) {
			break;
		}
		if(i % 2 == 1 || i == 0) {
			continue;
		}
		printf("%d \n", i);
	}
}