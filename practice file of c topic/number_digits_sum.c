#include <stdio.h>
#include <conio.h>
void main()
{
    int r1, r2, n, t;
    printf("Enter any three digit number = ");
    scanf("%d", &n);
    r1 = n % 10;
    n = n / 10;
    r2 = n % 10;
    n = n / 10;
    t = r1 + r2 + n;
    printf("Sum of digits is %d", t);
    getch();
}
