#include <stdio.h>
#include <Windows.h>
#include "print_result.h"

void algo(int random_key[10][10][10], int uni_key[10], int sym_key_start_point[10][3])
{
	int i, j, k;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				printf("%d ", random_key[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	Sleep(2000);
	compare(random_key, uni_key, sym_key_start_point);// random_key와 uni_key와 sym_key_start_point를 비교하는 함수
	print_result();	// 암호문 일치 불일치 판단	

}