#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "ABCD";
    char s2[] = "CDAB";
    char temp[100];

    strcpy(temp, s1);
    strcat(temp, s1);

    if(strstr(temp, s2))
        printf("True");
    else
        printf("False");

    return 0;
}
