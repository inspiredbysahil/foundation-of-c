#include <stdio.h>

int main()

{

    int a;
    printf("Enter Value of a : ");
    scanf("%d , &a");

    switch (a)
    {
    case 1:
        printf("your enter 1");
        break;

    case 2:
        printf("you enter 2");
        break;

    default:
        printf("not found");
        break;
    }
    return 0;
}