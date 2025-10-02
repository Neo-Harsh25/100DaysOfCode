//Q85: Reverse a string

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>
int main() {
    char str[1000];
    int i, len = 0;

    fgets(str, sizeof(str), stdin); // read string

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
