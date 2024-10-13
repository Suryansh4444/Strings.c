#include <stdio.h>

int main(){ 
    char st[] = "Harry";
    char s1[56] = "Harry";
    char s2[56] = "bhai";

    char target[30];
    strcpy(target, st);

    strcat(s1 , s2);
    printf("%s", s1)
    return 0;
}