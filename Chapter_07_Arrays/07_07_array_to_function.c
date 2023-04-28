#include<stdio.h>
#include<conio.h>

void printaray(int ptr[], int n){
    for(int i =0; i<n; i++){
        printf("The value of element is %d is %d \n",i+1, ptr[i]);



    }

    ptr [2]= 689;
}


int main(){
    int arr[] = {1, 2,34, 56,89, 90, 87};
    printaray(arr,7);

    printf("%d",arr[2]);
    return(0);
}