#include <stdio.h>

typedef struct
{
    char name[10];
    int age;
} Person;

int main()
{
    Person user;

    scanf("%s %d", user.name, &user.age);
    printf("name: %s\n", user.name);
    printf("age: %d", user.age);

    return 0;
}