#include <stdio.h>

void make_start_file() // ���α׷� B���� ������ �����ּ��Դϴ�. (���� ���ڼ������� ���ʿ� ���� �����Դϴ�.)
{
	FILE* fp;
	char msg[6] = "start";
	int i;

	fp = fopen("c:\\capston_temp\\start_programming.txt", "wt");  //start_programming.txt ���� ���� 
	if (fp == NULL)
	{
		printf("�������� ������ ���� �߽��ϴ�.\n");
		return 1;
	}

	for (i = 0; i < 5; i++) //"start" start_programming.txt�� ��� 
	{
		fprintf(fp, "%c", msg[i]);
	}

	fclose(fp);

	printf("�������� ���� �Ϸ�\n");
	return 0;
}