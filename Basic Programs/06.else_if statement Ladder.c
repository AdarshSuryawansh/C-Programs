//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
      float Amount = 0.0;
      printf("Enter your account balance=");
      scanf("%f",&Amount);
       
      if(Amount>10000)
      {
          printf("\n\n\t WELCOME to Mall!!!\n");
          printf("\n\n You are prime coustmer");
          printf("\n\t Go to counter No7 for prime offer\n");
      }
      
      else if(Amount>=7000)
      {
          printf("\n\n\t WELCOME to Mall!!!\n");
          printf("\n\t You can enjoy all shops\n");
      }
      
      else if(Amount>1000)
      {
          printf("\n\n\t WELCOME to Mall!!!\n");
          printf("\n\t You can shop at Ground floar\n");
      }
          printf("\n\nThanks For visit !!!");
          
       getch();
       return 0;
}