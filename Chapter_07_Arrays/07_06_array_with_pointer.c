#include<stdio.h>
#include<conio.h>

int main(){
    int marks[5];
    int *ptr;
    ptr= marks;

    for(int i =0; i<5; i++){
        printf("Enter the marks of student %d \n",i+1);
        scanf("%d",ptr);
        ptr++;

    }

        for(int i =0; i<5; i++){
        printf(" The value ofmarks of student %d is %d \n ",i+1, marks[i]);
        }
    return(0);
}