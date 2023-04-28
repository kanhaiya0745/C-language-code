// Wap to print good morning function print good morning
// Wap to print good afternoon function print good afternoon
// Wap to print good evening function print good evening

#include <stdio.h>
#include <conio.h>

void good_morning();
void good_fternoon();
void good_evening();

int main()
{

    good_morning();

    printf("program finished good kanhaiya, keep it up \n");

    return (0);
}

void good_morning()
{
    printf(" Good morning Kanhaiya\n\n");
    good_fternoon();
}
void good_fternoon()
{
    printf(" Good afternoon Kanhaiya\n\n");
    good_evening();
}
void good_evening()
{
    printf(" Good evening Kanhaiya\n\n");
}