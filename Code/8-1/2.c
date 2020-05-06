#include <stdio.h>

int gMul = 1;

int addTotal(int n)
{
    int sum=0;

    for(int i=1; i<=n; i++)
    {
        sum += i;
    }

    return sum;
}

void mulTotal(int n)
{
    for(int i=1; i<=n; i++)
    {
        gMul *= i;
    }
}

int main()
{
    int N;

    scanf("%d", &N);
    mulTotal(N);

    printf("addTotal(): %d\n", addTotal(N));
    printf("gMul: %d", gMul);

    return 0;
}