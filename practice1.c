#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     float m1 = 90;
//     float m2 = 95;
//     float m3 = 90;
//     float m4 = 90;
//     float m5 = 100;
//     float p = (m1 + m2 + m3 + m4 + m5) / 5;
//     printf("precentage is : %f", p);
//     return 0;
// }

// int main()
// {
//     float radius, area_circle;
//     printf("Enter Radius :");
//     scanf("%f", &radius);
//     area_circle = (22 * radius * radius) / 7;
//     printf("Area of Circle is : %f", area_circle);
//     return 0;
// }

int main(int argc, char const *argv[])
{
    float x;
    printf("Enter Your 1st Number : \n");
    scanf("%f", &x);
    float y;
    printf("Enter Your 2nd Number : \n");
    scanf("%f", &y);
    float sum = x + y;
    printf("sum of given number is : %f", sum);
    return 0;
}
