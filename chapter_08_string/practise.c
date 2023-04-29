// #include<stdio.h>

// int main(){
//     char s[34];
//     printf("Enter your name: ");
//     gets(s); 
//     // puts(s); 
//     printf("Your name is %s", s);
//     return 0;
// }

#include<stdio.h>
#include <string.h>

int main(){
    char *st = "Harry";
    int a = strlen(st);
    printf("The length of string st is %d", a);
    return 0;
}