//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], w[100];
    int i = 0, j = 0;
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        if (s[i] != ' ' && s[i] != '\n') {
            w[j++] = s[i];
        } else {
            for (int k = j - 1; k >= 0; k--)
                printf("%c", w[k]);
            if (s[i] == ' ') printf(" ");
            j = 0;
        }
        i++;
    }
    return 0;
}
