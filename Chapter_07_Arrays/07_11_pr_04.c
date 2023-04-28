// program of create an array of 10 integer and store the multiplication of table 

#include<stdio.h>
#include<conio.h>

int main(){
    int mul[10];
    int n;
    int x;

    printf("Enter the value of n");
    scanf("%d", &n);

    
    printf("Enter the value of x");
    scanf("%d", &x);

    for(int i =0; i<n; i++){

        mul[i]= x*(i+1);
    }

        for(int i =0; i<n; i++){
            printf("%dx%d= %d\n", x, i+1, mul[i]);
        }
    return(0);
}