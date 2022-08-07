#include <stdio.h>

int g_num = 1;			// 전역변수 : {}안에서 만들어진 변수가 아님, {}를 벗어날 일이 없음
// 전역변수는 어디서든 사용 가능하나 해제가 안되어 메모리 낭비가 심함 -> 사용자제

int function1() {
	int num = 3333;					// 지역변수 : 만들어진 중괄호를 벗어나면 공간이 없어짐
	return num;
}

int function2()
{
	// 3333출력
	printf("%d \n", function1());
	return function1();
}

int main4() 
{
	function2();
	return 0;
}