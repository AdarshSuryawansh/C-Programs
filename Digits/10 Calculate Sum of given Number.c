//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Dig = 0, D_sum = 0, Temp = 0;
        up:
          printf("\n Enter Any Positive Number => ");
          scanf("%d",&No);
          
          Temp = No;
          
          if(No < 0)
          {
            if(" Invalid Input... ");
            goto up;
          }
          while(Temp > 0)
          {
            Dig = Temp % 10;
            D_sum = D_sum + Dig;
            Temp = Temp / 10;
          }
          
          printf("\n Sum Of Given Number %d is = %d.",No,D_sum);
          
          getch();
          return 0;
          
}


