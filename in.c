#include "include.h"

//录入学生信息
void in ()
{
	char Temp;
	char File_Name[50];
	char File_Temp[100];
	char File_Path[50] = {"c:\\学生信息文件夹\\"};
	FILE* pf_in;
	New_Student Student1;		//新建一个结构体
A:
	rewind(stdin);		//清理一下缓存区
	
	printf ("需要添加一个学生信息吗(y/n)\n");
	scanf ("%c",&Temp);
	
	if (Temp == 'y' || Temp == 'Y')
	{
		printf ("准备接受学生信息...\n");
		printf ("若无该项目信息，输入0即可\n\n");

		printf ("请输入学生姓名\n");
		scanf ("%s",(&Student1)->name);
		printf ("请输入学生学号\n");
		scanf ("%d",&((&Student1)->Student_ID));		
		printf ("请输入学生性别\n");
		scanf ("%s",(&Student1)->sex);
		printf ("请输入学生年龄\n");
		scanf ("%d",&((&Student1)->age));
		printf ("请输入学生班级\n");
		scanf ("%s",(&Student1)->squad);
		printf ("请输入学生的语文成绩\n");
		scanf ("%f",&((&Student1)->yuwen));
		printf ("请输入学生的数学成绩\n");
		scanf ("%f",&((&Student1)->math));
		printf ("请输入学生的英语成绩\n");
		scanf ("%f",&((&Student1)->english));
		(&Student1)->totle_score = (&Student1)->yuwen + (&Student1)->math + (&Student1)->english;
		printf ("该学生的总成绩为:%.1f\n",(&Student1)->totle_score);

		strcpy(File_Name,(&Student1)->name);		//将姓名复制到File_Name字符串
		strcpy(File_Temp,File_Path);				//将默认路径复制到Temp字符串中
		strcat(File_Temp,File_Name);				//将完全路径与文件包含完整
		//c:\\学生信息文件夹\\name		理论应该是这个状态

		pf_in = fopen(File_Temp,"wb+");

		//fwrite函数将二进制数据存入文档
		fwrite(&(Student1),sizeof(Student1),1,pf_in);
		printf ("保存成功 ! \n");
		
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