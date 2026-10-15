#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, t;
    float f;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    printf("Enter the value of c = ");
    scanf("%d", &c);
    t = a + b + c;
    f = t / 3.0;
    printf("Sum of numbers is %d \n", t);
    printf("Average of numbers is %f ", f);
    getch();
}