#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter coordinate of x1 :");
    scanf("%d", &x1);
    printf("Enter coordinate of y1 :");
    scanf("%d", &y1);
    printf("Enter coordinate of x2 :");
    scanf("%d", &x2);
    printf("Enter coordinate of y2 :");
    scanf("%d", &y2);
    printf("Enter coordinate of x3 :");
    scanf("%d", &x3);
    printf("Enter coordinate of y3 :");
    scanf("%d", &y3);

    int m1 = (y2 - y1) / (x2 - x1);
    int m2 = (y3 - y2) / (x3 - x2);

    printf("%d", m1);
    printf("%d", m2);
    if (m1 == m2)
    {
        printf("Given coordinate are on straight line");
    }
    else
    {
        printf("Given coordinate are not on straight line");
    }

    return 0;
}