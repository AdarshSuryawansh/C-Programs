

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0 ,Cnt = 0;

       printf("\n\n\t===========******************===========\n");

       printf("\n\t Enter Number To Print Its Table = ");
       scanf("%d",&Num);

       printf("\n\n\t===========******************===========\n");

       for(Cnt = 1 ; Cnt <= 10 ; Cnt++)
       {
             printf("\n\t\t %3d * %3d = %3d",Num,Cnt,Num * Cnt);
       }

       printf("\n\n\t===========*******************===========\n");
       printf("\n\t\t Thanks !!!\n");

       getch();
       return 0;
}
