//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
     int Day=0;
     
     printf("\n Enter No Of Week(1-7)=");
     scanf("%d",&Day);
     
     switch(Day)
    {
     case 1:
       printf("\n Monday");
       break;
     case 2:
       printf("\n Tuesday");
       break;
     case 3:
       printf("\n Thrysday");
       break;
     case 4:
       printf("\n Wednesday");
       break;
     case 5:
       printf("\n Friday");
     case 6:
       printf("\n Saturday");
       printf("\n JAY HANUMAN");
     case 7:
       printf("\n Sunday");
       break;
       default:
       printf("\n In valid Input");
     }
     
     getch();
     return 0;
       
}