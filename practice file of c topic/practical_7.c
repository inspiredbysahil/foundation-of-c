
#include <stdio.h>

int main()
{
    int  i = 1;

run:
    printf("Jai Shree Ram\n");
    i++;

    if (i <= 20)
        goto run;

    return 0;
}
