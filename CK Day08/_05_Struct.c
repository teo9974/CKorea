#include <stdio.h>

// ����ü Human (�̸�, ����)
typedef struct Human
{
	char �̸�[20];
	int ����;
}���;
// �Լ�1 Info(Human*) : �̸��� ���� ���
void Info(���* human)
{
	printf("�̸� : %s ���� : %d \n", human->�̸�, human->����);
}
// �Լ�2 Modify(Human*) : scanf�� ���ؼ� ���̸� ����
void Modify(���* human)
{
	printf("���̼��� : ", human->����);
	scanf("%d", &human->����);
}


int main()
{
	// ����ü���� �ʱ�ȭ
	��� ���1 = { "��", 13 };
	��� ���2 = { "ī����", 14 };
	��� ���3 = { "��þ�", 15 };
	��� ���4 = { "����", 16 };
	// ������� �Լ�
	Info(&���1);
	// ���� �Լ�
	Modify(&���1);
	// ������� �Լ�
	Info(&���1);

	return 0;
}