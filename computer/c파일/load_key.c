#include <stdio.h>
#include <Windows.h>

void load_key(int uni_key[10], int sym_key_start_point[10][3])
{
	FILE* fps;
	fps = fopen("c:\\capston_temp\\uni_number.txt", "rt");
	if (fps == NULL)
	{
		printf("uni키 로드실패\n");
		return 1;
	}
	int i;
	for (i = 0; i < 10; i++)
	{
		fscanf(fps, "%d ", &uni_key[i]);
	}

	fclose(fps);

	fps = fopen("c:\\capston_temp\\sym_key.txt", "rt");
	if (fps == NULL)
	{
		printf("sym키 로드실패\n");
		return 1;
	}


	for (i = 0; i < 10; i++)
	{
		fscanf(fps, "%d %d %d \n", &sym_key_start_point[i][0], &sym_key_start_point[i][1], &sym_key_start_point[i][2]);
	}
	fclose(fps);

	int j;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", uni_key[i]);
	}

	printf("키(key) 로드 성공 \n");
	Sleep(1000);
	system("cls");
}