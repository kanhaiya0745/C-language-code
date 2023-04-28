#include<stdio.h>
#include<conio.h>

int main(){
    int a=8;

    int*ptr;
    ptr=&a;

    printf("the value of a is %d\n",a);

    printf("the value of a is %d \n",*ptr);


    printf("The adress of a is %u \n", &a);

    printf("The adress of a is %u \n",ptr);



    return(0);
}