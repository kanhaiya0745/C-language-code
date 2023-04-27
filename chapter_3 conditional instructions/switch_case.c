// #include <stdio.h>
// #include <conio.h>

// int main(){
//     int rating;
//     printf("Enter your rating (1-5)\n");
//     scanf("%d", &rating);

//     switch (rating){
//     case 1:
//         printf("your rating is :1\n");
//         break;

//     case 2:
//         printf("your rating is: 2:\n");
//         break;

//     case 3:
//         printf("your rating is 3:\n");
//         break;

//     case 4:
//         printf("your rating is 4:\n");
//         break;

//     case 5:
//         printf("your rating is 5:\n");
//         break;

//     default:
//         printf("invalid rating");
//         break;
//     }

//     return (0);
// }


#include<stdio.h>

int main(){
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if(income>=250000 && income<=500000){
        tax = tax + 0.05 * (income - 250000);
    }
    
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }

    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    
    printf("Your net income tax to be paid by 26th of this month is %f\n", tax);

    return 0;
}