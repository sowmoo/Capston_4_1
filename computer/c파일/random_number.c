#include <stdio.h>
#include <time.h> 
#include <stdlib.h> //srand 등의 함수 정의 헤더 파일
#include <Windows.h>

void random_number(int random_key[10][10][10])

{
	srand(time(NULL)); 
	
	int i, j, k;

	for (i = 0; i < 10; i++) 
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++) 
			{
				random_key[i][j][k] = (rand() % 127) + 1; 
			}
		}
	}

	FILE* fp;

	fp = fopen("c:\\capston_temp\\random_number.txt", "w"); 

	if (fp == NULL) // 파일이 없다면
	{
		printf("실패 했습니다.\n");
		return 1;
	}	
	for (i = 0; i < 10; i++) 
	{
		for (j = 0; j < 10; j++) 
		{
			for (k = 0; k < 10; k++)
			{
				fprintf(fp, "%d ", random_key[i][j][k]); 
			}			
		}		
	}
	
	fclose(fp);
	printf("임의의수 생성완료 \n");
	Sleep(1000);
	system("cls");

}