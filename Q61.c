//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>
int main() {
    int n, i, x, found=-1;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for(i=0; i<n; i++) {
        if(a[i] == x) {
            found = i;
            break;
        }
    }
    if(found != -1) printf("Found at index %d", found);
    else printf("-1");
    return 0;
}
