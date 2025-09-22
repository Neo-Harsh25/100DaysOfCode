//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
int main() {
    long n, temp;
    int count[10]={0}, i, max=0, digit;
    scanf("%ld", &n);
    temp = n;
    while(temp>0) {
        count[temp%10]++;
        temp /= 10;
    }
    for(i=0; i<10; i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }
    printf("%d", digit);
    return 0;
}
