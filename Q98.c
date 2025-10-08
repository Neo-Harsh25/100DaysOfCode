//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    int i = 0, len;
    fgets(s, sizeof(s), stdin);
    len = strlen(s);
    if(s[len-1]=='\n') s[len-1]='\0';

    int start = 1;
    printf("%c.", toupper(s[0]));

    for(i = 1; s[i] != '\0'; i++){
        if(s[i] == ' ' && s[i+1] != '\0' && s[i+1] != ' '){
            start++;
            if(start < 3)
                printf("%c.", toupper(s[i+1]));
            else {
                printf(" ");
                for(int j=i+1; s[j]!='\0'; j++)
                    printf("%c", s[j]);
                break;
            }
        }
    }
    return 0;
}
