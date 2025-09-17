//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>
int main() {
    int n, i=2, j, flag;
    scanf("%d", &n);
    while(i<=n) {
        flag=0;
        j=2;
        while(j*j <= i) {
            if(i%j==0) {
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0)
            printf("%d ", i);
        i++;
    }
    return 0;
}
