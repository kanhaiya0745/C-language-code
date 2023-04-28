#include<stdio.h>
#include<conio.h>

int main(){
    int i = 56;
    int *ptr = &i;
    int **prt_ptr= &ptr;

    printf("the value of i is %d",**prt_ptr);
    return(0);
}