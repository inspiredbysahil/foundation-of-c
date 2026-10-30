#include <stdio.h>
#include<conio.h>
int main()
{
    int i=1;
run:
    printf("%d\n", i);
    i++;
    if (i <= 100)

        goto run;

    return 0;
}