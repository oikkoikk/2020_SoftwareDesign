#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][21];
    char temp[21];
    int pos = 0;
    int flag = 1;

    while (pos < 10)
    {
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s", temp);
        if (!strcmp("end", temp))
        {
            break;
        }
        else
        {
            for (int i = 0; i < pos; i++)
            {
                if (!strcmp(str[i], temp))
                {
                    printf("This word already exists. Please enter another word.\n");
                    flag = 0;
                    break;
                }
            }
            if (flag)
                strcpy(str[pos], temp);
            else
            {
                flag = 1;
                continue;
            }
        }
        pos++;
    }

    printf("%d words in the list:\n", pos);
    for (int i = 0; i < pos; i++)
    {
        printf("%s ", str[i]);
    }
    printf("\n");

    while (1)
    {
        printf("Enter a word to search (Enter 'end' to quit): ");
        scanf("%s", temp);
        if (!strcmp("end", temp))
        {
            break;
        }
        else
        {
            for (int i = 0; i < pos; i++)
            {
                if (!strcmp(str[i], temp))
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                printf("This word is in the list.\n");
                flag = 0;
                continue;
            }
            else
            {
                printf("This word is NOT in the list.\n");
                continue;
            }
        }
    }

    return 0;
}