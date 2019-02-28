#include<stdio.h>
#include<fcntl.h>
main()
{
    int fd=open("abc",O_RDONLY);
    int i=0,j=5;char ch;
    while(j!=0)
    {
        lseek(fd,i++,SEEK_SET);
        j=read(fd,&ch,1);
    }
    printf("%d \n",(i-1));
    
}