//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0, Search_Dig = 0, D_Cnt = 0, Dig = 0, Temp = 0;
      up:
        printf("\n\n Enter Positive Integer Number => ");
        scanf("%d",&No);
        
        if(No < 0)
        {
          printf("\n Invalid Input... ");
          goto up;
        }
        printf("\n Enter A Digit To Br Searched In Given Number => ");
        scanf("%d",&Search_Dig);
        
        if(Search_Dig > 9 || Search_Dig < 0)
        {
          printf("\n Enter Valid Input... ");
          goto up;
        }
        
        Temp = No;
        
        while(Temp > 0)
        {
          Dig = Temp % 10;
          if(Dig == Search_Dig)
          {
            D_Cnt++;
          }
          Temp = Temp / 10;
        }
        
        printf("\n\n Count Of %d In Given Number %d is = %d",Search_Dig,No,D_Cnt);
        
        getch();
        return 0;
}

