//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], w[100], lw[100];
    int i = 0, j = 0, max = 0;
    fgets(s, sizeof(s), stdin);
    
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\n') {
            w[j++] = s[i];
        } else {
            w[j] = '\0';
            if (strlen(w) > max) {
                max = strlen(w);
                strcpy(lw, w);
            }
            j = 0;
        }
    }
    printf("%s", lw);
    return 0;
}
