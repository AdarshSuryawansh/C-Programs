

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    Up:
        printf("\n\n Enter a Number = ");
        scanf("%d",&Num);

        if(Num % 2 == 0)
        {
            printf("\n %d is Neutral Number .",Num);
            goto Up;
        }
        if(Num % 2 == 0)
        {
            printf("\n %d is Even Number.",Num);
        }
        else
        {
            printf("\n %d is odd Number.",Num);
        }

        printf("\n\n Thanks !!!");

        getch();
        return 0;
}