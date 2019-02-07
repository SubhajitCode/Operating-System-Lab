
#include<stdio.h>
#include<signal.h>
char ch =1;
void k()
{
	ch=0;

}
main()
{
	signal(SIGINT,k);
	while(ch==1)
	{
		printf("Z");
	}
	fflush(stdout);
	printf("Y");
}
