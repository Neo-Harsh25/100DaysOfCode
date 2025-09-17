/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/


#include<stdio.h>
int main(){
    int a,b ;
    printf("Enter the first side: ");
    scanf("%d", &a);
    printf("Enter the second side: ");
    scanf("%d",&b);
    printf("the area of a rectangle with sides %d units and %d units is %d\n", a,b,a*b);
    printf("the perimeter of a rectangle with sides %d units and %d units is %d\n", a,b,a+a+b+b);
}
