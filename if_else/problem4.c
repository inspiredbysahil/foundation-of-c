#include <stdio.h>
int main()

{
    int a;
    printf("Enter a positive number :");
    scanf("%d", &a);

    if (a >= 100 && a <= 999)
    {
        printf("this is a three digit number");
    }
    else
    {
        printf("entered number is not three digit  number ");
    }

    return 0;
}