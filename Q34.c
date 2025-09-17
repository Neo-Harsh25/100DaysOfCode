//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main() {
    int n, i=2, flag=0;
    scanf("%d", &n);
    if(n<=1) flag=1;
    while(i*i <= n) {
        if(n%i==0) {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        printf("Prime");
    else
        printf("Not prime");
    return 0;
}
