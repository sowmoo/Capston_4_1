#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct random_number 
{
	int x, y, z;
};
void sym_key() // 대칭키 재설정 함수
{
	srand(time(NULL)); // 난수 초기화
	int x, y, z;
	int i; // 대칭키 변수 int 타입선언

	
	struct random_number array[10];  

	for (i = 0; i < 10; i++) 
	{
		array[i].x = (rand() % 10) + 1; // 1~10 범위의 난수 생성하여 array[i].x대입
		array[i].y = (rand() % 10) + 1; // 1~10 범위의 난수 생성하여 array[i].y대입
		array[i].z = (rand() % 10) + 1; // 1~10 범위의 난수 생성하여 array[i].z대입

		if (array[i].x == array[i].y || array[i].y == array[i].z || array[i].z == array[i].x)
		{  // array[i]의 x y z가 중복될경우 i값을 -1시킴 ( 결과적으로 중복된 열 다시설정 )
			--i;
		}

	}
	
	FILE* fp;
	
	fp = fopen("c:\\capston_temp\\sym_key.txt", "wt"); //sym_key.txt파일 열기
	if (fp == NULL) // 파일 오류 검사
	{
		printf("sym_key.txt파일 열기 실패\n");
		return 1;
	}
	else
	{
		printf("sym_key.txt파일 열기 성공\n");
	}

	for (i = 0; i < 10; i++)  
	{
		fprintf(fp, "%d ", array[i].x); //  sym_key.txt파일에 array[i].x값 입력 
		fprintf(fp, "%d ", array[i].y); //  sym_key.txt파일에 array[i].y값 입력
		fprintf(fp, "%d \n", array[i].z); //  sym_key.txt파일에 array[i].z값 입력
	}

	fclose(fp); // sym_key.txt파일 닫기 

	return 0;
	
}