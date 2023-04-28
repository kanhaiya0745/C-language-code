#include<stdio.h>
#include<conio.h>

void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main(){
    int x, y;

    printf("Enter the value of x");
    scanf("%d",&x);
    
    printf("Enter the value of y");
    scanf("%d", &y);

    printf("The value of x and y before swap is %d and %d \n",x,y);
    swap(&x,&y);

    printf("The value of x and y bafter swap is %d and %d \n",x,y);

    
    return(0);
}

void wrong_swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a, int *b){

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
