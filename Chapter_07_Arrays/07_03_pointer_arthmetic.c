// #include<stdio.h>

// int main(){
//     int i =34;
//     int*ptr = &i ;

//     printf("The value of i is %d \n", ptr);

//     ptr = ptr-1;
//      ptr = ptr-2;

//      ptr=ptr+5;

//     printf("The value of i is %d \n", ptr);

//     return(0);
// }

// Now looking character how many bytes taking for 1 character;

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char k = 'a';
//     char *ptr = &k;

//     // printf("The value of k is %d \n", ptr);

//     ptr = ptr+2;

//     // printf("The value of k is %d \n", ptr);

//     ptr= ptr+5;
//     printf("The value of k is %d \n", ptr);

//     return (0

// program no 3
// Now looking towards float  pointer how many bites are taking float pointer;

#include <stdio.h>
#include <conio.h>

int main()
{
    float kanhaiya = 3.5;
    float *ptr;
    ptr = &kanhaiya;

    printf("The value of kanhaiya  is %d \n", ptr);

    ptr = ptr + 10;

    printf("The value of kanhaiya  is %d \n", ptr);

    return (0);
}
