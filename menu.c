#include "include.h"

void menu()		//�Զ��庯��ʵ�ֲ˵�����
{
	system("cls");
	system("mode con: cols=82 lines=29");		//�ı䴰�ڴ�С	
	system("color fc");			//�ı�������ɫ
	system("title ѧ������ϵͳ");		//�ı������
	printf ("\n\n\n\n\n");
	printf ("\t\t|---------------STUDENT--------------|\n");	
	printf ("\t\t|\t  0. �˳�		     |\n");//exit
	printf ("\t\t|\t  1. ¼��ѧ���ɼ���Ϣ	     |\n");//input record
	printf ("\t\t|\t  2. ����ѧ���ɼ���Ϣ	     |\n");//search record
	printf ("\t\t|\t  3. ɾ��ѧ���ɼ���Ϣ	     |\n");//delete record
	printf ("\t\t|\t  4. �޸�ѧ���ɼ���Ϣ	     |\n");//modify record
	printf ("\t\t|\t  5. ѧ���ɼ�����	     |\n");//order
	printf ("\t\t|\t  6. ѧ������ͳ��	     |\n");//number
	printf ("\t\t|------------------------------------|\n\n");
	printf ("\t\t\tchoose(0-6):");
}