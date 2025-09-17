/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/


#include<stdio.h>
int main(){
    int a ;
    printf("Enter the radius: ");
    scanf("%d", &a);
    printf("the area of a circle with radius %d is %f\n", a, 3.14*(a*a));
    printf("the circumference of a circle with radius %d is %f", a,2*3.14*a);
}