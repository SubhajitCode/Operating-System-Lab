#include<stdio.h>
#include<fcntl.h>
main()
{
	int fd,i;
	char fn[20];
	printf("Give me File Name \n");
	gets(fn);
	fd=open(fn,O_WRONLY);
	write(fd,"BCD",3);
	lseek(fd,2,SEEK_CUR);
	write(fd,"KLC",2);

}
