#include <stdio.h>
int main()
{
	int p = -1, q = -1;
	p = fork();
	if (p == 0)
	{
		q = fork();
	}
	printf("Process id is %d %d\n", p,q);

	sleep(2);
	return 0;
}
