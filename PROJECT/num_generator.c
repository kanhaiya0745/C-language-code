#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    
    int number;
    srand(number);

    number= rand()%100+1;
    printf("The number b/w (1 to 100) is : %d " , number);

    return(0);
}