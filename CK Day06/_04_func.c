#include <stdio.h>

int g_num = 1;			// �������� : {}�ȿ��� ������� ������ �ƴ�, {}�� ��� ���� ����
// ���������� ��𼭵� ��� �����ϳ� ������ �ȵǾ� �޸� ���� ���� -> �������

int function1() {
	int num = 3333;					// �������� : ������� �߰�ȣ�� ����� ������ ������
	return num;
}

int function2()
{
	// 3333���
	printf("%d \n", function1());
	return function1();
}

int main4() 
{
	function2();
	return 0;
}