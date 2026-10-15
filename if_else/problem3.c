#include <stdio.h>
int main()
{

    float c, s;
    printf("Enter a cost price :");
    scanf("%f", &c);
    printf("Enter a selling price :");
    scanf("%f", &s);

    if (s > c)
    {
        printf("you get profit \n");
    }
    else if (s == c)
    {
        printf("neither lose nor porfit \n");
    }

    else
    {
        printf("you get lose \n ");
    }

    // how much profit or lose user got

    if (s > c)
    {
        printf("you get profit of amount : %f", (s - c) );
    }

    else
    {
        printf("you get lose of amount : %f", (c - s));
    }
    return 0;
}