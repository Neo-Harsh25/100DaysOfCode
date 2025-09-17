//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the given criteria.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>
int main(){
    int p;
    printf("enter percentage: ");
    scanf("%d",&p);
    if(p>=90 && p<=100)
        printf("Grade A");
    else if(p>=80)
        printf("Grade B");
    else if(p>=70)
        printf("Grade C");
    else if(p>=60)
        printf("Grade D");
    else
        printf("Grade F");
    return 0;
}
