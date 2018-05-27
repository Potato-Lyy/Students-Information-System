#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <direct.h>

//这里是函数原型
void in();
void menu();
void search();
void del();
void modify();
void order();
void number();

//我需要定义一些结构体，用于存储学生的所有信息
//Student结构体变量可以用于每个学生信息
typedef struct Student
{
	char name[20];		//姓名，最多4个字符，加'\0'
	char sex[10];			//性别
	int age;			//年龄
	long Student_ID;	//学号
	char squad[20];   //班级
	float math;		//数学成绩
	float english;	//英语成绩
	float yuwen;	//语文成绩
	float totle_score;	//总成绩
}New_Student;

//一般来说，不能将全局变量定义在头文件里，避免重定义的后果