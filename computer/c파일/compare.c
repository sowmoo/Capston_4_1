#include <stdio.h>
#include <Windows.h>

void compare(int random_key[10][10][10], int uni_key[10], int sym_key_start_point[10][3])
{
	int i, j, k;
	int x, y, z;
	int end_count;	
	int safe_counter;
	FILE* fp;	


	fp = fopen("c:\\capston_temp\\compare_result_computer.txt", "wt");

	if (fp == NULL)
	{
		printf("temp 실패\n");
		return 0;
	}

	for (i = 0; i < 10; i++)
	{
		z = sym_key_start_point[i][0];
		y = sym_key_start_point[i][1];
		x = sym_key_start_point[i][2];
		end_count = 0;
		safe_counter = 0;

		while (end_count < 2)
		{

			if (uni_key[i] == random_key[z][y][x])
			{				
				fprintf(fp, "%d ", 1);
			}
			else
			{
				fprintf(fp, "%d ", 0);
			}
			x++;

			if (x > 9)
			{
				x = 0;
				safe_counter++;
			}

			if (x == 5 && safe_counter == 1)
			{
				if(end_count == 0)
				{
					z = sym_key_start_point[i][2];
					y = sym_key_start_point[i][0];
					x = sym_key_start_point[i][1];
					end_count++;
					safe_counter = 0;
					
				}
				if(end_count == 1)
				{
					z = sym_key_start_point[i][1];
					y = sym_key_start_point[i][2];
					x = sym_key_start_point[i][0];
					safe_counter = 0;
					end_count++;
					
				}
				if(end_count == 2)
				{
					z = sym_key_start_point[i][0];
					y = sym_key_start_point[i][1];
					x = sym_key_start_point[i][2];
					safe_counter = 0;
					end_count++;
				
				}				
			}
		}
	}		
	
	fclose(fp);

	printf("프로그램 암호키 생성이 완료되었습니다.\n");
	Sleep(1000);
	system("cls");


}