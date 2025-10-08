//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    int i = 0;
    fgets(s, sizeof(s), stdin);

    if (s[0] != ' ' && s[0] != '\n')
        printf("%c.", toupper(s[0]));

    for (i = 1; s[i] != '\0'; i++) {
        if (s[i - 1] == ' ' && s[i] != ' ' && s[i] != '\n')
            printf("%c.", toupper(s[i]));
    }

    return 0;
}
