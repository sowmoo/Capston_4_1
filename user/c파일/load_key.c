#include <stdio.h>

void load_key(int random_key[10][10][10], int uni_key[10], int sym_key_start_point[10][3])
{
	//void형 함수 타입, 실제 실행은 algo.c에서 실행
	// 공개키 변수 1차원 배열 char 타입 선언 
	// 대칭키 변수 2차원 배열 int 타입 선언  
	// 랜덤키 변수 3차원 배열 int 타입 선언
	FILE* fps;
	fps = fopen("c:\\capston_temp\\uni_number.txt", "rt"); //uni_number.txt를 읽기모드로 오픈
	if (fps == NULL) 
	{
		printf("uni키 로드실패\n");
		return 1;
	}
	int i,j,k; // int형 함수타입 i,j,k 선언
	for (i = 0; i < 10; i++) 
	{
		fscanf(fps, "%d",&uni_key[i]); //uni_number.txt의 값을 읽어옴
	}

	fclose(fps); //uni_key.txt 파일닫음

	fps = fopen("c:\\capston_temp\\sym_key.txt", "rt"); //sym_key.txt를 읽기모드로 오픈
	if (fps == NULL) // 파일이 없을시에 실행
	{
		printf("sym키 로드실패\n");
		return 1;
	}

	
	for (i = 0; i < 10; i++) 
	{
		fscanf(fps, "%d %d %d\n", &sym_key_start_point[i][0], &sym_key_start_point[i][1], &sym_key_start_point[i][2]);		
	}
	fclose(fps); // sym_key_starting_point.txt 파일 닫음
	

	fps = fopen("c:\\capston_temp\\random_number.txt", "r"); //random_number.txt파일 열기 
	if (fps == NULL)
	{
		printf("random_number txt파일 열기가 실패 했습니다.\n");
		return 1;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				fscanf(fps, "%d ", &random_key[i][j][k]);
			}
		}
	}
	fclose(fps); //random_number.txt 파일 닫기 
}