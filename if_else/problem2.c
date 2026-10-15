#include <stdio.h>
int main()
{
    int a;
    printf("Enter a interger value :");
    scanf("%d", &a);

    if (a >= 0)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", a * (-1));
    }

    return 0;
}