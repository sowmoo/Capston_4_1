#include <stdio.h>
#include <io.h>
#include <Windows.h>

void file_scan()
{
	int count;
	int result;
	while (1)
	{
		count = 0; // count���� 0���� �ʱ�ȭ
		char start[6] = "start"; // ������ start�迭�� "start"�� �ʱ�ȭ
		char start_1[6]; // ������ strat_1 �迭 ����

		if (0 == _access("c:\\capston_temp\\start_programming.txt", 0)) // ������ �����ϴ��� Ȯ�� 
		{
			printf("���������� ã�ҽ��ϴ�\n");
			count++; // count�� ����
		}

		if (count == 1) // ������ ã���� ���
		{
			printf("�������� �ε忡 �����߽��ϴ�\n");
			Sleep(1000);
			system("cls"); // ȭ�� �����
			break;
		}

		printf("���������� ã�� ���߽��ϴ�. �ٽ�Ȯ�����ּ���\n");	
		system("cls");
	}
}