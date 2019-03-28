#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isSymbol(char c)
{
	if((c>='A')&&(c<='Z'))
		return true;
	else if((c>='a')&&(c<='z'))
		return true;
	else
		return false;
}
bool condition(char x[],int a[])
{
	if((x[4]=='>') && (x[3]>x[5]))
		return true;
	else if((x[4]=='<') && (x[3]<x[5]))
		return true;
	else if((x[4]=='=')&&(x[3]<x[5]))
		return true;
}

void evaluate(char x[],int a[])
{
		scanf("%s",x);
		if((x[1]=='=')&&(x[3]=='+'))
			a[x[0]]=a[x[2]]+a[x[4]];
		if((x[1]=='=')&&(x[2]<60))
			a[x[0]]=x[2]-48;
		if(x[1]=='r')
		{
			printf("%d \n",a[x[6]]);
			sleep(1);
		}
		//for copy
		if((x[1]=='=')&&isSymbol(x[2]))
			a[x[0]]=a[x[2]];
		if((x[0]=='i')&&(x[1]=='f'))
		{
			if(condition(x,a))
				{
					char x2[20];
					memcpy(x2,&x[7],12);
					puts(x2);
					evaluate(x2,a);
				}


			
		}

}
main()
{
char x[20];int a[200];
	do
	{

		
	evaluate(x,a);

	}
	while(1);
	

	
}
