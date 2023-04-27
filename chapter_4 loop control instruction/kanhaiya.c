// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int i=0 ;

//     while(i<=20){
//         if(i>=10){
//             printf("The value of i is %d \n ", i);
//         }
//     i++;
//     }
//     return(0);
// }

// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int n;
//     printf("Enter the value of n \n ");
//     scanf("%d", &n);

//     for(int i=n; i; i--){
//         printf("The value of reverse is %d \n", i);
//     }
//     return(0);
// }

// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int a , b;

// printf("Enter the value of a ");
// scanf("%d",a);

// printf("Enter the value of b");
// scanf("%d", &b);

//     for( int a; a<=b; a++){
//         printf("The value of a is %d \n",a);
//     }
//     return(0);
// }

// #include<stdio.h>

// int main(){
//     printf("****Multiplication table of 10****\n\n");
//     for(int i=10;i;i--){
//         printf("10 X %d = %d\n", i, 10*i);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     // factorial(4) - 1 * 2 * 3 * 4 
//     // factorial(6) - 1 * 2 * 3 * 4 * 5 * 6
//     int i=0, n=7, factorial=1;
//     for(i=1;i<=n;i++){
//         factorial *=i;
//     }
//     printf("The value of factorial %d is %d", n, factorial);
//     return 0;
// }

#include<stdio.h>

int main(){
    // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers. 
    // Disclaimer: This is not the best method to solve this problem
    int n = 2, prime=1;
    for(int i=2;i<n;i++){
        if (n%i==0 ){
            prime = 0;
            break;
        }
    }
    if (prime==0){
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }
    return 0;
}