#include <stdio.h>						
#include <conio.h>						
#include <Windows.h>					
#include <mmsystem.h>					// ��������� �ڵ带 �߰�
#pragma comment(lib, "winmm.lib")		// ���̺귯���� �ڵ带 �߰�

int main() {
	int �� = 260, �� = 290, �� = 330, �� = 340, �� = 380, �� = 490, �� = 490, ������ = 510;
	char c;
	
	// ���ѹݺ�
	while (1) {
		if (_kbhit())				// Ű���� ��Ʈ (Ű���尡 ���� �� ����)
		{
			c = _getch();			// Ű���� �Է°��� ������ ����
			switch (c)
			{
			case'a':
				Beep(��, 200);
				printf("��");		// 0.09�� ����
				Sleep(90);
				break;
			case's':
				Beep(��, 200);
				printf("��");
				Sleep(90);
				break;
			case'd':
				Beep(��, 200);
				printf("��");
				Sleep(90);
				break;
			case'f':
				Beep(��, 200);
				printf("��");
				Sleep(90);
				break;
			case'j':
				Beep(��, 200);
				printf("��");
				Sleep(90);
				break;
			case'k':
				Beep(��, 200);
				printf("��");
				Sleep(90);
				break;
			case'l':
				Beep(��, 200);
				printf("��");
				Sleep(90);
				break;
			case 59:				// ;
				Beep(������, 200);
				printf("��");
				Sleep(90);
				break;
			case 27:				// ESC
				printf("\n���α׷� ����\n");
				break;
			}
			if (c == 27) {
				break;
			}
		}
	}

	return 0;
}

