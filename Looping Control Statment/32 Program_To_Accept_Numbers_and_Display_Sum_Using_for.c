

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0, Cnt = 0, Sum = 0, No = 0;

         printf("\n\t=========================================================\n");

         printf("\n\t How Many Numbers Do You Have TO Calculate Sum = ");
         scanf("%d",&No);

         printf("\n\t Enter %d Numbers => \n",No);

         for(Cnt = 1 ; Cnt <= No ; Cnt++)
         {
             printf("\n\t Enter Number %d = ",Cnt);
             scanf("%d",&Num);
             Sum=Sum+Num;
         }

         getch();
         system("cls");

         printf("\n\t=========================================================\n");

         printf("\n\t Addition Of %d Numbers = %d",No,Sum);
         printf("\n\n\t\t Thanks !!!\n");

         printf("\n\t=========================================================\n");

         getch();
         return 0;
}