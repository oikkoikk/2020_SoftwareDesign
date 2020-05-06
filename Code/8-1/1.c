#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

double div(int a, int b)
{
    return ((double)a / (double)b);
}

int mod(int a, int b)
{
    return a % b;
}

void printMsg()
{
    printf("completed");
}
int main()
{
    int numA, numB;

    scanf("%d %d", &numA, &numB);
    printf("sum: %d\n", add(numA, numB));
    printf("difference: %d\n", sub(numA, numB));
    printf("product: %d\n", mul(numA, numB));
    printf("division: %f\n", div(numA, numB));
    printf("remainder: %d\n", mod(numA, numB));
    printMsg();

    return 0;
}