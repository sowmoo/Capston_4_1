#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void uni_key()
{

	srand(time(NULL));

	int uni_key[10];

	int i;
	for (i = 0; i < 10; i++)
	{
		uni_key[i] = (rand() % 127) + 1;
	}

	FILE* fp;

	fp = fopen("c:\\capston_temp\\uni_number.txt", "wt");
	if (fp == NULL)
	{
		printf("uni_number.txt ���Ⱑ ���� �߽��ϴ�.\n");
		return 1;
	}
	for (i = 0; i < 10; i++)
	{
		fprintf(fp,"%d ", uni_key[i]);
	}

	fclose(fp);
	printf("uni_number.txt���� ���Ⱑ ���� �߽��ϴ�.\n");
	return 0;

}