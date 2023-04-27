#include <stdio.h>
#include <conio.h>

int main()
{
    int year;

    printf("Enter a year:");
    scanf("%d", &year);

    if (year % 4 == 0)
        ;
    {
        printf("this is leap year %d \n", year);
    }

    else if (year % 400 == 0)
    {
        printf("this is leap year %d\n",year);
    }

    else if (year % 100 == 0)
    {
        printf("this is not a leap year %d\n",year);
    }

    return (0);
}