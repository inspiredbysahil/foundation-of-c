#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("Enter The Value of A =");
    scanf("%d", &a);
    printf("Enter The Value of B =");
    scanf("%d", &b);

    if (a > b)
    {
        printf(" A is greater ");
    }
    else
    {
        printf("B is greater");
    }
    getch();
}