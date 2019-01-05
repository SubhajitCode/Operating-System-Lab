#include<stdio.h>
//#include <sys/types.h>
#include <unistd.h>
int main()
{
   int  k,l,m;
    	k=fork();
	l=fork();
       	m=fork();
	if((k!=0&&l!=0&&m==0)||(k!=0&&l==0&&m!=0)||(k==0&&l!=0&&m!=0))
	{
		fork();	
	}
	
    printf("pid is %d\n",getpid());
    sleep(1);
}
