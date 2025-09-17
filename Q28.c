//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8

Input 2:
6
Output 2:
48

*/

#include <stdio.h>
int main() {
    int n, i=1, prod=1;
    scanf("%d", &n);
    while(i<=n) {
        if(i%2==0) {
            prod *= i;
        }
        i++;
    }
    printf("%d", prod);
    return 0;
}
