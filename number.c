#include "include.h"

//ѧ������ͳ��
void number()
{
    long Handle;
    int m= 0;
    struct _finddata_t FileInfo;

    if((Handle=_findfirst("c:\\ѧ����Ϣ�ļ���\\*.",&FileInfo))==-1L)
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
    
    printf ("һ����%d��ѧ����Ϣ�ļ�\n",m-1);

	getch();
    return ;
}