// #include<stdio.h>
// #include<conio.h>

// int main(){
//     // int i=1,n=10, sum=0;
//     // while(i<=n){
//         sum= sum+i;
//         i++;
//     }

//         printf("The sum of first 10 natural number is %d \n",sum);

//     return(0);
// }

//  By while loop

#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 1, n = 10, sum = 0;
    // printf("Enter the value of n");
    // scanf("%d", &n);

    // for (int i; i <= n; i++)
    // {
    //     sum = sum + i;
    // }

    do
    {
        printf("The sum of (1st-10) natural number is %d \n", sum);
            sum += i;
            i++;
    } while (i <= n);
        // {

        // }
    // printf("The sum of first 10 natural number is %d \n ", sum);
        return (0);
}