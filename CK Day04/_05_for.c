#include <stdio.h>

void main5() {
	//  while, for �ݺ���
	
	int flag = 0;
	while (flag < 5) {
		printf("flag : %d\n", flag + 1);
		flag++;
	}

	for (int i = 0; i < 5; i++) {
		printf("i = %d\n", i);
	}

	// for(�ʱⰪ; ����; ����){ �ݺ������� ����; }
	
	for (size_t i = 0; i < 5; i++)
	{
		printf("���̸� %d \n", i);
	}


}