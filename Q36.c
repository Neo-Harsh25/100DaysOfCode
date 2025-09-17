//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>
int main() {
    int a, b, i=1, hcf=1;
    scanf("%d %d", &a, &b);
    while(i<=a && i<=b) {
        if(a%i==0 && b%i==0)
            hcf = i;
        i++;
    }
    printf("%d", hcf);
    return 0;
}
