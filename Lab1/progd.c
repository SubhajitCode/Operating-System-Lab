#include<stdio.h>
main()
{
	int i,p=getpid();
	fork();
	for(i=1;i<10;i++)
		if(p==getpid())
			printf("X");
		else
			printf("Y");
}
