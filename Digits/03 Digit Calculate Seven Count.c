#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0,Seven_cnt = 0, Dig = 0, Temp = 0;
        up:
          printf("\n Enter A Positive Integer Number => ");
          scanf("%d",&No);
          
          Temp = No;
          
          if(No < 0)
          {
            printf("\n Invalid Input... ");
            goto up;
          }
          while(Temp > 0)
          {
            Dig = Temp% 10;
            if(Dig == 7)
            {
              Seven_cnt++;
            }
            Temp = Temp / 10;
          }
          printf("\n\n Seven's In Given Number %d = %d.",No,Seven_cnt);
          
          getch();
          return 0;
}