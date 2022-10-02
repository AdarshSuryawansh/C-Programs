#include<stdio.h>
#include<conio.h>
int main()
{
     int Num1=0,Num2=0;

     printf("\n Enter first number =");
     scanf("%d",&Num1);
     printf("\n Enter 2nd number =");
     scanf ("%d",&Num2);

     if (Num1>Num2)
     {
         printf("\n Number 1 %d is maximum",Num1);
     }
     else
     {
         printf("\n Number 2 %d is maximum",Num2);

     }

       printf("\n Thanks !!!");

       getch();
       return 0;
}
