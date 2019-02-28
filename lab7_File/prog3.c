#include<stdio.h>
#include<fcntl.h>
main()
{
    int i=0;
    int fd=open("abc",O_RDWR);
    i=lseek(fd,3,SEEK_SET);
    write(fd,"K",1);

    
}