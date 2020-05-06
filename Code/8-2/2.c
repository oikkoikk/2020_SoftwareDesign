#include <stdio.h>

int Fibo(int N)
{
    if(N == 0)
        return 0;
    else if(N == 1)
        return 1;

    else
    {
        return (Fibo(N-1) + Fibo(N-2));
    }
    
}
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d", Fibo(n));

    return 0;
}