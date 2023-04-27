#include<stdio.h>
#include<conio.h>

int main(){
    int n, i =1;

printf("Enter the value of n");
scanf("%d",&n);
do{
    printf("Enter the value of i %d\n",i);
    i++;
}while (i<=n);


    return(0);
}