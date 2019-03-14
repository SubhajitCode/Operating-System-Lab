#include<stdio.h>
#include<fcntl.h>
void insertx(int fd,int start,int end)
{
	int length=end-start;
	printf("%d",length);
	char string[length+1];
	lseek(fd,0,SEEK_SET);
	read(fd,string,length);
	int i;
	printf("%s",string);
	lseek(fd,0,SEEK_SET);
	for(i=start;i<=end;i++)
	{
		write(fd,&string[i],1);
		write(fd,"X",1);
	}


}
main()
{
	int fd=open("XYZ",O_RDWR);
	int start=lseek(fd,0,SEEK_SET);
	int end=lseek(fd,0,SEEK_END);
	insertx(fd,start,end);
}
