#include <stdio.h>

int recursive(int N)
{
    if (N == 0)
    {
        return 0;
    }

    else
    {
        return (N + recursive(N-1));
    }
    
}
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d", recursive(n));

    return 0;

}