#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int upper = 0, lower = 0, digits = 0, spaces = 0, special = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } 
        else if (str[i] == ' ') {
            spaces++;
        } 
        else if (str[i] != '\n') { // Ignore the newline character added by fgets
            special++;
        }
        i++;
    }

    printf("\nCharacter Breakdown:\n");
    printf("Capital Letters    : %d\n", upper);
    printf("Small Letters      : %d\n", lower);
    printf("Digits             : %d\n", digits);
    printf("Blank Spaces       : %d\n", spaces);
    printf("Special Characters : %d\n", special);

    return 0;
}
