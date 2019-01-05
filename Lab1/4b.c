#include<stdio.h>
//#include <sys/types.h>
#include <unistd.h>
int main()
{
   int  k=getpid();
    fork();fork();
    if(k==getpid())
       fork();
    printf("pid is %d\n",getpid());
    sleep(1);
}