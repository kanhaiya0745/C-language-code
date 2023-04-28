// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int i=54;
//     int *j= &i;

// printf("The value of i %d \n",i);
// printf("The value of i %d \n",*j);

// printf("The Address of i %u \n",&i);
// printf("The adress of i %u \n",j);

// printf("The adress of j %u \n",&j);
// printf("The value of j %d \n",*(&j));



//     return(0);
// }

// #include<stdio.h>
// void wrong_swap(int a, int b);
// void swap(int *a, int *b);

// int main(){
//     int x=3, y=4;
//     printf("The value of x and y before swap is %d and %d\n", x, y);
//     //wrong_swap(x, y); // will not work due to call by value
//     swap(&x, &y); // will work due to call by reference
//     printf("The value of x and y after swap is %d and %d\n", x, y);

//     return 0;
// }

// void wrong_swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }


#include <stdio.h>
int main()
{
    int num1, num2;
    float avg;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    avg= (float)(num1+num2)/2;

    //%.2f is used for displaying output upto two decimal places
    printf("Average of %d and %d is: %.2f",num1,num2,avg);
    return 0;
}