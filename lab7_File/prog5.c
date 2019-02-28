#include<stdio.h>
#include<fcntl.h>
main(int argc,char *argv[])
{
    int i=0;
    int fd=open(argv[1],O_RDWR);
    i=lseek(fd,0,SEEK_END);//find length
    lseek(fd,0,SEEK_SET);//point to first
    char ch[i];//declare array
    read(fd,ch,i);//read array
    int fd2=open(argv[2],O_CREAT|O_WRONLY,0666);//create file2
    write(fd2,ch,i);//write

    
}