#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct random_number 
{
	int x, y, z;
};
void sym_key() // ��ĪŰ �缳�� �Լ�
{
	srand(time(NULL)); // ���� �ʱ�ȭ
	int x, y, z;
	int i; // ��ĪŰ ���� int Ÿ�Լ���

	
	struct random_number array[10];  

	for (i = 0; i < 10; i++) 
	{
		array[i].x = (rand() % 10) + 1; // 1~10 ������ ���� �����Ͽ� array[i].x����
		array[i].y = (rand() % 10) + 1; // 1~10 ������ ���� �����Ͽ� array[i].y����
		array[i].z = (rand() % 10) + 1; // 1~10 ������ ���� �����Ͽ� array[i].z����

		if (array[i].x == array[i].y || array[i].y == array[i].z || array[i].z == array[i].x)
		{  // array[i]�� x y z�� �ߺ��ɰ�� i���� -1��Ŵ ( ��������� �ߺ��� �� �ٽü��� )
			--i;
		}

	}
	
	FILE* fp;
	
	fp = fopen("c:\\capston_temp\\sym_key.txt", "wt"); //sym_key.txt���� ����
	if (fp == NULL) // ���� ���� �˻�
	{
		printf("sym_key.txt���� ���� ����\n");
		return 1;
	}
	else
	{
		printf("sym_key.txt���� ���� ����\n");
	}

	for (i = 0; i < 10; i++)  
	{
		fprintf(fp, "%d ", array[i].x); //  sym_key.txt���Ͽ� array[i].x�� �Է� 
		fprintf(fp, "%d ", array[i].y); //  sym_key.txt���Ͽ� array[i].y�� �Է�
		fprintf(fp, "%d \n", array[i].z); //  sym_key.txt���Ͽ� array[i].z�� �Է�
	}

	fclose(fp); // sym_key.txt���� �ݱ� 

	return 0;
	
}