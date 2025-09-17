//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>
int main() {
    int n, rev=0, rem, temp;
    scanf("%d", &n);
    temp = n;
    while(temp>0) {
        rem = temp % 10;
        rev = rev*10 + rem;
        temp /= 10;
    }
    if(n == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
