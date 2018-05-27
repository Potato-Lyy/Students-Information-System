#include "include.h"

//修改学生信息函数
/*
	1.获取需要修改的学生姓名
	2.将读入的学生信息先保存到一个结构体中
	需要修改那个信息捏？
	打印所有的信心目录，输入序号，进行修改
	3.接受数据输入到结构体，改变结构体内容
	4.再将结构体保存到原文件
*/


void modify()
{
	FILE* pf_modify;		//修改前的文件指针
	char Temp;
	int Number;		//输入修改的序列号
	char ChangsName;
	char File_Name[50];
	char File_Temp[70];
	char File_Path[70] = {"c:\\学生信息文件夹\\"};
	char Del[20] = {"del "};
	New_Student Student3;		//将所有的文件信息保存在此
A: 
	rewind(stdin);

	printf ("需要修改学生信息吗?(y/n)\n");
	scanf ("%c",&Temp);

	if (Temp == 'y' || Temp == 'Y')
	{
		printf ("请输入需要修改的学生姓名:\n");
		scanf ("%s",File_Name);

		strcpy(File_Temp,File_Path);	
		strcat(File_Temp,File_Name);	
		
		if (pf_modify = fopen (File_Temp,"rb+"))
		{
			printf ("学生的信息：\n");
			fread (&(Student3),sizeof (Student3),1,pf_modify);

			printf ("1.学生姓名：%s\n",(&Student3)->name);
			printf ("2.学生学号：%d\n",(&Student3)->Student_ID);
			printf ("3.学生性别：%s\n",(&Student3)->sex);
			printf ("4.学生年龄：%d\n",(&Student3)->age);
			printf ("5.学生班级：%s\n",(&Student3)->squad);
			printf ("6.语文成绩：%.1f\n",(&Student3)->yuwen);
			printf ("7.数学成绩：%.1f\n",(&Student3)->math);
			printf ("8.英语成绩：%.1f\n",(&Student3)->english);
			printf ("9.总成绩：%.1f\n",(&Student3)->totle_score);
		}

		else 
		{
			printf ("未能找到该学生信息 ! \n");
			printf ("请确定学生姓名是否正确存在 ! \n");

			Sleep (1000);
			goto A;
		}

		printf ("需要修改哪个信息，请输入其序号:\n");
		scanf ("%d",&Number);

		switch (Number)
		{
		case 1:
			printf ("请输入修改后的学生姓名:\n");
			ChangsName = *(&Student3)->name;	//获取源学生姓名
			scanf ("%s",(&Student3)->name);
				break;
		case 2:
			printf ("请输入修改后的学生学号:\n");
			scanf ("%d",&((&Student3)->Student_ID));
				break;
		case 3:
			printf ("请输入修改后的学生性别:\n");
			scanf ("%s",(&Student3)->sex);
				break;
		case 4:
			printf ("请输入修改后的学生年龄:\n");
			scanf ("%d",&((&Student3)->age));
		case 5:
			printf ("请输入修改后的学生班级:\n");
			scanf ("%s",(&Student3)->squad);
				break;
		case 6:
			printf ("请输入修改后的学生语文成绩:\n");
			scanf ("%.1f",&((&Student3)->yuwen));
				break;
		case 7:
			printf ("请输入修改后的学生数学成绩:\n");
			scanf ("%.1f",&((&Student3)->math));
				break;
		case 8:
			printf ("请输入修改后的学生英语成绩:\n");
			scanf ("%.1f",&((&Student3)->english));
				break;
		case 9:
			printf ("请输入修改后的学生总分:\n");
			scanf ("%.1f",&((&Student3)->totle_score));
				break;
		default:
			printf ("输入错误\n");
			break;
		}
		
		rewind(pf_modify);	//将文件内指针置与文件的开头
		
		//如果修改了姓名的话，fk管他的，修改就修改了，烦死人了的用户

		fwrite (&(Student3),sizeof(Student3),1,pf_modify);	//写入数据到文件

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