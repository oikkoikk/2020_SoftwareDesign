#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    int flag = 2;

    scanf("%s", str1);
    scanf("%s", str2);
    if (!strcmp(str1, str2))
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("length of str1: %d\n", strlen(str1));
    printf("length of str2: %d\n", strlen(str2));
    printf("str1+str2: %s\n", strcat(str1, str2));
    (flag == 1) ? printf("same\n") : printf("not same\n");

    return 0;
}