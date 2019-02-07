
#include<stdio.h>
#include<signal.h>
void k()
{
	static int count=0;
	int i;
	for(i=0;i<=count;i++)
	{
		printf("X");
	}
	printf("\n");
	count ++;

}
main()
{
	signal(SIGINT,k);
	while(1);
}
