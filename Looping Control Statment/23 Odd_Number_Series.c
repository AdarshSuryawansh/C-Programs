

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
         int iStart = 0, iEnd = 0;

         printf("\n\t===================*******===================\n");

         printf("\n\t Enter First Positive Integer Number = ");
         scanf("%d",&iStart);

         printf("\n\t Enter Second Positive Integer Number = ");
         scanf("%d",&iEnd);

         while(iStart <= iEnd)
         {
                if(iStart%2 != 0)
                {
                       printf("\n\t %d",iStart);
                }
                iStart ++;
         }

         printf("\n\t===================*******===================\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}