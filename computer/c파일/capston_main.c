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
	int random_key[10][10][10];// ����, ����, ���ΰ� ��� 10�� int�� 3���� �迭 random_key
	int uni_key[10];// 10���� int�� ���� ������ �迭 uni_key;
	int sym_key_start_point[10][3];// ���� 20, ���� 3�� int�� 2���� �迭 sym_key_start_point
	while (1)
	{
		file_scan();// ���� ã�� // file_scan�Լ� ����
		system("cls");// ȭ�� �����

		random_number(random_key);// ����Ű���� random_number�� ���� //random_number �Լ� ����
		load_key(uni_key, sym_key_start_point);	//uni_key, sym_key_start_point���� load_key�� ���� // load_key �Լ� ����

		algo(random_key, uni_key, sym_key_start_point);		// random_key, uni_key, sym_key_start_point�� ���Ͽ� ��ȣ�� ��ġ ����ġ �Ǵ�
															   // algo �Լ� ����


		delete_file();// ���� ����
							// delete_file �Լ� ����
	}
}