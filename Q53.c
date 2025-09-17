/*

Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/


#include <stdio.h>
int main() {
    int i, j, stars;

    // Upper part
    for(i=1; i<=5; i++) {
        stars = 2*i - 1;
        j=1;
        while(j<=stars) {
            printf("*");
            j++;
        }
        printf("\n");
    }

    // Lower part
    for(i=4; i>=1; i--) {
        stars = 2*i - 1;
        j=1;
        while(j<=stars) {
            printf("*");
            j++;
        }
        printf("\n");
    }

    return 0;
}
