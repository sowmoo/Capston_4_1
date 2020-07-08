#include <stdio.h>
#include <Windows.h>
#include "random_number.h"
#include "algo.h"
#include "load_key.h"
#include "file_scan.h"
#include "compare.h"
#include "delete_file.h"

int main()
{
	int random_key[10][10][10];// 높이, 세로, 가로가 모두 10인 int형 3차원 배열 random_key
	int uni_key[10];// 10개의 int형 값을 가지는 배열 uni_key;
	int sym_key_start_point[10][3];// 가로 20, 세로 3인 int형 2차원 배열 sym_key_start_point
	while (1)
	{
		file_scan();// 파일 찾기 // file_scan함수 실행
		system("cls");// 화면 지우기

		random_number(random_key);// 랜덤키에서 random_number를 얻음 //random_number 함수 실행
		load_key(uni_key, sym_key_start_point);	//uni_key, sym_key_start_point에서 load_key를 얻음 // load_key 함수 실행

		algo(random_key, uni_key, sym_key_start_point);		// random_key, uni_key, sym_key_start_point를 비교하여 암호문 일치 불일치 판단
															   // algo 함수 실행


		delete_file();// 파일 삭제
							// delete_file 함수 실행
	}
}