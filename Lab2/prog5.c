#include<stdio.h>
 int main()
{
	int p=-1,q=-1,r=-1,s=-1;
	p=fork();//B
	if(p==0)
		 q=fork();//E
	if((p!=0)&&(q!=0))
		r=fork();//C
	if((p!=0)&&(q!=0)&&(r!=0))
		s=fork();//D
	
	printf("Process id is %d\n",getpid());
	return 0;
}
