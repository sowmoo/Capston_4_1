#include <stdio.h>
#include <Windows.h>
#include "uni_key.h"
#include "sym_key.h"
#include "algo.h"
#include "file_scan.h"
#include "delete_txt_file.h"


void manu_sel(int start)
{
	// void형 함수 타입. 실제 실행은 capston_main.c에서 실행된다.
	switch (start)// 1. 알고리즘 실행  2. 프로그램 종료  3. 대칭키 재설정  4. 고유키 재설정
	{
		case 1:  // 알고리즘 실행
		{
			make_start_file();
			file_scan();
			printf("알고리즘에 따른 프로그램을 시작하도록 하겠습니다.\n");
			algo(); // 암호문 생성하는 알고리즘 함수호출(algo.h 헤더파일에 포함)
			printf("알고리즘 실행이 완료되었습니다\n");

			while (1)
			{
				if (0 == _access("c:\\capston_temp\\open.txt", 0))
				{
					printf("문이 열렸습니다.");
					Sleep(3000);
					break;
				}

				if (0 == _access("c:\\capston_temp\\close.txt", 0))
				{
					printf("문을 여는데 실패했습니다.");
					Sleep(3000);
					break;
				}
				
			}
			delete_file(); // 파일 지움
			
			system("cls");// 화면 지우기
			break;
		}
		case 2:// 프로그램 종료
		{
			printf("프로그램을 종료하도록 하겠습니다.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			
			exit(0); // 프로그램 종료(system명령어)
		}
		case 3:// 대칭키 재설정
		{
			printf("대칭키를 다시설정합니다.\n");			
			sym_key(); // 대칭키 재설정 함수호출(sys_key.txt 파일 재생성)
			system("pause>null");
			system("cls");		
			break;
		}
		case 4:// 고유키 재설정
		{
			printf("고유키를 다시설정합니다.\n");
			uni_key();// 고유키 재설정 함수호출(uni_key.xt 파일 재생성)
			system("pause>null");
			system("cls");
			break;
		}
		default:// 메뉴 입력값이(1~4값이) 맞지 않을때
		{
			printf("메뉴기능은 1 ~ 4 만 있습니다.\n");
			system("cls");
			break;
		}	
	}
}