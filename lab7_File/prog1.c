#include<stdio.h>
#include<fcntl.h>
main()
{
    int fd=open("abc",O_RDONLY);
    int i=0;char ch;
    while(ch!='a')
    {
        lseek(fd,i++,SEEK_SET);
        read(fd,&ch,1);
    }
    printf("%d \n",i);
    
}