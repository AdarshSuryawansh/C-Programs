

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    float Amount = 0.0;

    printf("\n Enter your Account Balance");
    scanf("%f",&Amount);

    if(Amount>1000)
    {
        printf("\n\n\t WELCOME TO MALL !!!\n");
    }
    else
    {
        printf("\n\n\t Minimum Balance Required To Shop Is 1000+\n");

    }

    getch();

    printf("\n\n Thanks For Visit !!!");

    getch();
    return 0;
}