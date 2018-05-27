#include "include.h"

void menu()		//自定义函数实现菜单功能
{
	system("cls");
	system("mode con: cols=82 lines=29");		//改变窗口大小	
	system("color fc");			//改变字体颜色
	system("title 学生管理系统");		//改变标题栏
	printf ("\n\n\n\n\n");
	printf ("\t\t|---------------STUDENT--------------|\n");	
	printf ("\t\t|\t  0. 退出		     |\n");//exit
	printf ("\t\t|\t  1. 录入学生成绩信息	     |\n");//input record
	printf ("\t\t|\t  2. 查找学生成绩信息	     |\n");//search record
	printf ("\t\t|\t  3. 删除学生成绩信息	     |\n");//delete record
	printf ("\t\t|\t  4. 修改学生成绩信息	     |\n");//modify record
	printf ("\t\t|\t  5. 学生成绩排名	     |\n");//order
	printf ("\t\t|\t  6. 学生人数统计	     |\n");//number
	printf ("\t\t|------------------------------------|\n\n");
	printf ("\t\t\tchoose(0-6):");
}