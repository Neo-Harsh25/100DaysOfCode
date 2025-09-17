/*Q8: Write a program to find and display the sum of the first n natural numbers.*/

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/


#include<stdio.h>
int main(){
    int a,b;
    printf("enter n: ");
    scanf("%d",&b);
    a= b*(b+1)/2;
    printf("the sum of first %d natural numbers is %d", b,a);   
}