#include<stdio.h>
#include<conio.h>

int main(){
    int n,i, arr[20],sum =0, max;

    printf("Enter the size of array");
    scanf("%d",&n);

    printf("Enter the Elements of array\n");
    for(i=0; i<n; i++){
        scanf("%d",& arr[i]);
    }

    printf("The elements are");
    for(i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }

    for(i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("The sum of array is %d \n ", sum);

    max = arr[i];
    for(i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    printf("The maximum Elements are %d \n",max);

    return(0);
}