/*

Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>
int main() {
    int i, j;

    // First block - 1 star
    for(i=1; i<=1; i++) {
        printf("*\n");
    }
    printf("\n");

    // Second block - 3 stars
    for(i=1; i<=3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Third block - 5 stars
    for(i=1; i<=5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fourth block - 3 stars
    for(i=1; i<=3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fifth block - 1 star
    for(i=1; i<=1; i++) {
        printf("*\n");
    }

    return 0;
}
