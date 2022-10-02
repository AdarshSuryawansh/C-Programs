//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
       float Amount= 0.0;
       
       printf("\n Enter your account balance =");
       scanf("%f",&Amount);
       
       if(Amount>1000)
       {
           printf("\n\n\t WELCOME to Mall !!!");
       }
       else
       {
           printf("\n\n\t Minimum balance required to shop is 1000+\n");
       }
           printf("\n\n Thanks for visit!!!");
           
        getch();
        return 0;
}



