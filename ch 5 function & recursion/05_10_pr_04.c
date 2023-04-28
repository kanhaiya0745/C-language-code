#include<stdio.h>
#include<conio.h>

int fabonacci(int n);

int main(){
    int num, i;
    printf("Enter the number of term i \t");
    scanf("%d",&num);

    for(i=0; i<num; i++){
        printf("%d \t",fabonacci(i));
    }
    
    return(0);
}

int fabonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fabonacci(n-1)+fabonacci(n-2);
    }
}
