#include <stdio.h>

int function3(int* p_num) {
	int num = 3333;					// �������� 
	*p_num = num;					// �Ѱܹ��� ��ġ���ٰ� num���� ����

	return 0;
}

int function4(int num)
{
	// 3333���
	printf("%d \n", num);
}

int main5()
{
	// ������ : C�� ����ϴ� ����
	int num = 0;
	int* p_num = &num;
	function3(p_num);			// num��ġ�� �����ϰ�
	function4(num);				// �ѱ��

	return 0;
}

