//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>
int main() {
    int n, i=1, fact=1;
    scanf("%d", &n);
    while(i<=n) {
        fact *= i;
        i++;
    }
    printf("%d", fact);
    return 0;
}
