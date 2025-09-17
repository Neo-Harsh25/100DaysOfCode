//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
int main() {
    int n, rem, rev=0, temp;
    scanf("%d", &n);
    temp = n;
    while(temp>0) {
        rem = temp % 10;
        rem = (rem==0) ? 1 : 0;
        rev = rev*10 + rem;
        temp /= 10;
    }
    // Reverse rev to get correct order
    temp = rev;
    int final=0;
    while(temp>0) {
        rem = temp % 10;
        final = final*10 + rem;
        temp /= 10;
    }
    printf("%d", final);
    return 0;
}
