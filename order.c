#include "include.h"

//ѧ���ɼ�����
void order()
{
	int i = 0,j,k,n;		//ѭ������
	FILE* pf_order;	
	FILE* pf2_order;

	/*�洢�ı��ļ��ڵ������ļ���*/
	char File_Name[50];	
	char File_Temp[70];
	char File_Path[50] = {"c:\\ѧ����Ϣ�ļ���\\"};
	int Temp;	//����ѡ�������
	char Temp1;

	New_Student StudentData[MAX_PATH];	//�洢����ѧ����Ϣ�Ľṹ��
	New_Student *temp,TEMP;		//��Ϊ�м�ֵ

A:
	rewind(stdin);
	printf ("��Ҫ����ѧ���ɼ���?(y/n)\n");
	scanf ("%c",&Temp1);

	if (Temp1 == 'Y' || Temp1 == 'y')
	{
	//��·���µ������ļ���ֱ�Ӵ��뵽һ��txt�ļ���
	system ("dir c:\\ѧ����Ϣ�ļ���\\*. /b > c:\\ѧ����Ϣ�ļ���\\��ʱ�ļ�.txt");

	pf_order = fopen ("c:\\ѧ����Ϣ�ļ���\\��ʱ�ļ�.txt","r");	//�򿪱����������ļ�����txt
	
	if (!pf_order)
	{
		printf ("δ�������ļ��������ԣ�\n");
	}
		
	while(fscanf(pf_order,"%s",File_Name) != EOF)	//��ȡ��ʱ�ļ��������
	{
		//�������ļ�����·����������
		strcpy(File_Temp,File_Path);
		strcat(File_Temp,File_Name);
			
		pf2_order = fopen(File_Temp,"rb+");		//��ѧ���ļ�
		
		fread(&(StudentData[i]),sizeof(New_Student),1,pf2_order);	//��ȡѧ���ļ���Ϣ���ṹ��

		i++;
		fclose(pf2_order);
	}

	/*ͨ��ѭ����������ѧ������ȫ�����浽�˽ṹ��������*/
	//����������ֻ��Ҫ������
B:
	rewind(stdin);
	
	printf ("1.�ܷ�\n2.����\n3.��ѧ\n4.Ӣ��\n5.�˳�\n");
	printf ("��������ʲô������������:\n");
	scanf ("%d",&Temp);

	switch (Temp)
	{
	case 1:	//�����ܷ�
		
		//ԭѧ���ɼ�
		printf ("\tԭѧ���ֳܷɼ�\n");
		printf ("============================\n");
		for (k = 0;k < i;k++)
		{
			printf (" ||%10s||",StudentData[k].name);
			printf ("  %5.2f||\n",StudentData[k].totle_score);
		}
		printf ("============================\n\n");


		temp = (New_Student*)malloc(i*sizeof(StudentData));
		for (j = 0;j < i;j++)
		{
			temp[j] = StudentData[j];
		}
		
		for (j = 0;j < i;j++)
		{
			for (k = j+1,n = j;k < i;k++)
			{
				if (temp[n].totle_score < temp[k].totle_score)
				{
					n = k;
				}
				if (n != j)
				{
					TEMP = temp[j];
					temp[j] = temp[n];
					temp[n] = TEMP;
				}
			}
		}

		printf ("\n\nѧ���ֳܷɼ���������:\n\n");
		printf ("============================\n");
		for (j = 0;j < i;j++)
			printf (" ||%10s||	%5.2f||\n",temp[j].name,temp[j].totle_score);
		printf ("============================\n\n");
		free(temp);
			break;
	case 2://��������

		//ԭѧ���ɼ�
		printf ("\tԭѧ�����ĳɼ�\n");
		printf ("============================\n");
		for (k = 0;k < i;k++)
		{
			printf (" ||%10s||",StudentData[k].name);
			printf ("  %5.2f||\n",StudentData[k].yuwen);
		}
		printf ("============================\n\n");


		//Ϊ�ṹ��ָ�����i����С�Ľṹ���ڴ�
		temp = (New_Student*)malloc(i*sizeof(StudentData));
		//��ԭ�ṹ��ȫ����ֵΪ�ṹ��ָ��
		for (j = 0;j < i;j++)
		{
			temp[j] = StudentData[j];
		}
		
		for (j = 0;j < i;j++)
		{
			for (k = j+1,n = j;k < i;k++)
			{
				if (temp[n].yuwen  < temp[k].yuwen)
				{
					n = k;
				}
				if (n != j)
				{
					TEMP = temp[j];
					temp[j] = temp[n];
					temp[n] = TEMP;
				}
			}
		}

		printf ("\n\nѧ�����ĳɼ���������:\n\n");
		printf ("============================\n");
		for (j = 0;j < i;j++)
			printf (" ||%10s||  %5.2f||\n",temp[j].name,temp[j].yuwen);
		printf ("============================\n\n");
		free(temp);
			break;
	case 3:	//������ѧ

		//ԭѧ���ɼ�
		printf ("\tԭѧ����ѧ�ɼ�\n");
		printf ("============================\n");
		for (k = 0;k < i;k++)
		{
			printf (" ||%10s||",StudentData[k].name);
			printf ("  %5.2f||\n",StudentData[k].math);
		}
		printf ("============================\n\n");


		temp = (New_Student*)malloc(i*sizeof(StudentData));
		for (j = 0;j < i;j++)
		{
			temp[j] = StudentData[j];
		}
		
		for (j = 0;j < i;j++)
		{
			for (k = j+1,n = j;k < i;k++)
			{
				if (temp[n].math  < temp[k].math)
				{
					n = k;
				}
				if (n != j)
				{
					TEMP = temp[j];
					temp[j] = temp[n];
					temp[n] = TEMP;
				}
			}
		}

		printf ("\n\nѧ����ѧ�ɼ���������:\n\n");
		printf ("============================\n");

		for (j = 0;j < i;j++)
			printf (" ||%10s||	%5.2f||\n",temp[j].name,temp[j].math);
		printf ("============================\n\n");
		free(temp);
			break;
	case 4:	//����Ӣ��

		//ԭѧ���ɼ�
		printf ("\tԭѧ��Ӣ��ɼ�\n");
		printf ("============================\n");
		for (k = 0;k < i;k++)
		{
			printf (" ||%10s||",StudentData[k].name);
			printf ("  %5.2f||\n",StudentData[k].english);
		}
		printf ("============================\n\n");


		temp = (New_Student*)malloc(i*sizeof(StudentData));
		for (j = 0;j < i;j++)
		{
			temp[j] = StudentData[j];
		}
		
		for (j = 0;j < i;j++)
		{
			for (k = j+1,n = j;k < i;k++)
			{
				if (temp[n].english  < temp[k].english)
				{
					n = k;
				}
				if (n != j)
				{
					TEMP = temp[j];
					temp[j] = temp[n];
					temp[n] = TEMP;
				}
			}
		}

		printf ("\n\nѧ��Ӣ��ɼ���������:\n\n");
		printf ("============================\n");
		for (j = 0;j < i;j++)
			printf (" ||%10s||	%5.2f||\n",temp[j].name,temp[j].english);
		printf ("============================\n\n");
		free(temp);
			break;
	case 5:	//�˳�
		/*�˳�ʲô������д��break�󣬾�����ѭ����*/
			goto C;
	default:
		printf ("�����������������\n");
		Sleep(500);
		goto A;
		break;
	}

	}

	else if (Temp1 == 'n' || Temp1 == 'N')
	{
		return ;
	}

	else 
	{
		goto A;
	}

	getchar();
	printf ("����Ҫ�����鿴����������(y/n)\n");
	scanf ("%c",&Temp1);
	

	if (Temp1 == 'Y' || Temp1 == 'y')
	{
		goto B;
	}
C:
	rewind(stdin);

	fclose (pf_order);
	system ("del c:\\ѧ����Ϣ�ļ���\\��ʱ�ļ�.txt");
	getch();

	return;
}