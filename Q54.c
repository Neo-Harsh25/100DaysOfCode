/*

Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
   * 
*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>
int main() {
    int i, j, stars, spaces;

    // Upper part
    for(i=1; i<=4; i++) {
        spaces = 4 - i;
        stars = 2*i - 1;
        j=1;
        while(j<=spaces) {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=stars) {
            printf("*");
            j++;
        }
        printf("\n");
    }

    // Lower part
    for(i=3; i>=1; i--) {
        spaces = 4 - i;
        stars = 2*i - 1;
        j=1;
        while(j<=spaces) {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=stars) {
            printf("*");
            j++;
        }
        printf("\n");
    }

    return 0;
}
