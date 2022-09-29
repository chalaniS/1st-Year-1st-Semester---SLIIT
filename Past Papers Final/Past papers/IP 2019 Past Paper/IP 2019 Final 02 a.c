#include <stdio.h>
int main (void)
{
    int fib[10];
    int i;

    fib[0] = 0;
    fib[1] = 1;

    for(i=2;i<10;i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
    }
    for(i=0; i<10; i++)
    {
        printf("%d ", fib[i]);
    }
}
