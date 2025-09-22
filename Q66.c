//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>
int main() {
    int n, i, x, pos=0;
    scanf("%d", &n);
    int a[n+1];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);

    // Find position to insert
    for(i=0; i<n; i++) {
        if(a[i] > x) {
            pos = i;
            break;
        }
        pos = i+1;
    }

    // Shift elements to right
    for(i=n; i>pos; i--) {
        a[i] = a[i-1];
    }

    a[pos] = x;
    for(i=0; i<=n; i++) printf("%d ", a[i]);
    return 0;
}
