

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main ()
{
    float Amount =0.0;

    printf("\n Enter Your Amount Balance =");
    scanf("%f",&Amount);
    printf("\n**********************==============================**********************\n");

    if( Amount > 1000)
    {
        printf("\n\n\t WELCOME to Mall !!!");
        printf("\n\n\t Enjoy Your shopping !!!");
    }

    printf("\n\n Thanks For Visit !!!");

    printf("\n**********************==============================**********************\n");


    getch();
    return 0;
}