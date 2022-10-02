#//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
     int Day=0;
     
     printf("\nEnter Number Of Week(1-7)=");
     scanf("%d",&Day);
     
     if(Day==1)
     {
       printf("\n Monday");
     }
     else if(Day==2)
     {
       printf("\n Tuesday");
     }
     else if(Day==3)
     {
       printf("\n Thrusday");
     }
     else if(Day==4)
     {
       printf("\n Wednesday");
     }
     else if(Day==5)
     {
       printf("\n Friday");
     }
     else if(Day==6)
     {
       printf("\n Saturday");
       printf("\n JAY HANUMAN !!!");
     }
     else if(Day==7)
     {
       printf("\n Sunday");
     }
     else
     {

       printf("\n\n Only 7 week");
     }
       printf("\n\n Thanks!!!");
       
       getch();
       return 0;
       
}

