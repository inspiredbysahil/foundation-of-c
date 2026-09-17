#include <stdio.h>

int main()
{
    int num1;
    num1 = 89;

    printf("enter your marks :");
    scanf("%d", &num1);

    if (num1 > 90 && num1 <= 100)
    {
        printf("grade A");
    }
    else if (num1 > 80 && num1 <= 90)
    {
        printf("grade B");
    }
    else
    {
        printf("Better luck next time");
    }

    return 0;
}