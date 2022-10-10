

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>

int main()
{
    int Day = 0;

    printf("\n Enter Day Number (1-7) to view Day text = ");
    scanf("%d",&Day);

    printf("\n===============================================$$$$$$$$$$$$$$$$$$$$$=========================================\n");


    if (Day == 1)
    {
        printf("\n MONDAY");
    }
    else if(Day == 2)
    {
        printf("\n TUESDAY");
    }
    else if(Day == 3)
    {
        printf("\n WEDNESDAY");
    }
    else if(Day == 4)
    {
        printf("\n THURSDAY");
    }
    else if(Day == 5)
    {
        printf("\n FRIDAY");
    }
    else if(Day == 6)
    {
        printf("\n SATURDAY");
    }
    else if(Day == 7)
    {
        printf("\n SUNDAY");
    }
    else
    {
        printf("\n invalid Day");
    }

    printf("\n===============================================$$$$$$$$$$$$$$$$$$$$$=========================================\n");

    printf("\n THANK YOU");
}