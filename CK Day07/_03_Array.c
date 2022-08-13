#include <stdio.h>


int main3()
{
	int 가격[5] = { 1000, 2000, 4000, 8000 ,10000 };

	// for문으로 전부 출력
	for (int i = 0; i < 5; i++)
	{
		printf("%d원 입니다.\n",가격[i]);
	}

	printf("%d\n", 가격[1]);			// 2번째방의 값

	return 0;
}