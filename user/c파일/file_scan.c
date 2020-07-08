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
			printf("임의값(random_number) 을 받지 못했습니다.\n");
			count++;
			i=i+2;
		}

		if (0 != _access("c:\\capston_temp\\sym_key.txt", 0))
		{
			printf("대칭키값(sym_key) 을 받지 못했습니다.\n");
			count++;
			i=i+2;
		}
		if (0 != _access("c:\\capston_temp\\uni_number.txt", 0))
		{
			i++;
			printf("고유키값(uni_key) 을 받지 못했습니다.\n");
			count++;
		}

		if (count == 0)
		{
			break;
		}
		i=i+2;
		printf("다시한번 확인해주세요 !!\n");
		system("cls");
		
	}
		
	
}