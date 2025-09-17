//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15

Input 2:
2468
Output 2:
1

*/

#include <stdio.h>
int main() {
    int n, rem, prod=1, flag=0;
    scanf("%d", &n);
    while(n>0) {
        rem = n % 10;
        if(rem%2!=0) {
            prod *= rem;
            flag=1;
        }
        n /= 10;
    }
    if(flag==0)
        printf("1");
    else
        printf("%d", prod);
    return 0;
}
