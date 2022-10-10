

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0,Num2 = 0;

    printf("\n Enter First Number =");
    scanf("%d",&Num1);

    printf("\n Enter Second Number =");
    scanf("%d",&Num2);

    if(Num1 > Num2)
    {
        printf("\n Number %d is Maximum",Num1);
    }
    else
    {
        printf("\n Number %d is Maximum",Num2);
    }

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}