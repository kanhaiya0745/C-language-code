#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num;

    srand(num);
    num= rand()%100+1;
    printf("The number is %d \n", num);
    return(0);
}