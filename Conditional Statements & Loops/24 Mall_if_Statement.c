#include<stdio.h>
#include<conio.h>

int main()
{
    float Amount=0.0;

    printf("\n Enter Your Account Balnce=");
    scanf("%f",&Amount);

    printf("\n\n======================*********====================");

    if(Amount > 1000)
    {
        printf("\n\t Welcome To Mall !!!");
        printf("\n\t Enjoy Your Shopping !!!");
    }

    printf("\n\n======================*********=====================");

    getch();
    printf("\n Thanks For Visit !!!\n");

    getch()
    return 0;
}
