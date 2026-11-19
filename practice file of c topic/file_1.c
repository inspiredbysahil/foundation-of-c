#include <stdio.h>
#include<conio.h>

int main() {
    int num, i = 1;

    
    printf("Koi bhi integer number enter karein: ");
    scanf("%d", &num);

    table_loop:
    if (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
        goto table_loop;
    }

    return 0;
}