#include "include.h"

void del()
{
	char Temp;
	char File_Name[50];
	char File_Temp[50];
	char File_Path[70] = {"c:\\学生信息文件夹\\"};
A:
	rewind(stdin);
	fflush(stdin);

	printf ("需要删除学生信息文件吗?(y/n)\n");
	printf ("此操作不可恢复！！！\n");
	scanf ("%c",&Temp);
	
	if (Temp == 'y' || Temp == 'Y')
	{
		fflush(stdin);
		printf ("请输入需要删除的学生姓名：\n");
		scanf ("%s",File_Name);

		strcpy(File_Temp,File_Path);
		strcat (File_Temp,File_Name);
		printf ("File_Temp = %s\n",File_Temp);
		if (remove (File_Temp) == 0)
		{
			printf ("删除成功！\n\n");
		}
		else 
		{
			printf ("删除失败！\n\n");
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