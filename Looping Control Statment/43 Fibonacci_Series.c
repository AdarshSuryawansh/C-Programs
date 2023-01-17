

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = -1, Num2 = 1, Sum = 0, i = 0, U_No = 0;
        printf("\n Enter Number = ");
        scanf("%d",&U_No);

        for(i = 1; i <= U_No ; i ++)
        {
                Sum = Num1 + Num2;
                Num1 = Num2;
                Num2 = Sum;
                printf("\n\n %d",Sum);
        }

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}