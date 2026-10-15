#include <stdio.h>
int main()
{
    int x;
    printf("Enter a positive number :");
    scanf("%d", &x);

    if ((x % 5 == 0 || x % 3 == 0) && x % 15 != 0)
    {
        printf("divisible by 5 or 3");
    }
    else
    {
        printf("not divisible by 3 or 5 ");
    }
    return 0;
}