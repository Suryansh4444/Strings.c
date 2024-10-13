#include <stdio.h>
#include <string.h>

int main(){ 
   char st[] = "Harry";
//    printf("%d" , strlen(st)); 
   char target[30];
   strcpy(target, st);
   printf("%s %s", st, target);
    return 0;
}