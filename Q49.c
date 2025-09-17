/*

Q49: Write a program to print the following pattern:
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
    int i=5, j, start;
    while(i>=1) {
        start = i;
        j = 0;
        while(start<=5) {
            printf("%d", start);
            start++;
        }
        printf("\n");
        i--;
    }
    return 0;
}
