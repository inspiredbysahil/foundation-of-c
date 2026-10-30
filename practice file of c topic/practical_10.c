#include <stdio.h>
#include<conio.h>
void main()
{
    int a = 2;
run:
    printf("%d\n", a);
    a+=2;
    if (a <= 20)
        goto run;
   getch();
}
