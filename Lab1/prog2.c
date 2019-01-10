#include<stdio.h>
main()
{
	fork();fork();
	int p=getpid();
	fork();fork();fork();
	if(p==getpid())
	{
		printf("X");
	}
	if (p==getppid())
		printf("Y");
//	sleep(1);
}
