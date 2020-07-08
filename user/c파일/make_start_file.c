#include <stdio.h>

void make_start_file() // 프로그램 B에게 보내는 시작주소입니다. (차후 전자서명기능을 이쪽에 넣을 예정입니다.)
{
	FILE* fp;
	char msg[6] = "start";
	int i;

	fp = fopen("c:\\capston_temp\\start_programming.txt", "wt");  //start_programming.txt 파일 생성 
	if (fp == NULL)
	{
		printf("시작파일 생성에 실패 했습니다.\n");
		return 1;
	}

	for (i = 0; i < 5; i++) //"start" start_programming.txt에 기록 
	{
		fprintf(fp, "%c", msg[i]);
	}

	fclose(fp);

	printf("시작파일 생성 완료\n");
	return 0;
}