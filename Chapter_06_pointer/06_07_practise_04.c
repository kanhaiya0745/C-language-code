
#include<stdio.h>
#include<conio.h>


void sumAndAvg(int a, int b, int *sum, float * avg){
    *sum= (a+b);
    *avg= (float)(*sum)/2;

}
int main(){
    int i,j, sum;
    float avg;

    printf("Enter the value of i");
    scanf("%d",&i);

    printf("Enter the value of j");
    scanf("%d", &j);

    sumAndAvg(i,j, &sum, &avg);
    printf("The value of sum  is %d  \n",sum);

    printf("The average of sum is % .2f \n", avg);

    printf("");

    return(0);
}

// #include<stdio.h>
// #include<conio.h>


// int print_sum(int x, int y);

// float print_average(int x,int y);


// int main(){
//     int x,y,z;

//     printf("Enter the value of x");
//     scanf("%d",&x);

//     printf("Enter the value of y");
//     scanf("%d",&y);
    
    
//     printf("The sum of two number is %d \n",print_sum(x,y));

//     printf("The average of two number is % .2f \n",print_average(x,y));


//     return(0);
// }

// int print_sum(int x, int y){
//     return (x+y);

// }

// float print_average(int x,int y){
//     float average;
//     average= (float)(x+y)/2;
// return average;
// }