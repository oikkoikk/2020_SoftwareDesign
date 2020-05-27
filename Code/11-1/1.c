#include <stdio.h>

void square(double *num)
{
    *num = (*num) * (*num);
    return;
}
int main()
{
    double dvar;

    scanf("%lf", &dvar);
    square(&dvar);

    printf("%lf", dvar);

    return 0;
}