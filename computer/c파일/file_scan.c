#include <stdio.h>
#include <io.h>
#include <Windows.h>

void file_scan()
{
	int count;
	int result;
	while (1)
	{
		count = 0; // count값을 0으로 초기화
		char start[6] = "start"; // 문자형 start배열을 "start"로 초기화
		char start_1[6]; // 문자형 strat_1 배열 선언

		if (0 == _access("c:\\capston_temp\\start_programming.txt", 0)) // 파일이 존재하는지 확인 
		{
			printf("시작파일을 찾았습니다\n");
			count++; // count값 증가
		}

		if (count == 1) // 파일을 찾았을 경우
		{
			printf("시작파일 로드에 성공했습니다\n");
			Sleep(1000);
			system("cls"); // 화면 지우기
			break;
		}

		printf("시작파일을 찾지 못했습니다. 다시확인해주세요\n");	
		system("cls");
	}
}