#include <stdio.h>

#define PI 3.141592

int main()
{
    double radius;

    scanf("%lf", &radius);
    printf("Perimeter: %lf\n", 2.0 * PI * radius);
    printf("Area: %lf", PI * radius * radius);

    return 0;
}