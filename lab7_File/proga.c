#include<stdio.h>
#include<fcntl.h>
main()
{
	int fd,i;
	char c;
	fd=open("/user/math/18MA60R33/XYZ",O_RDONLY);
	i=lseek(fd,6,SEEK_SET);
	read(fd,&c,1);
	printf("%d %c\n",i,c);

}
