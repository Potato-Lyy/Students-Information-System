#include "include.h"

//学生成绩排名
void order()
{
	int i = 0,j,k,n;		//循环变量
	FILE* pf_order;	
	FILE* pf2_order;

	/*存储文本文件内的数据文件名*/
	char File_Name[50];	
	char File_Temp[70];
	char File_Path[50] = {"c:\\学生信息文件夹\\"};
	int Temp;	//排序选项的输入
	char Temp1;

	New_Student StudentData[MAX_PATH];	//存储所有学生信息的结构体
	New_Student *temp,TEMP;		//作为中间值

A:
	rewind(stdin);
	printf ("需要排序学生成绩吗?(y/n)\n");
	scanf ("%c",&Temp1);

	if (Temp1 == 'Y' || Temp1 == 'y')
	{
	//将路径下的所有文件都直接存入到一个txt文件内
	system ("dir c:\\学生信息文件夹\\*. /b > c:\\学生信息文件夹\\临时文件.txt");

	pf_order = fopen ("c:\\学生信息文件夹\\临时文件.txt","r");	//打开保存着所有文件名的txt
	
	if (!pf_order)
	{
		printf ("未打开所需文件，请重试！\n");
	}
		
	while(fscanf(pf_order,"%s",File_Name) != EOF)	//读取临时文件里的内容
	{
		//将数据文件名与路径连接起来
		strcpy(File_Temp,File_Path);
		strcat(File_Temp,File_Name);
			
		pf2_order = fopen(File_Temp,"rb+");		//打开学生文件
		
		fread(&(StudentData[i]),sizeof(New_Student),1,pf2_order);	//读取学生文件信息到结构体

		i++;
		fclose(pf2_order);
	}

	/*通过循环，将所有学生数据全都保存到了结构体数组中*/
	//接下来就是只需要排序了
B:
	rewind(stdin);
	
	printf ("1.总分\n2.语文\n3.数学\n4.英语\n5.退出\n");
	printf ("请输入以什么条件进行排序:\n");
	scanf ("%d",&Temp);

	switch (Temp)
	{
	case 1:	//排序总分
		
		//原学生成绩
		printf ("\t原学生总分成绩\n");
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

		printf ("\n\n学生总分成绩排序如下:\n\n");
		printf ("============================\n");
		for (j = 0;j < i;j++)
			printf (" ||%10s||	%5.2f||\n",temp[j].name,temp[j].totle_score);
		printf ("============================\n\n");
		free(temp);
			break;
	case 2://排序语文

		//原学生成绩
		printf ("\t原学生语文成绩\n");
		printf ("============================\n");
		for (k = 0;k < i;k++)
		{
			printf (" ||%10s||",StudentData[k].name);
			printf ("  %5.2f||\n",StudentData[k].yuwen);
		}
		printf ("============================\n\n");


		//为结构体指针分配i个大小的结构体内存
		temp = (New_Student*)malloc(i*sizeof(StudentData));
		//将原结构体全部赋值为结构体指针
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

		printf ("\n\n学生语文成绩排序如下:\n\n");
		printf ("============================\n");
		for (j = 0;j < i;j++)
			printf (" ||%10s||  %5.2f||\n",temp[j].name,temp[j].yuwen);
		printf ("============================\n\n");
		free(temp);
			break;
	case 3:	//排序数学

		//原学生成绩
		printf ("\t原学生数学成绩\n");
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

		printf ("\n\n学生数学成绩排序如下:\n\n");
		printf ("============================\n");

		for (j = 0;j < i;j++)
			printf (" ||%10s||	%5.2f||\n",temp[j].name,temp[j].math);
		printf ("============================\n\n");
		free(temp);
			break;
	case 4:	//排序英语

		//原学生成绩
		printf ("\t原学生英语成绩\n");
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

		printf ("\n\n学生英语成绩排序如下:\n\n");
		printf ("============================\n");
		for (j = 0;j < i;j++)
			printf (" ||%10s||	%5.2f||\n",temp[j].name,temp[j].english);
		printf ("============================\n\n");
		free(temp);
			break;
	case 5:	//退出
		/*退出什么都不用写，break后，就跳出循环了*/
			goto C;
	default:
		printf ("输入错误，请重新输入\n");
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
	printf ("还需要继续查看其他排名吗？(y/n)\n");
	scanf ("%c",&Temp1);
	

	if (Temp1 == 'Y' || Temp1 == 'y')
	{
		goto B;
	}
C:
	rewind(stdin);

	fclose (pf_order);
	system ("del c:\\学生信息文件夹\\临时文件.txt");
	getch();

	return;
}