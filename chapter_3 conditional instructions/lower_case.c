#include<stdio.h>

int main(){
    // 97-122 = a-z ASCII Values
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf("It is lowercase");
    }
   else{
    printf("it is not a lower case");
   }
    return 0;