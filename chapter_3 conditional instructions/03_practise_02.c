#include<stdio.h>
#include<conio.h>

int main(){
    int physics,chemistry, math;
    float  total;

    printf("Enter the physics marks ");
    scanf("%d",&physics);

    printf("Enter the chemistry marks");
    scanf("%d",&chemistry);

    printf("Enter the chemistry marks");
    scanf("%d",&math);
total= (physics+chemistry+math)/3;

if ( physics>=33 && chemistry>=33 && math>=33&&(total>=40))
{
    printf("you are pass congrulations, your percentage is %f \n", total);

}
else {
    printf("you are fail keep work hard, your percentage is  %f \n",total);
}
    return(0);
}

