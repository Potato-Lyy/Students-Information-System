#include "include.h"

//������
int main ()
{	
	int n;

	//���������ʱ��,�ʹ������ļ���
	_mkdir("c:\\ѧ����Ϣ�ļ���");
	
	//��ӡ��Ŀ¼
	menu();

	//�����menu�����������ѡ��
	scanf ("%d",&n);

	while (n)
	{
		rewind(stdin);
		switch (n)
		{
		case 1:
			in();
				break;
		case 2:
			search();
				break;
		case 3:
			del();
				break;
		case 4:
			modify();
				break;
		case 5:
			order();
				break;
		case 6:
			number();
				break;
		default:
			break;
		}

		system("cls");
		menu();
		scanf ("%d",&n);	//�ٴε���Ŀ¼���ɼ�������
		rewind(stdin);
	}
	printf ("��лʹ��\n :-) \n");
	printf ("��������˳�������\n");
	getch();
	return 0;
}