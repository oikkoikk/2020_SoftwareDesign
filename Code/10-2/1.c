#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int leng)
{
    for (int i = 0; i < leng / 2; i++)
    {
        if (str[i] != str[leng - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[10];
    int flag = -1;

    scanf("%s", str);

    flag = isPalindrome(str, strlen(str));
    if (flag)
    {
        printf("This is a palindrome");
    }
    else
    {
        printf("This is not a palindrome");
    }

    return 0;
}