//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       char cSrc[20] = {'\0'};
       char cDest[20];
       int i = 0, j = 0;
       
       printf("\n Enter A String : ");
       gets(cSrc);
       
       while(cSrc[i]!= '\0')
       {
         i++;
       }
       
       i = i - 1;
       
       while(i >= 0)
       {
         cDest[j] = cSrc[i];
         j++;
         i--;
       }
       
       cDest[j] = '\0';
       
       for(i = 0; i < j; i++)
       {
         if(cSrc[i]!= cDest[i])
         {
           break;
         }
       }
       
       if(i == j)
       {
         printf("\n\n Given String Is PALINDROM..!");
       }
       else
       {
         printf("\n\n Given String Is NOT PALINDROM..!");
       }
       
       getch();
       return 0;
}
       
