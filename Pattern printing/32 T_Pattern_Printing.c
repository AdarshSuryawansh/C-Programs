

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;

         printf("\n Enter Odd Number For Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n Pattern is => \n\n");

         for(r = 1; r <= Cnt+3; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                          if(r == 1 || c == Cnt /2+1)
                          {
                                printf(" * ");
                          }
                          else
                          {
                                printf("   ");
                          }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}