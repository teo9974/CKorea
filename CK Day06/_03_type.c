#include <stdio.h>

int main3()
{
	// 변수, 함수 > 자료형
	// 1byte == 8bit : 256가지의 경우의 수 (2^8)
	// 1bit : 2가지의 경우의 수 (2^1) == 0 or 1 (0,1)
	// 2bit : (2^2)가지의 경우의 수 == 00 or 01 or 10 or 11 (00,01,10,11)

	char c;				// -128 ~ 127 (영어 26가지, 한글 256가지를 넘어감)					// 문자
	short s;			// 2byte -32768 ~ 32767 (65536가지 경우의 수, 2^16개)				// 작은 정수 (~65535)
	int i;				// 4byte (-21억 ~ 21억)												// 정수
	long ll;			// 8byte (정수)														// 큰 정수
	float f;			// 4byte (소수점)													// 실수
	double d;			// 8byte (소수점)													// 큰 실수

	unsigned char uc;	// 0~255
	unsigned int ui;	// 0~42억

	return 0;
}