#include <stdio.h>

int main1()
{
	// 배열 : 변수들을 나열 (차곡차곡 나열)
	// 배열이 만들어진 배경
	int 아메리카노 = 1500;
	int 카페라떼 = 2500;
	int 카라멜마끼아또 = 4500;

	// 카페 메뉴의 가격을 전부 보여주기
	printf("%d원\n", 아메리카노);
	printf("%d원\n", 카페라떼);
	printf("%d원\n", 카라멜마끼아또);

	int 카페메뉴[3];			// [0][1][2]
	카페메뉴[0] = 1500;
	카페메뉴[1] = 2500;
	카페메뉴[2] = 4500;			// [1500][2500][4500]

	for (int i = 0; i < 3; i++)
	{
		printf("%d원\n", 카페메뉴[i]);			// 3개도 1번, 100개도 1번, 만개도 1번
	}

	char a = 'a';		//[]
	char aa[3];
	aa[0] = 'a';
	aa[1] = 'a';
	aa[2] = '\0';
	printf("%s\n", aa);

	char hello1[6] = "hello";			// [h][e][l][l][o][\0]
	char hello2[6];
	hello2[0] = 'h';
	hello2[1] = 'e';
	hello2[2] = 'l';
	hello2[3] = 'l';
	hello2[4] = 'o';
	hello2[5] = '\n';
	char hello3[6] = { 'h','e','l','l','o','\0' };

	int 카페메뉴2[5] = { 1000, 2000, 3000, 4000, 5000 };
	char 이름[7] = "홍길동";			//문자배열(문자열)



	return 0;
}