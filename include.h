#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <direct.h>

//�����Ǻ���ԭ��
void in();
void menu();
void search();
void del();
void modify();
void order();
void number();

//����Ҫ����һЩ�ṹ�壬���ڴ洢ѧ����������Ϣ
//Student�ṹ�������������ÿ��ѧ����Ϣ
typedef struct Student
{
	char name[20];		//���������4���ַ�����'\0'
	char sex[10];			//�Ա�
	int age;			//����
	long Student_ID;	//ѧ��
	char squad[20];   //�༶
	float math;		//��ѧ�ɼ�
	float english;	//Ӣ��ɼ�
	float yuwen;	//���ĳɼ�
	float totle_score;	//�ܳɼ�
}New_Student;

//һ����˵�����ܽ�ȫ�ֱ���������ͷ�ļ�������ض���ĺ��