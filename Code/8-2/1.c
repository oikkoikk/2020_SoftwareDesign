#include <stdio.h>

int time = 0;
int n;

void printLine(int N)
{
    time++;

    if (time != 2 * n)
    {
        for (int i = 1; i <= N - 1; i++)
        {
            printf("%d ", i);
        }
        printf("%d\n", N);
    }
    else
    {
        for (int i = 1; i <= N - 1; i++)
        {
            printf("%d ", i);
        }
        printf("%d", N);
    }
}
int main()
{

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printLine(i);
    }
    for (int i = n; i >= 1; i--)
    {
        printLine(i);
    }

    return 0;
}