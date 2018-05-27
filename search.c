#include "include.h"

//查找学生信息
void search()
{
	FILE* pf_search;
	New_Student Student2;
	char Temp;
	char File_Name[50];
	char File_Temp[70];
	 char File_Path[70] = {"c:\\学生信息文件夹\\"};
A:
	rewind(stdin);

	printf ("需要查看学生信息吗(y/n)\n");
	scanf ("%c",&Temp);
	if (Temp == 'y' || Temp == 'Y')
	{
		printf ("请输入需要查看的学生姓名:\n");
		scanf ("%s",&File_Name);

		strcpy (File_Temp,File_Path);
		strcat (File_Temp,File_Name);

		if (pf_search = fopen (File_Temp,"r"))
		{
			printf ("已找到该学生信息\n");
			Sleep(1000);

			fread(&(Student2),sizeof (Student2),1,pf_search);

			printf ("学生姓名：%s\n",(&Student2)->name);
			printf ("学生学号：%d\n",(&Student2)->Student_ID);
			printf ("学生性别：%s\n",(&Student2)->sex);
			printf ("学生年龄：%d\n",(&Student2)->age);
			printf ("学生班级：%s\n",(&Student2)->squad);
			printf ("语文成绩：%.1f\n",(&Student2)->yuwen);
			printf ("数学成绩：%.1f\n",(&Student2)->math);
			printf ("英语成绩：%.1f\n",(&Student2)->english);
			printf ("总成绩：%.1f\n",(&Student2)->totle_score);

			goto A;
		}
		else 
		{
			printf ("未能找到该学生信息 ! \n");
			printf ("请确定学生姓名是否正确存在 ! \n");

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