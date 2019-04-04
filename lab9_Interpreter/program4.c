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
bool isNumber(char c)
{
	if((c>='0')&&(c<='9'))
		return true;
	else
		return false;
}
bool condition(char x[],int a[])
{
	if((x[4]=='>') && (a[x[3]]>a[x[5]]))
		return true;
	else if((x[4]=='<') && (a[x[3]]<a[x[5]]))
		return true;
	else if((x[4]=='=')&&(a[x[3]]=a[x[5]]))
		return true;
	else 
		return false;
}

void evaluate(char x[],int a[],bool flag)
{


		if((x[1]=='=')&&(x[3]=='+')&&isSymbol(x[4]))//for a=a+b
			a[x[0]]=a[x[2]]+a[x[4]];
		if((x[1]=='=')&&(x[3]=='+')&&isNumber(x[4]))
			a[x[0]]=a[x[2]]+x[4]-48;
		if((x[1]=='=')&&(isNumber(x[2])))//for a=6
			a[x[0]]=x[2]-48;
		if((x[1]=='=')&&(x[2]=='['))//k=[g]
		{
			if(isSymbol(x[3]))
			{
				a[x[0]]=a[(a[x[3]]+96)];

			}
			else
			{
				a[x[0]]=a[(a[x[3]-48]+96)];

			}

		}
			
		if((x[3]=='=') && (x[0]=='['))//[g]=8
		{
			if(isSymbol(x[4]))
			{
				a[(a[x[1]]+96)]=a[x[4]];

			}
			else
			{
				a[(a[x[1]]+96)]=x[4]-48;
			}
		}
			
		if(x[1]=='r')//for print(u)
		{
			printf("%d \n",a[x[6]]);
			sleep(1);
		}
		//for copy
		if((x[1]=='=')&&isSymbol(x[2])&&(x[3]!='+'))//a=b
			a[x[0]]=a[x[2]];
		if((x[0]=='i')&&(x[1]=='f'))//condition
		{
					char x2[20];
					scanf("%s",x2);
			if(condition(x,a))
			{
					evaluate(x2,a,false);
			}			
		}
		
		

}
main()
{
char x[20];int a[50][200];
printf("Please Please Give nUmber of Process\n");
int i;
int d;scanf("%d",&d);
	do
	{
		scanf("%s",x);
		
		for( i = 1; i <=d; i++)
		{
			a[i][122]=i;
			evaluate(x,a[i],true);			
		}
		
	}
	while(1);
	

	
}
