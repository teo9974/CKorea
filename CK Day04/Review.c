#include <stdio.h>

void main0() {
	// ���ǹ� : if ~ else if ~ else, switch ~ case ~ break
	// if(����){������ ������ ������ ����}
	// switch(){}
	
	int num = 10;

	// ==, >, <, >=, <= : ������ 1, Ʋ���� 0
	if (num == 0) {		// if : (����)�� ������ {������ ������ ������ ����} ����
		printf("���ڴ� 0�� ����.\n");
	}
	else if (num == 10) {				// else if : if�� (����)�� Ʋ���� {������ ������ ������ ����} ����
		printf("���ڴ� 10�� ����.\n");
	}
	else if (num == 20) {			// else if : if�� ���� else if�� Ʋ���� ����
		printf("���ڴ� 20�� ����.\n");
	}
	else {				// else : if�� else if�� (����)�� Ʋ���� {������ ������ ������ ����} ����
		printf("���ڴ� 0�� �ƴϴ�.\n");
	}

	switch (num){
	case 0:
		printf("���ڴ� 0�� ����.\n");
		break;
	case 10:
		printf("���ڴ� 10�� ����\n");
		break;
	case 20:
		printf("���ڴ� 20�� ����\n");
		break;
	default:
		printf("��ġ�ϴ� ���ڰ� ����.\n");
		break;
	}
}