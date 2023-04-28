#include<stdio.h>
#include<conio.h>

void changes();
int main(){
    int b=344;

    printf("The value of b is before change is %d\n", b);

    changes();
    printf("The value of b is before change is %d\n", b);

    return(0);
}


void changes(){
    int b=77;
}
