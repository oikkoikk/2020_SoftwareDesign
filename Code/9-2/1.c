#include <stdio.h>

int main()
{
    int arr[5];
    int minim;
    int maxim;
    int sum=0;

    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
        if(i == 0)
        {
            minim = arr[i];
            maxim = arr[i];
        }
        else
        {
            if(arr[i] < minim)
            {
                minim = arr[i];
            }
            else if(arr[i] > maxim)
            {
                maxim = arr[i];
            }
        }
        sum += arr[i];
    }

    printf("min: %d\n", minim);
    printf("max: %d\n", maxim);
    printf("sum: %d", sum);

    return 0;

}