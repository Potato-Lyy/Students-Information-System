#include "include.h"

void del()
{
	char Temp;
	char File_Name[50];
	char File_Temp[50];
	char File_Path[70] = {"c:\\ѧ����Ϣ�ļ���\\"};
A:
	rewind(stdin);
	fflush(stdin);

	printf ("��Ҫɾ��ѧ����Ϣ�ļ���?(y/n)\n");
	printf ("�˲������ɻָ�������\n");
	scanf ("%c",&Temp);
	
	if (Temp == 'y' || Temp == 'Y')
	{
		fflush(stdin);
		printf ("��������Ҫɾ����ѧ��������\n");
		scanf ("%s",File_Name);

		strcpy(File_Temp,File_Path);
		strcat (File_Temp,File_Name);
		printf ("File_Temp = %s\n",File_Temp);
		if (remove (File_Temp) == 0)
		{
			printf ("ɾ���ɹ���\n\n");
		}
		else 
		{
			printf ("ɾ��ʧ�ܣ�\n\n");
		}

		goto A;
	}

	else if (Temp == 'n' || Temp == 'N')
	{
		return ;
	}
	else 
	{
		goto A;
	}
	return ;
}