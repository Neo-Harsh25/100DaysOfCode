/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.*/

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/


#include<stdio.h>
int main(){
    float a,F;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&a);
    F= (a * 9/5) + 32;
    printf("The temperature in Fahrenheit is %f\n", F);
}