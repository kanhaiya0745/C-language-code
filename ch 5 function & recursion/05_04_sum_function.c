// // Sum is a function which takes a and b as as input and returns an integer as an output

// #include<stdio.h>
// #include<conio.h>

// int sum(int a , int b);

// int main(){
//     int d;

//     d=sum(2,18);

//     printf("The value of sum is %d", d);

    
//     return(0);
// }

// int sum(int x , int y){
//     int c;
//     c=x+y;
//     return c;
// }

                // some prac


#include<stdio.h>
#include<conio.h>

int sum(int a , int b);

int main(){
    int a, b , c;

   printf("Enter the value of  a ");
   scanf("%d", &a);

    printf("Enter the value of  b ");
   scanf("%d", &b);
    
    c= sum ( a,b);
    printf("The sum is %d", c);
    return(0);
}

int sum(int x , int y){
    int c;
    c=x+y;
    return c;
}

                //some prac

