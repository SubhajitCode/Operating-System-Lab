#include <stdio.h>
int main()
{
	int n, i;
	int p = -1, q = -1, r = -1, s = -1;
	printf("Please enter N:");
	scanf("%d", &n);
	int level[n];
	for (i = 0; i < n; i++)
	{
		level[i]=0;
	}
	for (i = 0; i < n; i++)
	{
		level[i]=fork();
	}

	printf("Process id is %d %d\n", getpid(),getppid());
	return 0;
}
