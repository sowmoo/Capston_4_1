#include "load_key.h"
#include "comapre.h"





void algo()
{	
	int uni_key[10]; //����Ű 1���� �迭 ����	
	int sym_key_start_point[10][3]; //��ĪŰ 2�����迭 ����
	int random_key[10][10][10]; //����Ű 3���� �迭 ����		
	
	load_key(random_key, uni_key, sym_key_start_point); //��ĪŰ ��������Ʈ ����

	compare(random_key, uni_key, sym_key_start_point); //��ȣ�� ����	
	
	
	

	/*
	1. ����Ű ��ĪŰ, ����Ű ����

	2. ��ĪŰ ��Ÿ������Ʈ sym_key.txt ���� �о�� / ����Ű uni_key.txt�� �о��  / random_number.txt ���� �о�� 

	3. ����Ű / ��ĪŰ / ����Ű�� ���� ��ȣ�� (result.txt)�� ������ 	

	4. random_number.txt���ϻ��� 
	
	*/
		
}
