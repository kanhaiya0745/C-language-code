#include <stdio.h>
#include <conio.h>

int main()
{
    int marks;

    printf("Enter the number between 1 to 100");
    scanf("%d", &marks);

    switch (marks)
    {
    case 1:
        printf("your number is b/w 90 to 100 so grade A \n");
        break;

    case 2:
        printf("your number is b/w 80 to 90 so grade B \n");
        break;
    case 3:
        printf("your number is b/w 70 to 80 so grade c \n");
        break;
    default:
        printf("Invalid number");

        break;
    }
    return (0);
}