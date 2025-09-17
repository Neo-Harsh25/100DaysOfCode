/*

Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

*/

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>
int main() {
    int i=5, j, start, space;
    while(i>=1) {
        space = i-1;
        j=1;
        while(j<=space) {
            printf(" ");
            j++;
        }
        start = i;
        while(start<=5) {
            printf("%d", start);
            start++;
        }
        printf("\n");
        i--;
    }
    return 0;
}
