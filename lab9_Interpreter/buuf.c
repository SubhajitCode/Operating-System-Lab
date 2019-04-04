#include<stdio.h>
#include<fcntl.h>

int main()
{
	char c,m;
	FILE *x=fopen("a","r");
	fscanf(x,"%c",&c);
	int k=lseek(3,2,1);
	printf("%d \n",k);
	fflush(x);
	 k=lseek(3,0,1);
	printf("%d \n",k);
	fscanf(x,"%c",&m);
	printf("%c\n",m);

return 0;
}