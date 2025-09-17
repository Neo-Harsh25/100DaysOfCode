//Q23: Write a program to calculate library fine based on late days.

/*
Rules:
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main(){
    int d,f=0;
    printf("enter late days: ");
    scanf("%d",&d);
    if(d<=5)
        f=d*2;
    else if(d<=10)
        f=5*2+(d-5)*4;
    else if(d<=30)
        f=5*2+5*4+(d-10)*6;
    if(d>30)
        printf("Membership Cancelled");
    else
        printf("Fine ₹%d",f);
    return 0;
}
