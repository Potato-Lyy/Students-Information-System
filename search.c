#include "include.h"

//����ѧ����Ϣ
void search()
{
	FILE* pf_search;
	New_Student Student2;
	char Temp;
	char File_Name[50];
	char File_Temp[70];
	 char File_Path[70] = {"c:\\ѧ����Ϣ�ļ���\\"};
A:
	rewind(stdin);

	printf ("��Ҫ�鿴ѧ����Ϣ��(y/n)\n");
	scanf ("%c",&Temp);
	if (Temp == 'y' || Temp == 'Y')
	{
		printf ("��������Ҫ�鿴��ѧ������:\n");
		scanf ("%s",&File_Name);

		strcpy (File_Temp,File_Path);
		strcat (File_Temp,File_Name);

		if (pf_search = fopen (File_Temp,"r"))
		{
			printf ("���ҵ���ѧ����Ϣ\n");
			Sleep(1000);

			fread(&(Student2),sizeof (Student2),1,pf_search);

			printf ("ѧ��������%s\n",(&Student2)->name);
			printf ("ѧ��ѧ�ţ�%d\n",(&Student2)->Student_ID);
			printf ("ѧ���Ա�%s\n",(&Student2)->sex);
			printf ("ѧ�����䣺%d\n",(&Student2)->age);
			printf ("ѧ���༶��%s\n",(&Student2)->squad);
			printf ("���ĳɼ���%.1f\n",(&Student2)->yuwen);
			printf ("��ѧ�ɼ���%.1f\n",(&Student2)->math);
			printf ("Ӣ��ɼ���%.1f\n",(&Student2)->english);
			printf ("�ܳɼ���%.1f\n",(&Student2)->totle_score);

			goto A;
		}
		else 
		{
			printf ("δ���ҵ���ѧ����Ϣ ! \n");
			printf ("��ȷ��ѧ�������Ƿ���ȷ���� ! \n");

			Sleep (1000);
			goto A;
		}
	}
	
	else if (Temp == 'n' || Temp == 'N')
	{
		return ;
	}

	else 
	{
		goto A;
	}
	fclose(pf_search);
	return;
}