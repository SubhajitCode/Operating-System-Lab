#include<stdio.h>
//#include <sys/types.h>
#include <unistd.h>
int main()
{
    int  k=getpid();
    int n;
    printf("Please Enter a Number\n");
    scanf("%d",&n);
    int i;
    fork();
    for (i=0;i<n-2;i++)
    {
        if(k==getppid())
        {
            k=getpid();
            fork();
        }
            
    }  
    printf("pid is %d ppid is %d\n",getpid(),getppid());
    sleep(1);
}