#include<stdio.h>
//#include <sys/types.h>
#include <unistd.h>
int main()
{
   int  k=fork();
	fork();
	if(k!=0)
       		fork();
    printf("pid is %d\n",getpid());
    sleep(1);
}
