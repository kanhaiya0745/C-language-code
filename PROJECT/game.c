#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, ngusses=1 ;

    srand(time(0));
    number= rand()%100+1;
    // printf("The number is %d\n", number);
    
    do{
        printf("Gusses the number b/w 1 t0 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please \n");
        }
        else if (guess<number){
            printf("Higher number please\n");
        }
        else{
            printf("you gussed it in %d attempt \n",ngusses );
        }

        ngusses++;

    }while (guess!=number);
    
    return(0);
}