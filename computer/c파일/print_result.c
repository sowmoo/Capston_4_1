#include <stdio.h>
#include <string.h>
#include <Windows.h>

void print_result()
{
	FILE* user;
	FILE* computer;

	FILE* open;
	FILE* close;

	user = fopen("c:\\capston_temp\\compare_result_user.txt", "r"); 
	computer = fopen("c:\\capston_temp\\compare_result_computer.txt", "r"); 
	
	
	int a[300];	
	int b[300];

		
	int i;

	for (i = 0; i < 300; i++) 
	{
		fscanf(user, "%d", &a[i]);		
	}
	for (i = 0; i < 300; i++)
	{
		fscanf(computer, "%d", &b[i]);
	}
	
	fclose(user); 
	fclose(computer); 

	int result = 1;
	for (i = 0; i < 300; i++)
	{
		if (a[i] != b[i])
		{
			result = 0;
		}
	}

	if (result == 1) 
	{
		printf("암호문 일치 어서오세요 \n");
		open = fopen("c:\\capston_temp\\open.txt", "wt");
		fclose(open);
		Sleep(2000);
		return 0;
	}
	if(result == 0)
	{
		printf("암호문 불일치 \n");
		close = fopen("c:\\capston_temp\\close.txt", "wt");
		fclose(close);
		Sleep(2000);
		return 0;
	}
	
}


