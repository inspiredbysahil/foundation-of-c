#include <stdio.h>
#include <conio.h>
void main()
{
    char na[20];
    int i = 0;
    printf("Enter any string ");
    
    gets(na);
    while (na[i] != '\0')
        i++;
    printf("lenght is %d", i);
    getch();
}