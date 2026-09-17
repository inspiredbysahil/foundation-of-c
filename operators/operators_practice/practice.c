#include <stdio.h>

int main()
{
    float m, p, c;

    printf("Enter you maths marks: \n");
    scanf("%f", &m);
    printf("Enter you physics marks: \n");
    scanf("%f", &p);
    printf("Enter you chemistry marks: \n");
    scanf("%f", &c);
    printf("Entered marks are : %f %f and %f\n", m, p, c);

    if (m < 33 || c < 33 || p < 33)
    {
        printf("You are fail due subject wise criteria not passed");
    }
    else if ((m + p + c) / 3 < 40)
    {
        printf("you are failed due to less percentage");
    }
    else
    {
        printf("Congratulation you are passed");
    }
    return 0;
}