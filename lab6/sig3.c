
#include<stdio.h>
#include<signal.h>
void k()
{
	int i;
	printf("Do Yo Wanna Terminate\n");
	printf("Press 0 to terminate 1 to continue:");
	scanf("%d",&i);
	if(i==0)
	{
		signal(SIGINT,SIG_DFL);
		kill(getpid(),SIGINT);
	}
	else if(i==1)
	{
		printf("Continuing  ......");
	}
}
main()
{
	signal(SIGINT,k);
	while(1);
}
