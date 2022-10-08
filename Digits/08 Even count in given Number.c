//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, E_cnt = 0, Dig = 0, Temp = 0;
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
           if(Dig % 2 == 0)
           {
             E_cnt++;
           }
           Temp = Temp / 10;
         }
         
         printf("\n\ Even Digit Count In Given Number %d is  = %d.",No,E_cnt);
         
         getch();
         return 0;
}