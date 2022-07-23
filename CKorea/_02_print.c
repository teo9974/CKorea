#include <stdio.h>

void main2() {
	// 자주 사용할 것 같은 데이터는 저장해놓자. : 변수
	char name = 'E';		// 변수 char : 글자
	int number = 123;		// 변수 int : 숫자(정수)
	float number2 = 3.14f;		// 변수 float : 숫자(실수)

	// 변수 : 저장공간
	// 저장공간의형태 저장공간이름 = 저장할값;

	printf("Hello %c \n", name);		// 글자 출력
	printf("Hello %c \n", name);
	printf("Hello %d \n", number);		// 숫자 출력
	printf("Hello %f \n", number2);		// 소수점있는 숫자 출력

	// %c : 한글자
	// %d : 숫자
	// %f : 소수점 있는 숫자
	// %s : 여러글자
}