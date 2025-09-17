//Q24: Program to calculate electricity bill based on units consumed.

/*
Rates:
First 100 units → ₹5/unit 
Next 100 units → ₹7/unit 
Next 100 units → ₹10/unit 
Above 300 units → ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700
*/

#include<stdio.h>
int main(){
    int u, bill=0;
    printf("Enter units consumed: ");
    scanf("%d",&u);

    if(u<=100)
        bill=u*5;
    else if(u<=200)
        bill=100*5+(u-100)*7;
    else if(u<=300)
        bill=100*5+100*7+(u-200)*10;
    else
        bill=100*5+100*7+100*10+(u-300)*12;

    printf("Bill: ₹%d",bill);
    return 0;
}
