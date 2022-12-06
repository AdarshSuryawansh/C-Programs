

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0;

         Up:
         printf("\n\t================**********==================\n");

         printf("\n\t Enter First Positive Integer Number = ");
         scanf("%d",&Num1);

         printf("\n\t Enter Second Positive Integer Number = ");
         scanf("%d",&Num2);

         while( Num1 <= Num2 )
         {
                 printf("\n\t Square Of %3d  = %6d",Num1,Num1*Num1);
                 Num1 ++;
         }

         printf("\n\n\t================**********==================\n");
         printf("\n\t Thanks !!!\n");

         getch();
         return 0;
}
