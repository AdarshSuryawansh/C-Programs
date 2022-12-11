

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
         int iStart = 0, iEnd = 0, i = 0;

         printf("\n\t==============***********=================\n");

         printf("\n\t Enter Starting Number = ");
         scanf("%d",&iStart);

         printf("\n\t Enter Ending Number = ");
         scanf("%d",&iEnd);

         while(iStart <= iEnd)
         {
               for(i = 2; i < iStart; i++)
               {
                     if(iStart % i == 0)
                     {
                           break;
                     }
                     else
                     {
                           continue;
                     }
               }
               if(i == iStart)
               {
                     printf("\n\t %d",iStart);
               }
               iStart++;
         }

         printf("\n\t==============***********=================\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
