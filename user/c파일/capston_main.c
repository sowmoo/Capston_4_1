#include <stdio.h>
#include "start_print.h"
#include "manu_sel.h"

//파이프라인으로 구조연결을 할 예정이였으나 프로그램 소스들이 꼬일염려가있어서 최대한 void형으로 리턴타입이 없이 코드를 만들었습니다.
//차후 프로그램을 다시만들경우 많은 void형 함수들이 데이터 리턴값을 가지는 함수로 선언될것입니다.


int main()
{	
	
	int start;	
	while (1)
	{
		start = start_number(); // 메뉴선택 입력값 받는 함수 (1~4값)
		manu_sel(start); // 메뉴선택 함수 및 주 프로그램 실행 

		
	}	
}