#include <stdio.h>
#include <conio.h>
void main()
{
    int a, c = 1;
    printf("enter any interger number ");
    scanf("%d", &a);

table:
    printf("%d X %d = %d\n", a, c, (a * c));
    c++;
    if (c <= 10)
    {
        goto table;
    }
    getch();
}