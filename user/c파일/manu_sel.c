#include <stdio.h>
#include <Windows.h>
#include "uni_key.h"
#include "sym_key.h"
#include "algo.h"
#include "file_scan.h"
#include "delete_txt_file.h"


void manu_sel(int start)
{
	// void�� �Լ� Ÿ��. ���� ������ capston_main.c���� ����ȴ�.
	switch (start)// 1. �˰��� ����  2. ���α׷� ����  3. ��ĪŰ �缳��  4. ����Ű �缳��
	{
		case 1:  // �˰��� ����
		{
			make_start_file();
			file_scan();
			printf("�˰��� ���� ���α׷��� �����ϵ��� �ϰڽ��ϴ�.\n");
			algo(); // ��ȣ�� �����ϴ� �˰��� �Լ�ȣ��(algo.h ������Ͽ� ����)
			printf("�˰��� ������ �Ϸ�Ǿ����ϴ�\n");

			while (1)
			{
				if (0 == _access("c:\\capston_temp\\open.txt", 0))
				{
					printf("���� ���Ƚ��ϴ�.");
					Sleep(3000);
					break;
				}

				if (0 == _access("c:\\capston_temp\\close.txt", 0))
				{
					printf("���� ���µ� �����߽��ϴ�.");
					Sleep(3000);
					break;
				}
				
			}
			delete_file(); // ���� ����
			
			system("cls");// ȭ�� �����
			break;
		}
		case 2:// ���α׷� ����
		{
			printf("���α׷��� �����ϵ��� �ϰڽ��ϴ�.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			
			exit(0); // ���α׷� ����(system��ɾ�)
		}
		case 3:// ��ĪŰ �缳��
		{
			printf("��ĪŰ�� �ٽü����մϴ�.\n");			
			sym_key(); // ��ĪŰ �缳�� �Լ�ȣ��(sys_key.txt ���� �����)
			system("pause>null");
			system("cls");		
			break;
		}
		case 4:// ����Ű �缳��
		{
			printf("����Ű�� �ٽü����մϴ�.\n");
			uni_key();// ����Ű �缳�� �Լ�ȣ��(uni_key.xt ���� �����)
			system("pause>null");
			system("cls");
			break;
		}
		default:// �޴� �Է°���(1~4����) ���� ������
		{
			printf("�޴������ 1 ~ 4 �� �ֽ��ϴ�.\n");
			system("cls");
			break;
		}	
	}
}