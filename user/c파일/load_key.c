#include <stdio.h>

void load_key(int random_key[10][10][10], int uni_key[10], int sym_key_start_point[10][3])
{
	//void�� �Լ� Ÿ��, ���� ������ algo.c���� ����
	// ����Ű ���� 1���� �迭 char Ÿ�� ���� 
	// ��ĪŰ ���� 2���� �迭 int Ÿ�� ����  
	// ����Ű ���� 3���� �迭 int Ÿ�� ����
	FILE* fps;
	fps = fopen("c:\\capston_temp\\uni_number.txt", "rt"); //uni_number.txt�� �б���� ����
	if (fps == NULL) 
	{
		printf("uniŰ �ε����\n");
		return 1;
	}
	int i,j,k; // int�� �Լ�Ÿ�� i,j,k ����
	for (i = 0; i < 10; i++) 
	{
		fscanf(fps, "%d",&uni_key[i]); //uni_number.txt�� ���� �о��
	}

	fclose(fps); //uni_key.txt ���ϴ���

	fps = fopen("c:\\capston_temp\\sym_key.txt", "rt"); //sym_key.txt�� �б���� ����
	if (fps == NULL) // ������ �����ÿ� ����
	{
		printf("symŰ �ε����\n");
		return 1;
	}

	
	for (i = 0; i < 10; i++) 
	{
		fscanf(fps, "%d %d %d\n", &sym_key_start_point[i][0], &sym_key_start_point[i][1], &sym_key_start_point[i][2]);		
	}
	fclose(fps); // sym_key_starting_point.txt ���� ����
	

	fps = fopen("c:\\capston_temp\\random_number.txt", "r"); //random_number.txt���� ���� 
	if (fps == NULL)
	{
		printf("random_number txt���� ���Ⱑ ���� �߽��ϴ�.\n");
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
	fclose(fps); //random_number.txt ���� �ݱ� 
}