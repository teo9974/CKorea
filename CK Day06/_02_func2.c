#include <stdio.h>

//Plus : 숫자 2개 더하기
int Plus(int n1, int n2)
{
	int result = n1 + n2;
	return result;
}
//Minus : 숫자 2개 빼기
int Minus(int n1, int n2) 
{
	int result = n1 - n2;
	return result;
}
//Mul : 숫자 2개 곱하기
int Mul(int n1, int n2)
{
	int result = n1 * n2;
	return result;
}
//Div : 숫자 2개 나누기
double Div(int n1, int n2)
{
	double result = (double)n1 / n2;			// 정수끼리 나누면 정수 결과가 나오기 때문에 하나를 실수로 바꿔줌
	return result;
}

int main2() 
{
	int plus_result = 0;
	int minus_result = 0;
	int mul_result = 0;
	double div_result = 0;

	// 함수 사용
	plus_result = Plus(3, 2);
	minus_result = Minus(8, 2);
	mul_result = Mul(10, 7);
	div_result = Div(10, 3);
	//

	printf("%d \n", plus_result);
	printf("%d \n", minus_result);
	printf("%d \n", mul_result);
	printf("%.2f \n", div_result);

	return 0;
}