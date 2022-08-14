#include <stdio.h>

// 구조체 Human (이름, 나이)
typedef struct Human
{
	char 이름[20];
	int 나이;
}사람;
// 함수1 Info(Human*) : 이름과 나이 출력
void Info(사람* human)
{
	printf("이름 : %s 나이 : %d \n", human->이름, human->나이);
}
// 함수2 Modify(Human*) : scanf를 통해서 나이를 수정
void Modify(사람* human)
{
	printf("나이수정 : ", human->나이);
	scanf("%d", &human->나이);
}


int main()
{
	// 구조체변수 초기화
	사람 사람1 = { "진", 13 };
	사람 사람2 = { "카르마", 14 };
	사람 사람3 = { "루시안", 15 };
	사람 사람4 = { "나미", 16 };
	// 정보출력 함수
	Info(&사람1);
	// 수정 함수
	Modify(&사람1);
	// 정보출력 함수
	Info(&사람1);

	return 0;
}