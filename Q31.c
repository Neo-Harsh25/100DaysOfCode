//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>
int main() {
    int n, rev=0, rem;
    scanf("%d", &n);
    int temp = n;
    while(temp>0) {
        rem = temp % 2;
        rev = rev*10 + rem;
        temp /= 2;
    }
    while(rev>0) {
        printf("%d", rev%10);
        rev /= 10;
    }
    return 0;
}
