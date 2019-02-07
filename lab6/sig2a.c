#include<stdio.h>
#include<signal.h>
void k()
{
	static int i=0;
	char ch ='P';
	printf("%c%c\n",ch+i,ch+i);
	i++;
	if(i==2)
	{
		signal(SIGINT,SIG_DFL);
	}
}
main()
{
	signal(SIGINT,k);
	while(1);
}
