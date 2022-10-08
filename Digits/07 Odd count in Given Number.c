//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, O_cnt = 0, Dig = 0, Temp = 0;
       up:
         printf("\n\n Enter Positive Integre Number => ");
         scanf("%d",&No);   //805072
         
         if(Temp < 0)
         {
           printf("\n Invalid Input... ");
           goto up;
         }
         
         Temp = No;
         
         while(Temp > 0)
         {
           Dig = Temp % 10;
           if(Dig % 2== 1)
           {
             O_cnt++;
           }
           Temp = Temp / 10;
         }
         
         printf("\n\n ODD Digits Count In Given Number %d is = %d",No,O_cnt);
         
         getch();
         return 0;
}

