//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>
int main() {
    int n1, n2, i;
    scanf("%d", &n1);
    int a[n1];
    for(i=0; i<n1; i++) scanf("%d", &a[i]);
    scanf("%d", &n2);
    int b[n2];
    for(i=0; i<n2; i++) scanf("%d", &b[i]);
    for(i=0; i<n1; i++) printf("%d ", a[i]);
    for(i=0; i<n2; i++) printf("%d ", b[i]);
    return 0;
}
