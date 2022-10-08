//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Z_cnt = 0, O_cnt = 0, E_cnt = 0, Dig = 0, Temp = 0;
       up:
         printf("\n\n Enter Positive Integer Number => ");
         scanf("%d",&No);
         
         if(No < 0)
         {
           printf("\n Invalid Input... ");
           goto up;
         }
         
         Temp = No;
         
         while(Temp > 0)
         {
           Dig = Temp % 10;
           if(Dig == 0)
           {
             Z_cnt++;
           }
           else if (Dig % 2 == 0)
           {
             E_cnt++;
           }
           else
           {
             O_cnt++;
           }
           Temp = Temp / 10;
         }
         
         printf("\n\n ZERO Digits Count In Given Number %d is = %d.",No,Z_cnt);
         printf("\n\n ODD Digits Conunt In Gievn Number %d is = %d.",No,O_cnt);
         printf("\n\n EVEN Digits Count In Given Number %d is = %d.",No,E_cnt);
         
         getch();
         return 0;
}

