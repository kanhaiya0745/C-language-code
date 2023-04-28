// program no =1 day, saturday, 27 aug 

// #include<stdio.h>
// #include<conio.h>

// void print ();
// int main(){
//     print();
//     return(0);
// }

// void print (){
//     printf("This world is so beautiful");
// }

// program no =2 

// #include<stdio.h>
// #include<conio.h>

// void morning();
// void afternoon();
// void evening();



// int main(){
//  morning();
//  afternoon();
//  evening();
    
//     return(0);
// }

// void morning(){
//     printf("Hello sir, Good morning! \n");
//     afternoon();
// }
// void afternoon(){
//     printf("Hello sir, Good afternoon! \n");
//     evening();

// }

// void evening(){
//     printf("Hello sir, Good evening! \n");

// }

// program no =3

// #include<stdio.h>
// #include<conio.h>

// int sum(int a , int b);
// int main(){
//     int x, y,z;

//     printf("Enter the value of x ");
//     scanf("%d",&x);

//     printf("Enter the value of y ");
//     scanf("%d",&y);

//     z=sum(x,y);
//     printf("The value of z is %d \n",z);
//     return(0);  
// }
// int sum(int a , int b){
//     int c;
//     c=a+b;
//    // return c;
   
// }

// program 4
// ----> Wap a prorgram to calculate the subtraction of 2 number


// #include<stdio.h>
// #include<conio.h>

// int subtraction(int a, int b);

// int main(){
//     int x,y,z;


//     printf("Enter the value of x ");
//     scanf("%d",&x);

//     printf("Enter the value of y ");
//     scanf("%d",&y);

//     z= subtraction(x,y);

//     printf("The value of z is %d \n",z);

    
//     return(0);
// }

// int subtraction(int a, int b){
//     if(a<b){
//         printf("please Enter the a number is greater\n");

//     }
//     int c = (a-b);
//     return c;

// program 5 

//  calculating the area of square 
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// int main(){
    
//     int side;

//     printf("Enter the value of side \n");
//     scanf("%d",&side);

//     printf("The area of square is %f", pow(side,2));
//     return(0);
// }


// program no 6

// #include<stdio.h>
// #include<conio.h>

// int factorial(int x);

// int main(){
//     int a;

//     printf("Enter the number of a which you want to calculate the factorial \n");
//     scanf("%d",&a);

//     printf("The factorial of %d is %d \n",a,factorial(a));
    
//     return(0);
// }

// int factorial(int x){
//     if(x==1 || x==0){
//         return 1;
//     }

//     else{
//         return x*factorial(x-1);
//     }
// }

//          program no 7

// Wap USING FUNCTION TO FIND AVERAGE OF THREE NUMBER.

// #include<stdio.h>
// #include<conio.h>

// float average (int a, int b, int c);

// int main(){
//     int x,y,z ;

// printf("Enter the physics marks :");
// scanf("%d", &x);

// printf("Enter the chemistry marks :");
// scanf("%d", &y);

// printf("Enter the math marks :");
// scanf("%d", &z);
    
// printf("The value of average is %f",average(x,y,z));
//     return(0);
// }

// float average (int a, int b, int c){
//     float d= (a+b+c)/3;
//     return d;

// }


//  Date -29 august 2022, Day-

#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
