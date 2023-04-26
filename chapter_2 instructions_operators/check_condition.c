#include<stdio.h>
#include<conio.h>

int main (){
    int num;

    printf("enter the number\n");
    scanf("%d", &num);

    printf("Divisibility test retun %d \n", num%97);

    return(0);
}