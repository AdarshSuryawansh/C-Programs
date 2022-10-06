//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
   int No=0 , Dig=0 , D_sum=0, Temp=20;
   
   Up:
     printf("\n Enter any positive Number =");
     scanf("%d",&No);
     
     Temp=No;
     
     if(No<0)
     {
       if("Invalid input..");
       goto Up;
     }
     while(Temp>0)
     {
       Dig=Temp%10;
       D_sum=D_sum+Dig;
       Temp=Temp/10;
     }
     
     printf("\n Sum of given number%d",No,D_sum);
     
     getch();
     return 0;
}

