

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Fact = 0,Temp = 0;




    Up:
        printf("\n Enter a Number to Find Factorial =>");
        scanf("%d",&No);

        if(No <= 0)
        {
            printf("\n only Positive Value Is Required \n");
            goto Up;
        }
        Fact = 1;

        Temp = No;

        while(Temp > 0)
        {
            Fact = Fact * Temp;
            Temp --;
        }
        printf("\n Factorial of Given Number %d = %d",No,Fact);

        ("\n Thanks ");
}