#include <stdio.h>

void printString(const char *str)
{
    printf("%s\n", str);
}
int main()
{
    const char *str[3] = {"One", "Two", "Three"};

    void (*pStrf)(const char *) = printString;

    pStrf(str[0]);
    pStrf(str[1]);
    pStrf(str[2]);

    return 0;
}