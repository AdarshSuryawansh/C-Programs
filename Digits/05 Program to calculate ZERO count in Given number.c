//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Zcnt = 0, Dig = 0, Temp = 0;
       up:
         printf("\n Enter Positive Integer Number => ");
         scanf("%d",&No);
         
         Temp = No;
         
         if(No < 0)
         {
           printf("\n Invalid Input... ");
           goto up;
         }
         while(Temp > 0)
         {
           Dig = Temp % 10;
           if(Dig==0)
           {
             Zcnt++;
           }
           Temp = Temp / 10;
         }
         printf("\n\n No of ZEROS In Given Number %d is = %d",No,Zcnt);
         
         getch();
         return 0;
         
}
         