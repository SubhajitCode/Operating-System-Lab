#include<stdio.h>
main()
{
	fork();
	fork();
	printf("X");
	fork();
	printf("Y");
	fork();
	fork();
	fork();
	printf("Z");
}
