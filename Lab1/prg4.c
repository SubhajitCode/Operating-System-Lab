#include<stdio.h>
main()
{
	int n;
	printf("Please enter N\n");
	scanf("%d",&n);
	int i,p=getpid();
	for(i=0;i<n;i++)
	{
		fork();
	}
	if(p==getppid())
		printf("X");
	sleep(1);
}
