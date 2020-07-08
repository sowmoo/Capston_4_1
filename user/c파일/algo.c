#include "load_key.h"
#include "comapre.h"





void algo()
{	
	int uni_key[10]; //공개키 1차원 배열 선언	
	int sym_key_start_point[10][3]; //대칭키 2차원배열 선언
	int random_key[10][10][10]; //랜덤키 3차원 배열 선언		
	
	load_key(random_key, uni_key, sym_key_start_point); //대칭키 시작포인트 생성

	compare(random_key, uni_key, sym_key_start_point); //암호문 생성	
	
	
	

	/*
	1. 랜덤키 대칭키, 공개키 설정

	2. 대칭키 스타팅포인트 sym_key.txt 파일 읽어옴 / 고유키 uni_key.txt로 읽어옴  / random_number.txt 파일 읽어옴 

	3. 공개키 / 대칭키 / 랜덤키를 통해 암호문 (result.txt)를 생성함 	

	4. random_number.txt파일삭제 
	
	*/
		
}
