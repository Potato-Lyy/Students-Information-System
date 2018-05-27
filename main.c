#include "include.h"

//主函数
int main ()
{	
	int n;

	//启动程序的时候,就创建根文件夹
	_mkdir("c:\\学生信息文件夹");
	
	//打印出目录
	menu();

	//配合与menu函数里的输入选项
	scanf ("%d",&n);

	while (n)
	{
		rewind(stdin);
		switch (n)
		{
		case 1:
			in();
				break;
		case 2:
			search();
				break;
		case 3:
			del();
				break;
		case 4:
			modify();
				break;
		case 5:
			order();
				break;
		case 6:
			number();
				break;
		default:
			break;
		}

		system("cls");
		menu();
		scanf ("%d",&n);	//再次调出目录，可继续操作
		rewind(stdin);
	}
	printf ("感谢使用\n :-) \n");
	printf ("按任意键退出本程序\n");
	getch();
	return 0;
}