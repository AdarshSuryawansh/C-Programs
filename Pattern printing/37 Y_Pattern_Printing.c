

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;

         printf("\n Enter Odd Number For Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n\n pattern is =>\n\n");

         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 0; c <= Cnt; c++)
                  {
                           if(c == Cnt/2+1 && r >= Cnt/2+1 || r == c && r <= Cnt/2+1 || r+c == Cnt+1 && r <= Cnt/2)
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