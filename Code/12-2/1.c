#include <stdio.h>

void printArray(char **arr, int len)
{
    printf("Array [0]:%s, [1]:%s,\n", arr[0], arr[1]);
}

void swap(char **str1, char **str2)
{
    char *temp = *str1;

    *str1 = *str2;
    *str2 = temp;
}
int main()
{
    char *str[2] = {"aaa", "bbb"};

    printArray(str, 3);
    swap(&str[0], &str[1]);
    printArray(str, 3);
}