#include<stdio.h>
#include<conio.h>

int main(){
    char str[]= "kanhaiya";

    char *ptr = str;

    while (*ptr!= '\0'){
        printf("%c",*ptr);
        ptr++;

    }

    
    return(0);
}