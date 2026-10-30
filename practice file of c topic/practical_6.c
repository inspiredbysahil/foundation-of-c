
#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i = 1;

    printf("Enter any integer: ");
    scanf("%d", &n);

run:
    printf("%d\n", i);
    i++;

    if (i <= n)
        goto run;

    return 0;
}
