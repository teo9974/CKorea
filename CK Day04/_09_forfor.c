#include <stdio.h>

void main9() {

	for (int k = 2; k <= 9; k++) 
	{
		printf("======%d��======\t", k);
	}
	printf("\n");

	// ������
	for (int i = 0; i <= 9; i++) 
	{
		for (int j = 2; j <= 9; j++) 
		{
			printf("%d��%d = %d\t", j, i, j * i);
		}
		printf("\n");
	}
}