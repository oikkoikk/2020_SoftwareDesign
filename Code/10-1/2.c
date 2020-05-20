#include <stdio.h>

int main()
{
    char str[10];

    scanf("%s", str);
    for (int i = 0; str[i]; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] = 'A' + (str[i] - 'a');
        }
        else if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] = 'a' + (str[i] - 'A');
        }
    }
    printf("%s", str);

    return 0;
}