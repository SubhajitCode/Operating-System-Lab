#include<stdio.h>
#include<fcntl.h>
main()
{
    int i=0;
    int fd=open("abc",O_RDWR);//open
    i=lseek(fd,0,SEEK_END);//find length
    lseek(fd,0,SEEK_SET);//point to first
    char ch[i+1];//declare array
    read(fd,ch,i);//read array
    printf("%s\n",ch);//print

    
}