#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Cnt = 0;

         printf("\n Enter Odd Number for Count Of Rows and Columns = ");
         scanf("%d",&Cnt);

         printf("\n pattern is =>\n\n");

         for(r = 1; r <= Cnt; r++)
         {
                  for(c = 1; c <= Cnt; c++)
                  {
                          if(r == 1 || r == Cnt || c == Cnt/2+1)
                          {
                                printf(" *");
                          }
                          else
                          {
                                printf("  ");
                          }
                  }
                  printf("\n");
         }

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}