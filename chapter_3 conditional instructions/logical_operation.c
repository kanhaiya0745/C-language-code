#include<stdio.h>
#include<conio.h>

int main(){
    int age ;
    int vippass = 0;
    vippass=1;

    printf("enter your age :\n");
    scanf("%d", &age);

    if ((age<=90&& age>=18)|| (vippass==1)){
        printf("you are less than 90 and avove 18 so you can drive ");
    }
    else {
        printf("you can't drive");
    }
     
    return(0);
}


