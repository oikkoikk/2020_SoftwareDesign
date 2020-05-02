#include <stdio.h>

int main()
{
    int flag = 1;
    while(flag)
    {
        char al;
        scanf(" %c", &al);

        if('a' <= al && al <= 'z')
        {
            printf("-> %c\n", al-32);
            flag = 1;
            continue;
        }
        else if('A' <= al && al <= 'Z')
        {
            printf("-> %c\n", al+32);
            flag = 1;
            continue;
        }
        else if('0' <= al && al <= '9')
        {
            printf("-> %c\n", al);
            flag = 1;
            continue;
        }
        else
        {
            flag = 0;
        }
        
    }
    printf("exit");

    return 0;
    
}