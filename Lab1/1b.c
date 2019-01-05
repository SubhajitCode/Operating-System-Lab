#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("%d %d\n", getpid(), getppid());
    int p = getpid();
    fork();
    if (p == getpid())
    {
        printf("%d %d\n", getpid(), getppid());
        sleep(1);
    }
    if (p == getppid())
    {
        sleep(0.5);
        printf("%d %d\n", getpid(), getppid());
    }

    return 0;
}
