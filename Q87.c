//Q87: Count spaces, digits, and special characters in a string

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/

#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch == ' ') spaces++;
        else if (ch >= '0' && ch <= '9') digits++;
        else special++;
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
