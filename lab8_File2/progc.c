#include<stdio.h>
main()
{

	FILE* fs=fopen("Exp","w");
	write(3,"PQRST",5);
	fprintf(fs,"A");
	lseek(3,2,SEEK_SET);
	fflush(fs);
	write(3,"Z",1);

}
