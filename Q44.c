//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>
int main() {
    int n, i=1, count=1;
    double sum=0.0;
    scanf("%d", &n);
    while(count<=n) {
        if(count==1)
            sum += 1;
        else
            sum += (double)(2*count-1)/(2*count);
        count++;
    }
    printf("Approximate sum: %.1lf", sum);
    return 0;
}
