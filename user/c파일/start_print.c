#include <stdio.h>

int start_number()// 메뉴선택 입력값 받는 함수(1~4값)
{	
	printf("| 프로그램 실행 (1) |\n");	

	printf("| 프로그램 종료 (2) |\n");
	
	printf("| 대칭키 재설정 (3) |\n");
	
	printf("| 고유키 재설정 (4) |\n");
	
	

	int number;// 메뉴선택 입력값 변수 int 타입선언
	scanf("%d", &number);

	return number;	// 입력값 반환

	
}