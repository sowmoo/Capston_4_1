#include <stdio.h>
#include <io.h>
#include <Windows.h>

void file_scan()
{
	int count;
	while (1)
	{
		count = 0;
		int i = 24;
		if (0 != _access("c:\\capston_temp\\random_number.txt", 0))
		{
			printf("���ǰ�(random_number) �� ���� ���߽��ϴ�.\n");
			count++;
			i=i+2;
		}

		if (0 != _access("c:\\capston_temp\\sym_key.txt", 0))
		{
			printf("��ĪŰ��(sym_key) �� ���� ���߽��ϴ�.\n");
			count++;
			i=i+2;
		}
		if (0 != _access("c:\\capston_temp\\uni_number.txt", 0))
		{
			i++;
			printf("����Ű��(uni_key) �� ���� ���߽��ϴ�.\n");
			count++;
		}

		if (count == 0)
		{
			break;
		}
		i=i+2;
		printf("�ٽ��ѹ� Ȯ�����ּ��� !!\n");
		system("cls");
		
	}
		
	
}