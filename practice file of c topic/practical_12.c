#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter value of A = ");
    scanf("%d", &a);
    printf("Enter value of B = ");
    scanf("%d", &b);
    printf("Enter value of C = ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("A is greatest");
    }
    else if (b > c && b > a)
    {
        printf("B is greatest");
    }
    else
    {
        printf("C is greatest");
    }
    getch();
}