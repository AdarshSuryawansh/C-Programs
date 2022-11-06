

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>>

int main()
{
        char cSrc[50] = {'\0'};
        int Cnt = 0, i = 0;

        printf("\n Enter a String = ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
                if(cSrc[i] >= '0' && cSrc[i] <= '9')
                {
                    Cnt++;
                }
                i++;
        }

        printf("\n The Digits Count in Given String = %d",Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}