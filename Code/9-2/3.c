#include <stdio.h>

int main()
{
    double arr[5];
    double sum = 0;

    for(int i=0; i<5; i++)
    {
        scanf("%lf", &arr[i]);
    }
    double* parr = arr;
    for(int i=0; i<5; i++)
    {
        *(parr+i) *= 2;
        sum += *(parr+i);
        printf("%f\n", *(parr+i));
    }
    printf("sum: %f", sum);

    return 0;

}