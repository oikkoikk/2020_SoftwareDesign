#include <stdio.h>

int Com(int N, int R)
{
    if(N ==R || R == 0)
    {
        return 1;
    }
    else
    {
        return (Com(N - 1, R - 1) + Com(N - 1, R));
    }
}
int main()
{
    int n, r;

    scanf("%d %d", &n, &r);
    printf("%d",Com(n, r));

    return 0;
}