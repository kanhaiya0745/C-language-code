#include<stdio.h>
#include<conio.h>

int main(){
    int arr[10];
    int *ptr = arr;
    ptr = ptr+2;
    if(ptr==&arr[2]){
        printf("These point to same location in the memory \n");
    }

    else{
            printf("These point do not point the same location in the memory \n");

    }
    return(0);
}