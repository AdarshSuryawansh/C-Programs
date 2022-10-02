#include<stdio.h>
#include<conio.h>
int main()
{
    int Day=0;

    printf("\n Enter number of week (1-7)=");
    scanf("%d",&Day);

    if(Day==1)
    {
        printf("\n Monday");
    }
    else if(Day==2)
    {
        printf("\n Tuesday");
    }
    else if(Day==3)
    {
        printf("\n Wedensday");
    }
    else if(Day==4)
    {
        printf("\n Thrusday");
    }
    else if(Day==5)
    {
        printf("\n Friday");
    }
    else if(Day==6)
    {
        printf("\n Saturday");
    }
    else if(Day==7)
    {
        printf("\n Sunday");
    }
    else
    {
        printf("\n Only few number of week");
    }
        printf("\n\nThanks!!!");

     _getch();
     return 0;

}
