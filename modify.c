#include "include.h"

//�޸�ѧ����Ϣ����
/*
	1.��ȡ��Ҫ�޸ĵ�ѧ������
	2.�������ѧ����Ϣ�ȱ��浽һ���ṹ����
	��Ҫ�޸��Ǹ���Ϣ��
	��ӡ���е�����Ŀ¼��������ţ������޸�
	3.�����������뵽�ṹ�壬�ı�ṹ������
	4.�ٽ��ṹ�屣�浽ԭ�ļ�
*/


void modify()
{
	FILE* pf_modify;		//�޸�ǰ���ļ�ָ��
	char Temp;
	int Number;		//�����޸ĵ����к�
	char ChangsName;
	char File_Name[50];
	char File_Temp[70];
	char File_Path[70] = {"c:\\ѧ����Ϣ�ļ���\\"};
	char Del[20] = {"del "};
	New_Student Student3;		//�����е��ļ���Ϣ�����ڴ�
A: 
	rewind(stdin);

	printf ("��Ҫ�޸�ѧ����Ϣ��?(y/n)\n");
	scanf ("%c",&Temp);

	if (Temp == 'y' || Temp == 'Y')
	{
		printf ("��������Ҫ�޸ĵ�ѧ������:\n");
		scanf ("%s",File_Name);

		strcpy(File_Temp,File_Path);	
		strcat(File_Temp,File_Name);	
		
		if (pf_modify = fopen (File_Temp,"rb+"))
		{
			printf ("ѧ������Ϣ��\n");
			fread (&(Student3),sizeof (Student3),1,pf_modify);

			printf ("1.ѧ��������%s\n",(&Student3)->name);
			printf ("2.ѧ��ѧ�ţ�%d\n",(&Student3)->Student_ID);
			printf ("3.ѧ���Ա�%s\n",(&Student3)->sex);
			printf ("4.ѧ�����䣺%d\n",(&Student3)->age);
			printf ("5.ѧ���༶��%s\n",(&Student3)->squad);
			printf ("6.���ĳɼ���%.1f\n",(&Student3)->yuwen);
			printf ("7.��ѧ�ɼ���%.1f\n",(&Student3)->math);
			printf ("8.Ӣ��ɼ���%.1f\n",(&Student3)->english);
			printf ("9.�ܳɼ���%.1f\n",(&Student3)->totle_score);
		}

		else 
		{
			printf ("δ���ҵ���ѧ����Ϣ ! \n");
			printf ("��ȷ��ѧ�������Ƿ���ȷ���� ! \n");

			Sleep (1000);
			goto A;
		}

		printf ("��Ҫ�޸��ĸ���Ϣ�������������:\n");
		scanf ("%d",&Number);

		switch (Number)
		{
		case 1:
			printf ("�������޸ĺ��ѧ������:\n");
			ChangsName = *(&Student3)->name;	//��ȡԴѧ������
			scanf ("%s",(&Student3)->name);
				break;
		case 2:
			printf ("�������޸ĺ��ѧ��ѧ��:\n");
			scanf ("%d",&((&Student3)->Student_ID));
				break;
		case 3:
			printf ("�������޸ĺ��ѧ���Ա�:\n");
			scanf ("%s",(&Student3)->sex);
				break;
		case 4:
			printf ("�������޸ĺ��ѧ������:\n");
			scanf ("%d",&((&Student3)->age));
		case 5:
			printf ("�������޸ĺ��ѧ���༶:\n");
			scanf ("%s",(&Student3)->squad);
				break;
		case 6:
			printf ("�������޸ĺ��ѧ�����ĳɼ�:\n");
			scanf ("%.1f",&((&Student3)->yuwen));
				break;
		case 7:
			printf ("�������޸ĺ��ѧ����ѧ�ɼ�:\n");
			scanf ("%.1f",&((&Student3)->math));
				break;
		case 8:
			printf ("�������޸ĺ��ѧ��Ӣ��ɼ�:\n");
			scanf ("%.1f",&((&Student3)->english));
				break;
		case 9:
			printf ("�������޸ĺ��ѧ���ܷ�:\n");
			scanf ("%.1f",&((&Student3)->totle_score));
				break;
		default:
			printf ("�������\n");
			break;
		}
		
		rewind(pf_modify);	//���ļ���ָ�������ļ��Ŀ�ͷ
		
		//����޸��������Ļ���fk�����ģ��޸ľ��޸��ˣ��������˵��û�

		fwrite (&(Student3),sizeof(Student3),1,pf_modify);	//д�����ݵ��ļ�

		fclose (pf_modify);
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
	fclose(pf_modify);
	return ;
}