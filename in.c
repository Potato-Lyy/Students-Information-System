#include "include.h"

//¼��ѧ����Ϣ
void in ()
{
	char Temp;
	char File_Name[50];
	char File_Temp[100];
	char File_Path[50] = {"c:\\ѧ����Ϣ�ļ���\\"};
	FILE* pf_in;
	New_Student Student1;		//�½�һ���ṹ��
A:
	rewind(stdin);		//����һ�»�����
	
	printf ("��Ҫ���һ��ѧ����Ϣ��(y/n)\n");
	scanf ("%c",&Temp);
	
	if (Temp == 'y' || Temp == 'Y')
	{
		printf ("׼������ѧ����Ϣ...\n");
		printf ("���޸���Ŀ��Ϣ������0����\n\n");

		printf ("������ѧ������\n");
		scanf ("%s",(&Student1)->name);
		printf ("������ѧ��ѧ��\n");
		scanf ("%d",&((&Student1)->Student_ID));		
		printf ("������ѧ���Ա�\n");
		scanf ("%s",(&Student1)->sex);
		printf ("������ѧ������\n");
		scanf ("%d",&((&Student1)->age));
		printf ("������ѧ���༶\n");
		scanf ("%s",(&Student1)->squad);
		printf ("������ѧ�������ĳɼ�\n");
		scanf ("%f",&((&Student1)->yuwen));
		printf ("������ѧ������ѧ�ɼ�\n");
		scanf ("%f",&((&Student1)->math));
		printf ("������ѧ����Ӣ��ɼ�\n");
		scanf ("%f",&((&Student1)->english));
		(&Student1)->totle_score = (&Student1)->yuwen + (&Student1)->math + (&Student1)->english;
		printf ("��ѧ�����ܳɼ�Ϊ:%.1f\n",(&Student1)->totle_score);

		strcpy(File_Name,(&Student1)->name);		//���������Ƶ�File_Name�ַ���
		strcpy(File_Temp,File_Path);				//��Ĭ��·�����Ƶ�Temp�ַ�����
		strcat(File_Temp,File_Name);				//����ȫ·�����ļ���������
		//c:\\ѧ����Ϣ�ļ���\\name		����Ӧ�������״̬

		pf_in = fopen(File_Temp,"wb+");

		//fwrite���������������ݴ����ĵ�
		fwrite(&(Student1),sizeof(Student1),1,pf_in);
		printf ("����ɹ� ! \n");
		
		fclose (pf_in);
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
	fclose (pf_in);
	return ;
}