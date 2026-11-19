#include <stdio.h>
#include <conio.h>
void main()
{
    int a, i;

    printf("Enter any int value = ");
    scanf("%d", &a);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, (a * i));
    }
    getch();
}