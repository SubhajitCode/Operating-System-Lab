
#include<stdio.h>
#include<signal.h>
static int count=0;
static int prevcount =0;
void k()
{
	printf("%d",count-prevcount);
	printf("\n");
	prevcount=count;
	

}
main()
{
	signal(SIGINT,k);
	while(1)
	{
		count++;
		sleep(1);
	}
}
