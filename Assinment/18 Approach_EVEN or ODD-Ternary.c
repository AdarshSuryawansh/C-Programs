#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;

    printf("\n Enter an Integer Number to cheque whether it is Even or odd=");
    Up:
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("\n Given number is Neutral.\n\n please other than zero Integer to check whether is Even or odd => ");
        goto Up;
    }
    else if(Num % 2 == 0)
    {
        printf("\n\t Given Number Is Even !!!");
    }
    else
    {
        printf("\n\t Given Number Is Odd");
    }
    printf("\n\n\t Thanks For Visiting !!!");

    getch();
    return 0;
}
