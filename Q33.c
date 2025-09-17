//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>
int main() {
    int n, t, r, s=0, d=0;
    scanf("%d", &n);
    t = n;
    while(t>0) {
        t /= 10;
        d++;
    }
    t = n;
    while(t>0) {
        r = t % 10;
        s += pow(r, d);
        t /= 10;
    }
    if(s == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
