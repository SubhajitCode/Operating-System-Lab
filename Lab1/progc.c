#include<stdio.h>
main()
{
	printf("%d\n",getpid());
	int p=getpid();
	fork();
	while(getppid()==p);
		printf("%d\n",getpid());
	printf("%d\n",getppid());
	sleep(2);
}
