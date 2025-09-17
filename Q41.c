//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>
int main() {
    int n, digits=0, first, last, temp, swap;
    scanf("%d", &n);
    temp = n;
    last = temp % 10;
    while(temp>0) {
        temp /= 10;
        digits++;
    }
    first = n / pow(10, digits-1);
    if(digits==1) {
        printf("%d", n);
    } else {
        swap = n - first*pow(10, digits-1) - last + first + last*pow(10, digits-1);
        printf("%d", swap);
    }
    return 0;
}
