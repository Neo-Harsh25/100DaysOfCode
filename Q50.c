/*

Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

*/

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>
int main() {
    int i=5, j, space;
    while(i>=1) {
        space = 5 - i;
        j=1;
        while(j<=space) {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i) {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}
