#include<stdio.h>
#include<conio.h>

int main(){
    int n;

    printf("Enter the value of n \n");
    scanf("%d",&n);

    for(int i=n; i; i--){
        printf("The value of i is in reverse order is  %d \n ",i);
    } 

    return(0);
}