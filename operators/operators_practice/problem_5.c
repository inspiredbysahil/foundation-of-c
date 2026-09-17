#include <stdio.h>
int main()

{

    int num1, num2, num3, num4;

    printf("Enter your num1 : \n");
    scanf("%d", &num1);
    printf("Enter your num2: \n");
    scanf("%d", &num2);
    printf("Enter your num3 : \n");
    scanf("%d", &num3);
    printf("Enter your num4 : \n");
    scanf("%d", &num4);

    if (num1 > num2 || num1 > num2 || num1 > num3)
    {
        printf("num1 is greaterst");
    }
    else if (num2 > num1 || num2 > num3 || num2 > num4)
    {
        printf("num2 is greatest ");
    }
    else if (num3 > num1 || num3 > num2 || num3 > num4)
    {
        printf("num3 is greatest ");
    }
    else
    {
        printf("num4 is greatest ");
    }
    return 0;
}