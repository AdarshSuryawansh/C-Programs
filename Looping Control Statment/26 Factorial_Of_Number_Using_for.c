

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0, Temp = 0, Fact = 0;

         printf("\n\t Enter a Number For Finding Factorial = ");
         scanf("%d",&Num);

         for(Fact = 1, Temp = Num ; Temp > 1 ; Temp--)
         {
               Fact = Fact*Temp;
         }
         printf("\n\t Factorial of %d = %d",Num,Fact);

         printf("\n\n\t Thanks !!!\n");

         getch();
         return 0;
}
