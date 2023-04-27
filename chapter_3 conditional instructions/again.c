#include<stdio.h>
#include<conio.h>

int main(){
    int rating;

    printf("enter rating between (1-5):\n");
    scanf("%d", &rating);

    switch(rating){
        case 1:
            printf("your rating is 1 :\n ");
            
            break;

        case2:
            printf("your rating is : 2 \n");
            
            break;

        case3:
            printf("your rating is : 3 \n");
        
            break;

        default:
            printf("Invalid rating !");
            
            break;

    }
    return(0);
}