#include<stdio.h>
//#include <sys/types.h>
#include <unistd.h>
int main()
{
    fork();fork();
    int p=getpid();
    fork();fork();fork();
    if(p==getpid())
        printf("X");
    if(p==getppid())
        printf("Y");
    //sleep(1);
    return 0;
}