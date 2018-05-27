#include "include.h"

//学生人数统计
void number()
{
    long Handle;
    int m= 0;
    struct _finddata_t FileInfo;

    if((Handle=_findfirst("c:\\学生信息文件夹\\*.",&FileInfo))==-1L)
        printf("Not found!\n");
    else
    {
    	printf("%s\n",FileInfo.name);
        while(_findnext(Handle,&FileInfo)==0)
        {
        	m++;
			printf("%s\n",FileInfo.name);
		}
        _findclose(Handle);
    }
    
    printf ("一共有%d个学生信息文件\n",m-1);

	getch();
    return ;
}