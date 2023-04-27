#include<stdio.h>
#include<conio.h>

int main (){
    int age ;
    printf("enter your age : ");
    scanf("%d",&age);

    if(age>90){
        printf("you can't drive, because of you are above 90\n");
    }
    else{
        printf("you can drive\n ");
    }
    if (age==50) {
        printf("Half Centuary\n");
    }

    return(0);
}