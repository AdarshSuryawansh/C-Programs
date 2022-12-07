

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0, Cnt = 0,Start = 11, End = 20;

         Up:
         printf("\n\t==============***********=================\n");

         printf("\n\t Enter Positive Integral Number = ");
         scanf("%d",&Num);

         if(Num <= 1)
         {
               printf("\n\t Invalid Number. \n\n\t Please Enter Another Number.\n");
               getch();
               system("cls");
               goto Up;
         }

         for(Cnt = 2; Cnt < Num; Cnt++)
         {
                if(Num % Cnt == 0)
                {
                      break ;
                }
         }

         if(Cnt == Num)

         {
                 printf("\n\t %d is Prime Number",Num);
         }
         else
         {
                 printf("\n\t %d is Not a Prime Number",Num);
         }

         printf("\n\n\t==============***********=================");
         printf("\n\n\t\t Thanks !!!\n");

         getch();
         return 0;
}