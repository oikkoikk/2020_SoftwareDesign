#include <stdio.h>

int main()
{
    int numOne;
    double numTwo;

    scanf("%d %lf", &numOne, &numTwo);
    printf("%10d%10d%10d\n", numOne*2, numOne*4, numOne*8);
    printf("%10.2f%10.2f%10.2f", numTwo*2, numTwo*4, numTwo*8);

    return 0;
}