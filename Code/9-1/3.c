#include <stdio.h>

int main()
{
    char str[10000];

    scanf("%s", str);

    int count = 0;

    for(int i=0; str[i]; i++)
    {
        count ++;
    }

    printf("%d", count);

    return 0;
}