//Q25: Program to implement a basic calculator using switch-case.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/

#include<stdio.h>
int main(){
    int a,b,res;
    char op;
    printf("Enter two numbers and operator (+,-,*,/,%%): ");
    scanf("%d %d %c",&a,&b,&op);

    switch(op){
        case '+': res=a+b; break;
        case '-': res=a-b; break;
        case '*': res=a*b; break;
        case '/': 
            if(b!=0) res=a/b;
            else {
                printf("Division by zero not allowed");
                return 0;
            }
            break;
        case '%': 
            if(b!=0) res=a%b;
            else {
                printf("Modulo by zero not allowed");
                return 0;
            }
            break;
        default: 
            printf("Invalid operator");
            return 0;
    }
    printf("%d",res);
    return 0;
}
