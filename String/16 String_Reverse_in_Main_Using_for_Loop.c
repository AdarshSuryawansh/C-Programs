

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'}, cDest[20] = {'\0'};
        int i = 0, j = 0;

        printf("\n\n Enter a String = ");
        gets(cSrc);

        for(i = 0; cSrc[i] != '\0'; i++);

        for(i = i-1, j = 0; i >= 0; i--, j++)
        {
                cDest[j] = cSrc[i];
        }
        cDest[j] = '\0';

        printf("\n\n==========================================================");

        printf("\n\n Given String = %s ",cSrc);
        printf("\n\n Reverse Of Given String is = %s\n",cDest);

        printf("\n\n==========================================================");
        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}