#include <stdio.h>
#include <conio.h>
void main()
{
    int i, array[10];
    printf("Enter 10 integer Number of Array  \n");

    for (i = 0; i < 10; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nElements in reverse order :\n");
    for (i = 9; i > 0; i--)
    {
        printf("%d\n", array[i]);
    }
}