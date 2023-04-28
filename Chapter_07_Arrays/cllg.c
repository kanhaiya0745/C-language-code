// // // #include<stdio.h>
// // // #include<conio.h>

// // // int main(){
// // //     for(int i=1;i<5; i++){
// // //         printf("hello world\n");
// // //     }
// // //     return(0);
// // // }

#include<stdio.h>

// void printArray(int *ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element %d is %d\n", i+1, *(ptr+i)); 
//     }
// }

// v


#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dX%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("******************************************************\n\n");
}

int main(){
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);

    return 0;
}